/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RegisterImageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RegisterImageRequest::RegisterImageRequest() : 
    m_imageLocationHasBeenSet(false),
    m_architecture(ArchitectureValues::NOT_SET),
    m_architectureHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_enaSupport(false),
    m_enaSupportHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_billingProductsHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_rootDeviceNameHasBeenSet(false),
    m_sriovNetSupportHasBeenSet(false),
    m_virtualizationTypeHasBeenSet(false)
{
}

Aws::String RegisterImageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RegisterImage&";
  if(m_imageLocationHasBeenSet)
  {
    ss << "ImageLocation=" << StringUtils::URLEncode(m_imageLocation.c_str()) << "&";
  }

  if(m_architectureHasBeenSet)
  {
    ss << "Architecture=" << ArchitectureValuesMapper::GetNameForArchitectureValues(m_architecture) << "&";
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

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_enaSupportHasBeenSet)
  {
    ss << "EnaSupport=" << std::boolalpha << m_enaSupport << "&";
  }

  if(m_kernelIdHasBeenSet)
  {
    ss << "KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
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

  if(m_ramdiskIdHasBeenSet)
  {
    ss << "RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }

  if(m_rootDeviceNameHasBeenSet)
  {
    ss << "RootDeviceName=" << StringUtils::URLEncode(m_rootDeviceName.c_str()) << "&";
  }

  if(m_sriovNetSupportHasBeenSet)
  {
    ss << "SriovNetSupport=" << StringUtils::URLEncode(m_sriovNetSupport.c_str()) << "&";
  }

  if(m_virtualizationTypeHasBeenSet)
  {
    ss << "VirtualizationType=" << StringUtils::URLEncode(m_virtualizationType.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RegisterImageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
