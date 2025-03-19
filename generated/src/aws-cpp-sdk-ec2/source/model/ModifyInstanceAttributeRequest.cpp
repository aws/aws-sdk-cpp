/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyInstanceAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceAttribute&";
  if(m_sourceDestCheckHasBeenSet)
  {
    m_sourceDestCheck.OutputToStream(ss, "SourceDestCheck");
  }

  if(m_disableApiStopHasBeenSet)
  {
    m_disableApiStop.OutputToStream(ss, "DisableApiStop");
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << StringUtils::URLEncode(InstanceAttributeNameMapper::GetNameForInstanceAttributeName(m_attribute)) << "&";
  }

  if(m_valueHasBeenSet)
  {
    ss << "Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
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

  if(m_disableApiTerminationHasBeenSet)
  {
    m_disableApiTermination.OutputToStream(ss, "DisableApiTermination");
  }

  if(m_instanceTypeHasBeenSet)
  {
    m_instanceType.OutputToStream(ss, "InstanceType");
  }

  if(m_kernelHasBeenSet)
  {
    m_kernel.OutputToStream(ss, "Kernel");
  }

  if(m_ramdiskHasBeenSet)
  {
    m_ramdisk.OutputToStream(ss, "Ramdisk");
  }

  if(m_userDataHasBeenSet)
  {
    m_userData.OutputToStream(ss, "UserData");
  }

  if(m_instanceInitiatedShutdownBehaviorHasBeenSet)
  {
    m_instanceInitiatedShutdownBehavior.OutputToStream(ss, "InstanceInitiatedShutdownBehavior");
  }

  if(m_groupsHasBeenSet)
  {
    unsigned groupsCount = 1;
    for(auto& item : m_groups)
    {
      ss << "GroupId." << groupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupsCount++;
    }
  }

  if(m_ebsOptimizedHasBeenSet)
  {
    m_ebsOptimized.OutputToStream(ss, "EbsOptimized");
  }

  if(m_sriovNetSupportHasBeenSet)
  {
    m_sriovNetSupport.OutputToStream(ss, "SriovNetSupport");
  }

  if(m_enaSupportHasBeenSet)
  {
    m_enaSupport.OutputToStream(ss, "EnaSupport");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
