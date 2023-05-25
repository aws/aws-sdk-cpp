/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RegisterInstanceEventNotificationAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RegisterInstanceEventNotificationAttributesRequest::RegisterInstanceEventNotificationAttributesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceTagAttributeHasBeenSet(false)
{
}

Aws::String RegisterInstanceEventNotificationAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RegisterInstanceEventNotificationAttributes&";
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


void  RegisterInstanceEventNotificationAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
