/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/ModifyInstanceAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_attribute(InstanceAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_sourceDestCheckHasBeenSet(false),
    m_disableApiTerminationHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kernelHasBeenSet(false),
    m_ramdiskHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_instanceInitiatedShutdownBehaviorHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_ebsOptimizedHasBeenSet(false),
    m_sriovNetSupportHasBeenSet(false)
{
}

Aws::String ModifyInstanceAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceAttribute&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << InstanceAttributeNameMapper::GetNameForInstanceAttributeName(m_attribute) << "&";
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

  if(m_sourceDestCheckHasBeenSet)
  {
    m_sourceDestCheck.OutputToStream(ss, "SourceDestCheck");
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

  ss << "Version=2015-10-01";
  return ss.str();
}

