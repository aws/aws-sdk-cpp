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

#include <aws/dms/model/ReplicationTaskAssessmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ReplicationTaskAssessmentResult::ReplicationTaskAssessmentResult() : 
    m_replicationTaskIdentifierHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_replicationTaskLastAssessmentDateHasBeenSet(false),
    m_assessmentStatusHasBeenSet(false),
    m_assessmentResultsFileHasBeenSet(false),
    m_assessmentResultsHasBeenSet(false),
    m_s3ObjectUrlHasBeenSet(false)
{
}

ReplicationTaskAssessmentResult::ReplicationTaskAssessmentResult(const JsonValue& jsonValue) : 
    m_replicationTaskIdentifierHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_replicationTaskLastAssessmentDateHasBeenSet(false),
    m_assessmentStatusHasBeenSet(false),
    m_assessmentResultsFileHasBeenSet(false),
    m_assessmentResultsHasBeenSet(false),
    m_s3ObjectUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationTaskAssessmentResult& ReplicationTaskAssessmentResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ReplicationTaskIdentifier"))
  {
    m_replicationTaskIdentifier = jsonValue.GetString("ReplicationTaskIdentifier");

    m_replicationTaskIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskArn"))
  {
    m_replicationTaskArn = jsonValue.GetString("ReplicationTaskArn");

    m_replicationTaskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskLastAssessmentDate"))
  {
    m_replicationTaskLastAssessmentDate = jsonValue.GetDouble("ReplicationTaskLastAssessmentDate");

    m_replicationTaskLastAssessmentDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssessmentStatus"))
  {
    m_assessmentStatus = jsonValue.GetString("AssessmentStatus");

    m_assessmentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssessmentResultsFile"))
  {
    m_assessmentResultsFile = jsonValue.GetString("AssessmentResultsFile");

    m_assessmentResultsFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssessmentResults"))
  {
    m_assessmentResults = jsonValue.GetString("AssessmentResults");

    m_assessmentResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ObjectUrl"))
  {
    m_s3ObjectUrl = jsonValue.GetString("S3ObjectUrl");

    m_s3ObjectUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationTaskAssessmentResult::Jsonize() const
{
  JsonValue payload;

  if(m_replicationTaskIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationTaskIdentifier", m_replicationTaskIdentifier);

  }

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_replicationTaskLastAssessmentDateHasBeenSet)
  {
   payload.WithDouble("ReplicationTaskLastAssessmentDate", m_replicationTaskLastAssessmentDate.SecondsWithMSPrecision());
  }

  if(m_assessmentStatusHasBeenSet)
  {
   payload.WithString("AssessmentStatus", m_assessmentStatus);

  }

  if(m_assessmentResultsFileHasBeenSet)
  {
   payload.WithString("AssessmentResultsFile", m_assessmentResultsFile);

  }

  if(m_assessmentResultsHasBeenSet)
  {
   payload.WithString("AssessmentResults", m_assessmentResults);

  }

  if(m_s3ObjectUrlHasBeenSet)
  {
   payload.WithString("S3ObjectUrl", m_s3ObjectUrl);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
