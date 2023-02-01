/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  if(jsonValue.ValueExists("SourceNetworkInterfaceArns"))
  {
    Aws::Utils::Array<JsonView> sourceNetworkInterfaceArnsJsonList = jsonValue.GetArray("SourceNetworkInterfaceArns");
    for(unsigned sourceNetworkInterfaceArnsIndex = 0; sourceNetworkInterfaceArnsIndex < sourceNetworkInterfaceArnsJsonList.GetLength(); ++sourceNetworkInterfaceArnsIndex)
    {
      m_sourceNetworkInterfaceArns.push_back(sourceNetworkInterfaceArnsJsonList[sourceNetworkInterfaceArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("DestinationNetworkInterfaceArns"))
  {
    Aws::Utils::Array<JsonView> destinationNetworkInterfaceArnsJsonList = jsonValue.GetArray("DestinationNetworkInterfaceArns");
    for(unsigned destinationNetworkInterfaceArnsIndex = 0; destinationNetworkInterfaceArnsIndex < destinationNetworkInterfaceArnsJsonList.GetLength(); ++destinationNetworkInterfaceArnsIndex)
    {
      m_destinationNetworkInterfaceArns.push_back(destinationNetworkInterfaceArnsJsonList[destinationNetworkInterfaceArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Options"))
  {
    m_options = jsonValue.GetObject("Options");

  }

  if(jsonValue.ValueExists("Excludes"))
  {
    Aws::Utils::Array<JsonView> excludesJsonList = jsonValue.GetArray("Excludes");
    for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
    {
      m_excludes.push_back(excludesJsonList[excludesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");

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

  if(jsonValue.ValueExists("Includes"))
  {
    Aws::Utils::Array<JsonView> includesJsonList = jsonValue.GetArray("Includes");
    for(unsigned includesIndex = 0; includesIndex < includesJsonList.GetLength(); ++includesIndex)
    {
      m_includes.push_back(includesJsonList[includesIndex].AsObject());
    }
  }



  return *this;
}
