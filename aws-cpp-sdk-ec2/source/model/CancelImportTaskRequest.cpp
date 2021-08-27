/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelImportTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CancelImportTaskRequest::CancelImportTaskRequest() : 
    m_cancelReasonHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_importTaskIdHasBeenSet(false)
{
}

Aws::String CancelImportTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelImportTask&";
  if(m_cancelReasonHasBeenSet)
  {
    ss << "CancelReason=" << StringUtils::URLEncode(m_cancelReason.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_importTaskIdHasBeenSet)
  {
    ss << "ImportTaskId=" << StringUtils::URLEncode(m_importTaskId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CancelImportTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
