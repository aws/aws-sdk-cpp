/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportImageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ImportImageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportImage&";
  if(m_architectureHasBeenSet)
  {
    ss << "Architecture=" << StringUtils::URLEncode(m_architecture.c_str()) << "&";
  }

  if(m_clientDataHasBeenSet)
  {
    m_clientData.OutputToStream(ss, "ClientData");
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_diskContainersHasBeenSet)
  {
    unsigned diskContainersCount = 1;
    for(auto& item : m_diskContainers)
    {
      item.OutputToStream(ss, "DiskContainer.", diskContainersCount, "");
      diskContainersCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_encryptedHasBeenSet)
  {
    ss << "Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_hypervisorHasBeenSet)
  {
    ss << "Hypervisor=" << StringUtils::URLEncode(m_hypervisor.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_licenseTypeHasBeenSet)
  {
    ss << "LicenseType=" << StringUtils::URLEncode(m_licenseType.c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
    ss << "Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }

  if(m_roleNameHasBeenSet)
  {
    ss << "RoleName=" << StringUtils::URLEncode(m_roleName.c_str()) << "&";
  }

  if(m_licenseSpecificationsHasBeenSet)
  {
    unsigned licenseSpecificationsCount = 1;
    for(auto& item : m_licenseSpecifications)
    {
      item.OutputToStream(ss, "LicenseSpecifications.", licenseSpecificationsCount, "");
      licenseSpecificationsCount++;
    }
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

  if(m_usageOperationHasBeenSet)
  {
    ss << "UsageOperation=" << StringUtils::URLEncode(m_usageOperation.c_str()) << "&";
  }

  if(m_bootModeHasBeenSet)
  {
    ss << "BootMode=" << StringUtils::URLEncode(BootModeValuesMapper::GetNameForBootModeValues(m_bootMode)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ImportImageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
