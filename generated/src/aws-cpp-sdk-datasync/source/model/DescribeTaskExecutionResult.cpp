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

DescribeTaskExecutionResult::DescribeTaskExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTaskExecutionResult& DescribeTaskExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TaskExecutionArn"))
  {
    m_taskExecutionArn = jsonValue.GetString("TaskExecutionArn");
    m_taskExecutionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskExecutionStatusMapper::GetTaskExecutionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
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
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EstimatedFilesToTransfer"))
  {
    m_estimatedFilesToTransfer = jsonValue.GetInt64("EstimatedFilesToTransfer");
    m_estimatedFilesToTransferHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EstimatedBytesToTransfer"))
  {
    m_estimatedBytesToTransfer = jsonValue.GetInt64("EstimatedBytesToTransfer");
    m_estimatedBytesToTransferHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilesTransferred"))
  {
    m_filesTransferred = jsonValue.GetInt64("FilesTransferred");
    m_filesTransferredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BytesWritten"))
  {
    m_bytesWritten = jsonValue.GetInt64("BytesWritten");
    m_bytesWrittenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BytesTransferred"))
  {
    m_bytesTransferred = jsonValue.GetInt64("BytesTransferred");
    m_bytesTransferredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BytesCompressed"))
  {
    m_bytesCompressed = jsonValue.GetInt64("BytesCompressed");
    m_bytesCompressedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetObject("Result");
    m_resultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskReportConfig"))
  {
    m_taskReportConfig = jsonValue.GetObject("TaskReportConfig");
    m_taskReportConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilesDeleted"))
  {
    m_filesDeleted = jsonValue.GetInt64("FilesDeleted");
    m_filesDeletedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilesSkipped"))
  {
    m_filesSkipped = jsonValue.GetInt64("FilesSkipped");
    m_filesSkippedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilesVerified"))
  {
    m_filesVerified = jsonValue.GetInt64("FilesVerified");
    m_filesVerifiedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReportResult"))
  {
    m_reportResult = jsonValue.GetObject("ReportResult");
    m_reportResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EstimatedFilesToDelete"))
  {
    m_estimatedFilesToDelete = jsonValue.GetInt64("EstimatedFilesToDelete");
    m_estimatedFilesToDeleteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskMode"))
  {
    m_taskMode = TaskModeMapper::GetTaskModeForName(jsonValue.GetString("TaskMode"));
    m_taskModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilesPrepared"))
  {
    m_filesPrepared = jsonValue.GetInt64("FilesPrepared");
    m_filesPreparedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilesListed"))
  {
    m_filesListed = jsonValue.GetObject("FilesListed");
    m_filesListedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilesFailed"))
  {
    m_filesFailed = jsonValue.GetObject("FilesFailed");
    m_filesFailedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LaunchTime"))
  {
    m_launchTime = jsonValue.GetDouble("LaunchTime");
    m_launchTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
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
