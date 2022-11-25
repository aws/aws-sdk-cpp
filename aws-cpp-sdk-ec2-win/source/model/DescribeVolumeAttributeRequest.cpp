/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVolumeAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeVolumeAttributeRequest::DescribeVolumeAttributeRequest() : 
    m_attribute(VolumeAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeVolumeAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeVolumeAttribute&";
  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << VolumeAttributeNameMapper::GetNameForVolumeAttributeName(m_attribute) << "&";
  }

  if(m_volumeIdHasBeenSet)
  {
    ss << "VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeVolumeAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
