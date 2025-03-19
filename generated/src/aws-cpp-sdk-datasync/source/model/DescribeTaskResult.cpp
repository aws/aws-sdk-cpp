/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTaskResult::DescribeTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTaskResult& DescribeTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");
    m_taskArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentTaskExecutionArn"))
  {
    m_currentTaskExecutionArn = jsonValue.GetString("CurrentTaskExecutionArn");
    m_currentTaskExecutionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceLocationArn"))
  {
    m_sourceLocationArn = jsonValue.GetString("SourceLocationArn");
    m_sourceLocationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationLocationArn"))
  {
    m_destinationLocationArn = jsonValue.GetString("DestinationLocationArn");
    m_destinationLocationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudWatchLogGroupArn"))
  {
    m_cloudWatchLogGroupArn = jsonValue.GetString("CloudWatchLogGroupArn");
    m_cloudWatchLogGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceNetworkInterfaceArns"))
  {
    Aws::Utils::Array<JsonView> sourceNetworkInterfaceArnsJsonList = jsonValue.GetArray("SourceNetworkInterfaceArns");
    for(unsigned sourceNetworkInterfaceArnsIndex = 0; sourceNetworkInterfaceArnsIndex < sourceNetworkInterfaceArnsJsonList.GetLength(); ++sourceNetworkInterfaceArnsIndex)
    {
      m_sourceNetworkInterfaceArns.push_back(sourceNetworkInterfaceArnsJsonList[sourceNetworkInterfaceArnsIndex].AsString());
    }
    m_sourceNetworkInterfaceArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationNetworkInterfaceArns"))
  {
    Aws::Utils::Array<JsonView> destinationNetworkInterfaceArnsJsonList = jsonValue.GetArray("DestinationNetworkInterfaceArns");
    for(unsigned destinationNetworkInterfaceArnsIndex = 0; destinationNetworkInterfaceArnsIndex < destinationNetworkInterfaceArnsJsonList.GetLength(); ++destinationNetworkInterfaceArnsIndex)
    {
      m_destinationNetworkInterfaceArns.push_back(destinationNetworkInterfaceArnsJsonList[destinationNetworkInterfaceArnsIndex].AsString());
    }
    m_destinationNetworkInterfaceArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Options"))
  {
    m_options = jsonValue.GetObject("Options");
    m_optionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Excludes"))
  {
    Aws::Utils::Array<JsonView> excludesJsonList = jsonValue.GetArray("Excludes");
    for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
    {
      m_excludes.push_back(excludesJsonList[excludesIndex].AsObject());
    }
    m_excludesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");
    m_scheduleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorDetail"))
  {
    m_errorDetail = jsonValue.GetString("ErrorDetail");
    m_errorDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Includes"))
  {
    Aws::Utils::Array<JsonView> includesJsonList = jsonValue.GetArray("Includes");
    for(unsigned includesIndex = 0; includesIndex < includesJsonList.GetLength(); ++includesIndex)
    {
      m_includes.push_back(includesJsonList[includesIndex].AsObject());
    }
    m_includesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManifestConfig"))
  {
    m_manifestConfig = jsonValue.GetObject("ManifestConfig");
    m_manifestConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskReportConfig"))
  {
    m_taskReportConfig = jsonValue.GetObject("TaskReportConfig");
    m_taskReportConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduleDetails"))
  {
    m_scheduleDetails = jsonValue.GetObject("ScheduleDetails");
    m_scheduleDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskMode"))
  {
    m_taskMode = TaskModeMapper::GetTaskModeForName(jsonValue.GetString("TaskMode"));
    m_taskModeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
