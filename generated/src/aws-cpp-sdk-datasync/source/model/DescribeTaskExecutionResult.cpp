/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeTaskExecutionResult.h>
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

DescribeTaskExecutionResult::DescribeTaskExecutionResult() : 
    m_status(TaskExecutionStatus::NOT_SET),
    m_estimatedFilesToTransfer(0),
    m_estimatedBytesToTransfer(0),
    m_filesTransferred(0),
    m_bytesWritten(0),
    m_bytesTransferred(0),
    m_bytesCompressed(0),
    m_filesDeleted(0),
    m_filesSkipped(0),
    m_filesVerified(0),
    m_estimatedFilesToDelete(0)
{
}

DescribeTaskExecutionResult::DescribeTaskExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TaskExecutionStatus::NOT_SET),
    m_estimatedFilesToTransfer(0),
    m_estimatedBytesToTransfer(0),
    m_filesTransferred(0),
    m_bytesWritten(0),
    m_bytesTransferred(0),
    m_bytesCompressed(0),
    m_filesDeleted(0),
    m_filesSkipped(0),
    m_filesVerified(0),
    m_estimatedFilesToDelete(0)
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
    Aws::Utils::Array<JsonView> excludesJsonList = jsonValue.GetArray("Excludes");
    for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
    {
      m_excludes.push_back(excludesJsonList[excludesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Includes"))
  {
    Aws::Utils::Array<JsonView> includesJsonList = jsonValue.GetArray("Includes");
    for(unsigned includesIndex = 0; includesIndex < includesJsonList.GetLength(); ++includesIndex)
    {
      m_includes.push_back(includesJsonList[includesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ManifestConfig"))
  {
    m_manifestConfig = jsonValue.GetObject("ManifestConfig");

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

  if(jsonValue.ValueExists("BytesCompressed"))
  {
    m_bytesCompressed = jsonValue.GetInt64("BytesCompressed");

  }

  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetObject("Result");

  }

  if(jsonValue.ValueExists("TaskReportConfig"))
  {
    m_taskReportConfig = jsonValue.GetObject("TaskReportConfig");

  }

  if(jsonValue.ValueExists("FilesDeleted"))
  {
    m_filesDeleted = jsonValue.GetInt64("FilesDeleted");

  }

  if(jsonValue.ValueExists("FilesSkipped"))
  {
    m_filesSkipped = jsonValue.GetInt64("FilesSkipped");

  }

  if(jsonValue.ValueExists("FilesVerified"))
  {
    m_filesVerified = jsonValue.GetInt64("FilesVerified");

  }

  if(jsonValue.ValueExists("ReportResult"))
  {
    m_reportResult = jsonValue.GetObject("ReportResult");

  }

  if(jsonValue.ValueExists("EstimatedFilesToDelete"))
  {
    m_estimatedFilesToDelete = jsonValue.GetInt64("EstimatedFilesToDelete");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
