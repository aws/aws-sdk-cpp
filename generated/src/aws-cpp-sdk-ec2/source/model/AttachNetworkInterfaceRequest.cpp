/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AttachNetworkInterfaceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String AttachNetworkInterfaceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AttachNetworkInterface&";
  if(m_networkCardIndexHasBeenSet)
  {
    ss << "NetworkCardIndex=" << m_networkCardIndex << "&";
  }

  if(m_enaSrdSpecificationHasBeenSet)
  {
    m_enaSrdSpecification.OutputToStream(ss, "EnaSrdSpecification");
  }

  if(m_enaQueueCountHasBeenSet)
  {
    ss << "EnaQueueCount=" << m_enaQueueCount << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_deviceIndexHasBeenSet)
  {
    ss << "DeviceIndex=" << m_deviceIndex << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AttachNetworkInterfaceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
