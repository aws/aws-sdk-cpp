/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateInstanceExportTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateInstanceExportTaskRequest::CreateInstanceExportTaskRequest() : 
    m_descriptionHasBeenSet(false),
    m_exportToS3TaskHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_targetEnvironment(ExportEnvironment::NOT_SET),
    m_targetEnvironmentHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String CreateInstanceExportTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateInstanceExportTask&";
  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_exportToS3TaskHasBeenSet)
  {
    m_exportToS3Task.OutputToStream(ss, "ExportToS3");
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_targetEnvironmentHasBeenSet)
  {
    ss << "TargetEnvironment=" << ExportEnvironmentMapper::GetNameForExportEnvironment(m_targetEnvironment) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateInstanceExportTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
