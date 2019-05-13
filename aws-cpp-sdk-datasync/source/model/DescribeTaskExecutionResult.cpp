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

#include <aws/datasync/model/DescribeTaskExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTaskExecutionResult::DescribeTaskExecutionResult() : 
    m_status(TaskExecutionStatus::NOT_SET),
    m_estimatedFilesToTransfer(0),
    m_estimatedBytesToTransfer(0),
    m_filesTransferred(0),
    m_bytesWritten(0),
    m_bytesTransferred(0)
{
}

DescribeTaskExecutionResult::DescribeTaskExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TaskExecutionStatus::NOT_SET),
    m_estimatedFilesToTransfer(0),
    m_estimatedBytesToTransfer(0),
    m_filesTransferred(0),
    m_bytesWritten(0),
    m_bytesTransferred(0)
{
  *this = result;
}

DescribeTaskExecutionResult& DescribeTaskExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TaskExecutionArn"))
  {
    m_taskExecutionArn = jsonValue.GetString("TaskExecutionArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskExecutionStatusMapper::GetTaskExecutionStatusForName(jsonValue.GetString("Status"));

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

  if(jsonValue.ValueExists("Includes"))
  {
    Array<JsonView> includesJsonList = jsonValue.GetArray("Includes");
    for(unsigned includesIndex = 0; includesIndex < includesJsonList.GetLength(); ++includesIndex)
    {
      m_includes.push_back(includesJsonList[includesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("EstimatedFilesToTransfer"))
  {
    m_estimatedFilesToTransfer = jsonValue.GetInt64("EstimatedFilesToTransfer");

  }

  if(jsonValue.ValueExists("EstimatedBytesToTransfer"))
  {
    m_estimatedBytesToTransfer = jsonValue.GetInt64("EstimatedBytesToTransfer");

  }

  if(jsonValue.ValueExists("FilesTransferred"))
  {
    m_filesTransferred = jsonValue.GetInt64("FilesTransferred");

  }

  if(jsonValue.ValueExists("BytesWritten"))
  {
    m_bytesWritten = jsonValue.GetInt64("BytesWritten");

  }

  if(jsonValue.ValueExists("BytesTransferred"))
  {
    m_bytesTransferred = jsonValue.GetInt64("BytesTransferred");

  }

  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetObject("Result");

  }



  return *this;
}
