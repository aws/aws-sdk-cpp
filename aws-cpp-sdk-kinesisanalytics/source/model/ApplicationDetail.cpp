/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/model/ApplicationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

ApplicationDetail::ApplicationDetail() : 
    m_applicationNameHasBeenSet(false),
    m_applicationDescriptionHasBeenSet(false),
    m_applicationARNHasBeenSet(false),
    m_applicationStatus(ApplicationStatus::NOT_SET),
    m_applicationStatusHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false),
    m_inputDescriptionsHasBeenSet(false),
    m_outputDescriptionsHasBeenSet(false),
    m_referenceDataSourceDescriptionsHasBeenSet(false),
    m_applicationCodeHasBeenSet(false),
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false)
{
}

ApplicationDetail::ApplicationDetail(const JsonValue& jsonValue) : 
    m_applicationNameHasBeenSet(false),
    m_applicationDescriptionHasBeenSet(false),
    m_applicationARNHasBeenSet(false),
    m_applicationStatus(ApplicationStatus::NOT_SET),
    m_applicationStatusHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false),
    m_inputDescriptionsHasBeenSet(false),
    m_outputDescriptionsHasBeenSet(false),
    m_referenceDataSourceDescriptionsHasBeenSet(false),
    m_applicationCodeHasBeenSet(false),
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationDetail& ApplicationDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ApplicationName"))
  {
    m_applicationName = jsonValue.GetString("ApplicationName");

    m_applicationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationDescription"))
  {
    m_applicationDescription = jsonValue.GetString("ApplicationDescription");

    m_applicationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationARN"))
  {
    m_applicationARN = jsonValue.GetString("ApplicationARN");

    m_applicationARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationStatus"))
  {
    m_applicationStatus = ApplicationStatusMapper::GetApplicationStatusForName(jsonValue.GetString("ApplicationStatus"));

    m_applicationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTimestamp"))
  {
    m_createTimestamp = jsonValue.GetDouble("CreateTimestamp");

    m_createTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTimestamp"))
  {
    m_lastUpdateTimestamp = jsonValue.GetDouble("LastUpdateTimestamp");

    m_lastUpdateTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDescriptions"))
  {
    Array<JsonValue> inputDescriptionsJsonList = jsonValue.GetArray("InputDescriptions");
    for(unsigned inputDescriptionsIndex = 0; inputDescriptionsIndex < inputDescriptionsJsonList.GetLength(); ++inputDescriptionsIndex)
    {
      m_inputDescriptions.push_back(inputDescriptionsJsonList[inputDescriptionsIndex].AsObject());
    }
    m_inputDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputDescriptions"))
  {
    Array<JsonValue> outputDescriptionsJsonList = jsonValue.GetArray("OutputDescriptions");
    for(unsigned outputDescriptionsIndex = 0; outputDescriptionsIndex < outputDescriptionsJsonList.GetLength(); ++outputDescriptionsIndex)
    {
      m_outputDescriptions.push_back(outputDescriptionsJsonList[outputDescriptionsIndex].AsObject());
    }
    m_outputDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceDataSourceDescriptions"))
  {
    Array<JsonValue> referenceDataSourceDescriptionsJsonList = jsonValue.GetArray("ReferenceDataSourceDescriptions");
    for(unsigned referenceDataSourceDescriptionsIndex = 0; referenceDataSourceDescriptionsIndex < referenceDataSourceDescriptionsJsonList.GetLength(); ++referenceDataSourceDescriptionsIndex)
    {
      m_referenceDataSourceDescriptions.push_back(referenceDataSourceDescriptionsJsonList[referenceDataSourceDescriptionsIndex].AsObject());
    }
    m_referenceDataSourceDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationCode"))
  {
    m_applicationCode = jsonValue.GetString("ApplicationCode");

    m_applicationCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationVersionId"))
  {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");

    m_applicationVersionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_applicationDescriptionHasBeenSet)
  {
   payload.WithString("ApplicationDescription", m_applicationDescription);

  }

  if(m_applicationARNHasBeenSet)
  {
   payload.WithString("ApplicationARN", m_applicationARN);

  }

  if(m_applicationStatusHasBeenSet)
  {
   payload.WithString("ApplicationStatus", ApplicationStatusMapper::GetNameForApplicationStatus(m_applicationStatus));
  }

  if(m_createTimestampHasBeenSet)
  {
   payload.WithDouble("CreateTimestamp", m_createTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdateTimestamp", m_lastUpdateTimestamp.SecondsWithMSPrecision());
  }

  if(m_inputDescriptionsHasBeenSet)
  {
   Array<JsonValue> inputDescriptionsJsonList(m_inputDescriptions.size());
   for(unsigned inputDescriptionsIndex = 0; inputDescriptionsIndex < inputDescriptionsJsonList.GetLength(); ++inputDescriptionsIndex)
   {
     inputDescriptionsJsonList[inputDescriptionsIndex].AsObject(m_inputDescriptions[inputDescriptionsIndex].Jsonize());
   }
   payload.WithArray("InputDescriptions", std::move(inputDescriptionsJsonList));

  }

  if(m_outputDescriptionsHasBeenSet)
  {
   Array<JsonValue> outputDescriptionsJsonList(m_outputDescriptions.size());
   for(unsigned outputDescriptionsIndex = 0; outputDescriptionsIndex < outputDescriptionsJsonList.GetLength(); ++outputDescriptionsIndex)
   {
     outputDescriptionsJsonList[outputDescriptionsIndex].AsObject(m_outputDescriptions[outputDescriptionsIndex].Jsonize());
   }
   payload.WithArray("OutputDescriptions", std::move(outputDescriptionsJsonList));

  }

  if(m_referenceDataSourceDescriptionsHasBeenSet)
  {
   Array<JsonValue> referenceDataSourceDescriptionsJsonList(m_referenceDataSourceDescriptions.size());
   for(unsigned referenceDataSourceDescriptionsIndex = 0; referenceDataSourceDescriptionsIndex < referenceDataSourceDescriptionsJsonList.GetLength(); ++referenceDataSourceDescriptionsIndex)
   {
     referenceDataSourceDescriptionsJsonList[referenceDataSourceDescriptionsIndex].AsObject(m_referenceDataSourceDescriptions[referenceDataSourceDescriptionsIndex].Jsonize());
   }
   payload.WithArray("ReferenceDataSourceDescriptions", std::move(referenceDataSourceDescriptionsJsonList));

  }

  if(m_applicationCodeHasBeenSet)
  {
   payload.WithString("ApplicationCode", m_applicationCode);

  }

  if(m_applicationVersionIdHasBeenSet)
  {
   payload.WithInt64("ApplicationVersionId", m_applicationVersionId);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws