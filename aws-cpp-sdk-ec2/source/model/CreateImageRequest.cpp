/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateImageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateImageRequest::CreateImageRequest() : 
    m_blockDeviceMappingsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_noReboot(false),
    m_noRebootHasBeenSet(false)
{
}

Aws::String CreateImageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateImage&";
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

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_noRebootHasBeenSet)
  {
    ss << "NoReboot=" << std::boolalpha << m_noReboot << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateImageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
