/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeBulkImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBulkImportJobResult::DescribeBulkImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBulkImportJobResult& DescribeBulkImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("jobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobRoleArn"))
  {
    m_jobRoleArn = jsonValue.GetString("jobRoleArn");
    m_jobRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("files"))
  {
    Aws::Utils::Array<JsonView> filesJsonList = jsonValue.GetArray("files");
    for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
    {
      m_files.push_back(filesJsonList[filesIndex].AsObject());
    }
    m_filesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorReportLocation"))
  {
    m_errorReportLocation = jsonValue.GetObject("errorReportLocation");
    m_errorReportLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobConfiguration"))
  {
    m_jobConfiguration = jsonValue.GetObject("jobConfiguration");
    m_jobConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobCreationDate"))
  {
    m_jobCreationDate = jsonValue.GetDouble("jobCreationDate");
    m_jobCreationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobLastUpdateDate"))
  {
    m_jobLastUpdateDate = jsonValue.GetDouble("jobLastUpdateDate");
    m_jobLastUpdateDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("adaptiveIngestion"))
  {
    m_adaptiveIngestion = jsonValue.GetBool("adaptiveIngestion");
    m_adaptiveIngestionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteFilesAfterImport"))
  {
    m_deleteFilesAfterImport = jsonValue.GetBool("deleteFilesAfterImport");
    m_deleteFilesAfterImportHasBeenSet = true;
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
