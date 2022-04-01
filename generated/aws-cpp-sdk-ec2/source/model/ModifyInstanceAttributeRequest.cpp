/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest() : 
    m_sourceDestCheckHasBeenSet(false),
    m_attribute(InstanceAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_disableApiTerminationHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ebsOptimizedHasBeenSet(false),
    m_enaSupportHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceInitiatedShutdownBehaviorHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kernelHasBeenSet(false),
    m_ramdiskHasBeenSet(false),
    m_sriovNetSupportHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

Aws::String ModifyInstanceAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceAttribute&";
  if(m_sourceDestCheckHasBeenSet)
  {
    m_sourceDestCheck.OutputToStream(ss, "SourceDestCheck");
  }

  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << InstanceAttributeNameMapper::GetNameForInstanceAttributeName(m_attribute) << "&";
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ebsOptimizedHasBeenSet)
  {
    m_ebsOptimized.OutputToStream(ss, "EbsOptimized");
  }

  if(m_enaSupportHasBeenSet)
  {
    m_enaSupport.OutputToStream(ss, "EnaSupport");
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

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_instanceInitiatedShutdownBehaviorHasBeenSet)
  {
    m_instanceInitiatedShutdownBehavior.OutputToStream(ss, "InstanceInitiatedShutdownBehavior");
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

  if(m_sriovNetSupportHasBeenSet)
  {
    m_sriovNetSupport.OutputToStream(ss, "SriovNetSupport");
  }

  if(m_userDataHasBeenSet)
  {
    m_userData.OutputToStream(ss, "UserData");
  }

  if(m_valueHasBeenSet)
  {
    ss << "Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
