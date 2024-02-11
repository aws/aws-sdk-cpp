/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteInstanceConnectEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteInstanceConnectEndpointRequest::DeleteInstanceConnectEndpointRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceConnectEndpointIdHasBeenSet(false)
{
}

Aws::String DeleteInstanceConnectEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteInstanceConnectEndpoint&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceConnectEndpointIdHasBeenSet)
  {
    ss << "InstanceConnectEndpointId=" << StringUtils::URLEncode(m_instanceConnectEndpointId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteInstanceConnectEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
