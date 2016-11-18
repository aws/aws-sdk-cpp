/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/CreateInstanceExportTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateInstanceExportTaskRequest::CreateInstanceExportTaskRequest() : 
    m_descriptionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_targetEnvironment(ExportEnvironment::NOT_SET),
    m_targetEnvironmentHasBeenSet(false),
    m_exportToS3TaskHasBeenSet(false)
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

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_targetEnvironmentHasBeenSet)
  {
    ss << "TargetEnvironment=" << ExportEnvironmentMapper::GetNameForExportEnvironment(m_targetEnvironment) << "&";
  }

  if(m_exportToS3TaskHasBeenSet)
  {
    m_exportToS3Task.OutputToStream(ss, "ExportToS3Task");
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

