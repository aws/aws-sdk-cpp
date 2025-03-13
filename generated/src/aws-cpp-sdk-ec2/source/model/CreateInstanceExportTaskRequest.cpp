/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateInstanceExportTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateInstanceExportTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateInstanceExportTask&";
  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_targetEnvironmentHasBeenSet)
  {
    ss << "TargetEnvironment=" << StringUtils::URLEncode(ExportEnvironmentMapper::GetNameForExportEnvironment(m_targetEnvironment)) << "&";
  }

  if(m_exportToS3TaskHasBeenSet)
  {
    m_exportToS3Task.OutputToStream(ss, "ExportToS3");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateInstanceExportTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
