/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ResetInstanceAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ResetInstanceAttributeRequest::ResetInstanceAttributeRequest() : 
    m_attribute(InstanceAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String ResetInstanceAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ResetInstanceAttribute&";
  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << InstanceAttributeNameMapper::GetNameForInstanceAttributeName(m_attribute) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ResetInstanceAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
