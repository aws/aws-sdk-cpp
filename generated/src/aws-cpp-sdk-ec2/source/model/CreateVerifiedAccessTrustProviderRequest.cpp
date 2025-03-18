/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVerifiedAccessTrustProviderRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateVerifiedAccessTrustProviderRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVerifiedAccessTrustProvider&";
  if(m_trustProviderTypeHasBeenSet)
  {
    ss << "TrustProviderType=" << StringUtils::URLEncode(TrustProviderTypeMapper::GetNameForTrustProviderType(m_trustProviderType)) << "&";
  }

  if(m_userTrustProviderTypeHasBeenSet)
  {
    ss << "UserTrustProviderType=" << StringUtils::URLEncode(UserTrustProviderTypeMapper::GetNameForUserTrustProviderType(m_userTrustProviderType)) << "&";
  }

  if(m_deviceTrustProviderTypeHasBeenSet)
  {
    ss << "DeviceTrustProviderType=" << StringUtils::URLEncode(DeviceTrustProviderTypeMapper::GetNameForDeviceTrustProviderType(m_deviceTrustProviderType)) << "&";
  }

  if(m_oidcOptionsHasBeenSet)
  {
    m_oidcOptions.OutputToStream(ss, "OidcOptions");
  }

  if(m_deviceOptionsHasBeenSet)
  {
    m_deviceOptions.OutputToStream(ss, "DeviceOptions");
  }

  if(m_policyReferenceNameHasBeenSet)
  {
    ss << "PolicyReferenceName=" << StringUtils::URLEncode(m_policyReferenceName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_sseSpecificationHasBeenSet)
  {
    m_sseSpecification.OutputToStream(ss, "SseSpecification");
  }

  if(m_nativeApplicationOidcOptionsHasBeenSet)
  {
    m_nativeApplicationOidcOptions.OutputToStream(ss, "NativeApplicationOidcOptions");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateVerifiedAccessTrustProviderRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
