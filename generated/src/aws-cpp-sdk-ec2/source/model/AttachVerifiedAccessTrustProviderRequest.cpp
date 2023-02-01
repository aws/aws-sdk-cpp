/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AttachVerifiedAccessTrustProviderRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AttachVerifiedAccessTrustProviderRequest::AttachVerifiedAccessTrustProviderRequest() : 
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_verifiedAccessTrustProviderIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String AttachVerifiedAccessTrustProviderRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AttachVerifiedAccessTrustProvider&";
  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
    ss << "VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }

  if(m_verifiedAccessTrustProviderIdHasBeenSet)
  {
    ss << "VerifiedAccessTrustProviderId=" << StringUtils::URLEncode(m_verifiedAccessTrustProviderId.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AttachVerifiedAccessTrustProviderRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
