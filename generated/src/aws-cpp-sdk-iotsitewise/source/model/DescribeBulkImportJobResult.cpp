/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeBulkImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBulkImportJobResult::DescribeBulkImportJobResult() : 
    m_jobStatus(JobStatus::NOT_SET)
{
}

DescribeBulkImportJobResult::DescribeBulkImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(JobStatus::NOT_SET)
{
  *this = result;
}

DescribeBulkImportJobResult& DescribeBulkImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

  }

  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("jobStatus"));

  }

  if(jsonValue.ValueExists("jobRoleArn"))
  {
    m_jobRoleArn = jsonValue.GetString("jobRoleArn");

  }

  if(jsonValue.ValueExists("files"))
  {
    Aws::Utils::Array<JsonView> filesJsonList = jsonValue.GetArray("files");
    for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
    {
      m_files.push_back(filesJsonList[filesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("errorReportLocation"))
  {
    m_errorReportLocation = jsonValue.GetObject("errorReportLocation");

  }

  if(jsonValue.ValueExists("jobConfiguration"))
  {
    m_jobConfiguration = jsonValue.GetObject("jobConfiguration");

  }

  if(jsonValue.ValueExists("jobCreationDate"))
  {
    m_jobCreationDate = jsonValue.GetDouble("jobCreationDate");

  }

  if(jsonValue.ValueExists("jobLastUpdateDate"))
  {
    m_jobLastUpdateDate = jsonValue.GetDouble("jobLastUpdateDate");

  }



  return *this;
}
