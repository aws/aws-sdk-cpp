/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/ComprehendMedicalAsyncJobProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

ComprehendMedicalAsyncJobProperties::ComprehendMedicalAsyncJobProperties() : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_manifestFilePathHasBeenSet(false),
    m_kMSKeyHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
}

ComprehendMedicalAsyncJobProperties::ComprehendMedicalAsyncJobProperties(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_manifestFilePathHasBeenSet(false),
    m_kMSKeyHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ComprehendMedicalAsyncJobProperties& ComprehendMedicalAsyncJobProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmitTime"))
  {
    m_submitTime = jsonValue.GetDouble("SubmitTime");

    m_submitTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetDouble("ExpirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    m_inputDataConfig = jsonValue.GetObject("InputDataConfig");

    m_inputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("OutputDataConfig");

    m_outputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManifestFilePath"))
  {
    m_manifestFilePath = jsonValue.GetString("ManifestFilePath");

    m_manifestFilePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSKey"))
  {
    m_kMSKey = jsonValue.GetString("KMSKey");

    m_kMSKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

    m_modelVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ComprehendMedicalAsyncJobProperties::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_submitTimeHasBeenSet)
  {
   payload.WithDouble("SubmitTime", m_submitTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithDouble("ExpirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_manifestFilePathHasBeenSet)
  {
   payload.WithString("ManifestFilePath", m_manifestFilePath);

  }

  if(m_kMSKeyHasBeenSet)
  {
   payload.WithString("KMSKey", m_kMSKey);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  return payload;
}

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
