/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteVerifiedAccessTrustProviderRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteVerifiedAccessTrustProviderRequest::DeleteVerifiedAccessTrustProviderRequest() : 
    m_verifiedAccessTrustProviderIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String DeleteVerifiedAccessTrustProviderRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteVerifiedAccessTrustProvider&";
  if(m_verifiedAccessTrustProviderIdHasBeenSet)
  {
    ss << "VerifiedAccessTrustProviderId=" << StringUtils::URLEncode(m_verifiedAccessTrustProviderId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteVerifiedAccessTrustProviderRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
