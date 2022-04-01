/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpcAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeVpcAttributeRequest::DescribeVpcAttributeRequest() : 
    m_attribute(VpcAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeVpcAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeVpcAttribute&";
  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << VpcAttributeNameMapper::GetNameForVpcAttributeName(m_attribute) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeVpcAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
