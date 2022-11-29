/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AttachNetworkInterfaceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AttachNetworkInterfaceRequest::AttachNetworkInterfaceRequest() : 
    m_deviceIndex(0),
    m_deviceIndexHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkCardIndex(0),
    m_networkCardIndexHasBeenSet(false),
    m_enaSrdSpecificationHasBeenSet(false)
{
}

Aws::String AttachNetworkInterfaceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AttachNetworkInterface&";
  if(m_deviceIndexHasBeenSet)
  {
    ss << "DeviceIndex=" << m_deviceIndex << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_networkCardIndexHasBeenSet)
  {
    ss << "NetworkCardIndex=" << m_networkCardIndex << "&";
  }

  if(m_enaSrdSpecificationHasBeenSet)
  {
    m_enaSrdSpecification.OutputToStream(ss, "EnaSrdSpecification");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AttachNetworkInterfaceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
