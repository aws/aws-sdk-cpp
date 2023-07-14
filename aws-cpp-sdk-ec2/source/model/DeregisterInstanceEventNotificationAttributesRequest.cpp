/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeregisterInstanceEventNotificationAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeregisterInstanceEventNotificationAttributesRequest::DeregisterInstanceEventNotificationAttributesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceTagAttributeHasBeenSet(false)
{
}

Aws::String DeregisterInstanceEventNotificationAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeregisterInstanceEventNotificationAttributes&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceTagAttributeHasBeenSet)
  {
    m_instanceTagAttribute.OutputToStream(ss, "InstanceTagAttribute");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeregisterInstanceEventNotificationAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
