/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/GetMedicalCodingJobResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectHealth::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMedicalCodingJobResult::GetMedicalCodingJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetMedicalCodingJobResult& GetMedicalCodingJobResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobArn")) {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobStatus")) {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("jobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedTime")) {
    m_updatedTime = jsonValue.GetString("updatedTime");
    m_updatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("patientContext")) {
    m_patientContext = jsonValue.GetObject("patientContext");
    m_patientContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encounterContext")) {
    m_encounterContext = jsonValue.GetObject("encounterContext");
    m_encounterContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputDataConfig")) {
    m_outputDataConfig = jsonValue.GetObject("outputDataConfig");
    m_outputDataConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("medicalCodingOutput")) {
    m_medicalCodingOutput = jsonValue.GetObject("medicalCodingOutput");
    m_medicalCodingOutputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusDetails")) {
    m_statusDetails = jsonValue.GetString("statusDetails");
    m_statusDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
