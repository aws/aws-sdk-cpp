/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/datasync/model/DescribeTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTaskResult::DescribeTaskResult() : 
    m_status(TaskStatus::NOT_SET)
{
}

DescribeTaskResult::DescribeTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TaskStatus::NOT_SET)
{
  *this = result;
}

DescribeTaskResult& DescribeTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("CurrentTaskExecutionArn"))
  {
    m_currentTaskExecutionArn = jsonValue.GetString("CurrentTaskExecutionArn");

  }

  if(jsonValue.ValueExists("SourceLocationArn"))
  {
    m_sourceLocationArn = jsonValue.GetString("SourceLocationArn");

  }

  if(jsonValue.ValueExists("DestinationLocationArn"))
  {
    m_destinationLocationArn = jsonValue.GetString("DestinationLocationArn");

  }

  if(jsonValue.ValueExists("CloudWatchLogGroupArn"))
  {
    m_cloudWatchLogGroupArn = jsonValue.GetString("CloudWatchLogGroupArn");

  }

  if(jsonValue.ValueExists("Options"))
  {
    m_options = jsonValue.GetObject("Options");

  }

  if(jsonValue.ValueExists("Excludes"))
  {
    Array<JsonView> excludesJsonList = jsonValue.GetArray("Excludes");
    for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
    {
      m_excludes.push_back(excludesJsonList[excludesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

  }

  if(jsonValue.ValueExists("ErrorDetail"))
  {
    m_errorDetail = jsonValue.GetString("ErrorDetail");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }



  return *this;
}
