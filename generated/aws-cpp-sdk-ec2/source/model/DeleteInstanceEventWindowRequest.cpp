/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteInstanceEventWindowRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteInstanceEventWindowRequest::DeleteInstanceEventWindowRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_forceDelete(false),
    m_forceDeleteHasBeenSet(false),
    m_instanceEventWindowIdHasBeenSet(false)
{
}

Aws::String DeleteInstanceEventWindowRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteInstanceEventWindow&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_forceDeleteHasBeenSet)
  {
    ss << "ForceDelete=" << std::boolalpha << m_forceDelete << "&";
  }

  if(m_instanceEventWindowIdHasBeenSet)
  {
    ss << "InstanceEventWindowId=" << StringUtils::URLEncode(m_instanceEventWindowId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteInstanceEventWindowRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
