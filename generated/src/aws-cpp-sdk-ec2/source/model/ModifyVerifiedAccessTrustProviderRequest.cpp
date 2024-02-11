/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVerifiedAccessTrustProviderRequest::ModifyVerifiedAccessTrustProviderRequest() : 
    m_verifiedAccessTrustProviderIdHasBeenSet(false),
    m_oidcOptionsHasBeenSet(false),
    m_deviceOptionsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_sseSpecificationHasBeenSet(false)
{
}

Aws::String ModifyVerifiedAccessTrustProviderRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVerifiedAccessTrustProvider&";
  if(m_verifiedAccessTrustProviderIdHasBeenSet)
  {
    ss << "VerifiedAccessTrustProviderId=" << StringUtils::URLEncode(m_verifiedAccessTrustProviderId.c_str()) << "&";
  }

  if(m_oidcOptionsHasBeenSet)
  {
    m_oidcOptions.OutputToStream(ss, "OidcOptions");
  }

  if(m_deviceOptionsHasBeenSet)
  {
    m_deviceOptions.OutputToStream(ss, "DeviceOptions");
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_sseSpecificationHasBeenSet)
  {
    m_sseSpecification.OutputToStream(ss, "SseSpecification");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVerifiedAccessTrustProviderRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
