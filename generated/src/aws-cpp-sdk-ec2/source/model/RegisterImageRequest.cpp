/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RegisterImageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String RegisterImageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RegisterImage&";
  if(m_imageLocationHasBeenSet)
  {
    ss << "ImageLocation=" << StringUtils::URLEncode(m_imageLocation.c_str()) << "&";
  }

  if(m_billingProductsHasBeenSet)
  {
    unsigned billingProductsCount = 1;
    for(auto& item : m_billingProducts)
    {
      ss << "BillingProduct." << billingProductsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      billingProductsCount++;
    }
  }

  if(m_bootModeHasBeenSet)
  {
    ss << "BootMode=" << StringUtils::URLEncode(BootModeValuesMapper::GetNameForBootModeValues(m_bootMode)) << "&";
  }

  if(m_tpmSupportHasBeenSet)
  {
    ss << "TpmSupport=" << StringUtils::URLEncode(TpmSupportValuesMapper::GetNameForTpmSupportValues(m_tpmSupport)) << "&";
  }

  if(m_uefiDataHasBeenSet)
  {
    ss << "UefiData=" << StringUtils::URLEncode(m_uefiData.c_str()) << "&";
  }

  if(m_imdsSupportHasBeenSet)
  {
    ss << "ImdsSupport=" << StringUtils::URLEncode(ImdsSupportValuesMapper::GetNameForImdsSupportValues(m_imdsSupport)) << "&";
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_architectureHasBeenSet)
  {
    ss << "Architecture=" << StringUtils::URLEncode(ArchitectureValuesMapper::GetNameForArchitectureValues(m_architecture)) << "&";
  }

  if(m_kernelIdHasBeenSet)
  {
    ss << "KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }

  if(m_ramdiskIdHasBeenSet)
  {
    ss << "RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }

  if(m_rootDeviceNameHasBeenSet)
  {
    ss << "RootDeviceName=" << StringUtils::URLEncode(m_rootDeviceName.c_str()) << "&";
  }

  if(m_blockDeviceMappingsHasBeenSet)
  {
    unsigned blockDeviceMappingsCount = 1;
    for(auto& item : m_blockDeviceMappings)
    {
      item.OutputToStream(ss, "BlockDeviceMapping.", blockDeviceMappingsCount, "");
      blockDeviceMappingsCount++;
    }
  }

  if(m_virtualizationTypeHasBeenSet)
  {
    ss << "VirtualizationType=" << StringUtils::URLEncode(m_virtualizationType.c_str()) << "&";
  }

  if(m_sriovNetSupportHasBeenSet)
  {
    ss << "SriovNetSupport=" << StringUtils::URLEncode(m_sriovNetSupport.c_str()) << "&";
  }

  if(m_enaSupportHasBeenSet)
  {
    ss << "EnaSupport=" << std::boolalpha << m_enaSupport << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RegisterImageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
