/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ResetSnapshotAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ResetSnapshotAttributeRequest::ResetSnapshotAttributeRequest() : 
    m_attribute(SnapshotAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ResetSnapshotAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ResetSnapshotAttribute&";
  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << SnapshotAttributeNameMapper::GetNameForSnapshotAttributeName(m_attribute) << "&";
  }

  if(m_snapshotIdHasBeenSet)
  {
    ss << "SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ResetSnapshotAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
