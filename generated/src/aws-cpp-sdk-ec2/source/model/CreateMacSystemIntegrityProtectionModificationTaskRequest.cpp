/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateMacSystemIntegrityProtectionModificationTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateMacSystemIntegrityProtectionModificationTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateMacSystemIntegrityProtectionModificationTask&";
  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_macCredentialsHasBeenSet)
  {
    ss << "MacCredentials=" << StringUtils::URLEncode(m_macCredentials.c_str()) << "&";
  }

  if(m_macSystemIntegrityProtectionConfigurationHasBeenSet)
  {
    m_macSystemIntegrityProtectionConfiguration.OutputToStream(ss, "MacSystemIntegrityProtectionConfiguration");
  }

  if(m_macSystemIntegrityProtectionStatusHasBeenSet)
  {
    ss << "MacSystemIntegrityProtectionStatus=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_macSystemIntegrityProtectionStatus)) << "&";
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateMacSystemIntegrityProtectionModificationTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
