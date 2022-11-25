/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelExportTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CancelExportTaskRequest::CancelExportTaskRequest() : 
    m_exportTaskIdHasBeenSet(false)
{
}

Aws::String CancelExportTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelExportTask&";
  if(m_exportTaskIdHasBeenSet)
  {
    ss << "ExportTaskId=" << StringUtils::URLEncode(m_exportTaskId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CancelExportTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
