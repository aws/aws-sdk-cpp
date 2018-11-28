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

#include <aws/kinesisanalyticsv2/model/ApplicationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ApplicationDetail::ApplicationDetail() : 
    m_applicationARNHasBeenSet(false),
    m_applicationDescriptionHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_runtimeEnvironment(RuntimeEnvironment::NOT_SET),
    m_runtimeEnvironmentHasBeenSet(false),
    m_serviceExecutionRoleHasBeenSet(false),
    m_applicationStatus(ApplicationStatus::NOT_SET),
    m_applicationStatusHasBeenSet(false),
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false),
    m_applicationConfigurationDescriptionHasBeenSet(false),
    m_cloudWatchLoggingOptionDescriptionsHasBeenSet(false)
{
}

ApplicationDetail::ApplicationDetail(JsonView jsonValue) : 
    m_applicationARNHasBeenSet(false),
    m_applicationDescriptionHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_runtimeEnvironment(RuntimeEnvironment::NOT_SET),
    m_runtimeEnvironmentHasBeenSet(false),
    m_serviceExecutionRoleHasBeenSet(false),
    m_applicationStatus(ApplicationStatus::NOT_SET),
    m_applicationStatusHasBeenSet(false),
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false),
    m_applicationConfigurationDescriptionHasBeenSet(false),
    m_cloudWatchLoggingOptionDescriptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationDetail& ApplicationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationARN"))
  {
    m_applicationARN = jsonValue.GetString("ApplicationARN");

    m_applicationARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationDescription"))
  {
    m_applicationDescription = jsonValue.GetString("ApplicationDescription");

    m_applicationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationName"))
  {
    m_applicationName = jsonValue.GetString("ApplicationName");

    m_applicationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuntimeEnvironment"))
  {
    m_runtimeEnvironment = RuntimeEnvironmentMapper::GetRuntimeEnvironmentForName(jsonValue.GetString("RuntimeEnvironment"));

    m_runtimeEnvironmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceExecutionRole"))
  {
    m_serviceExecutionRole = jsonValue.GetString("ServiceExecutionRole");

    m_serviceExecutionRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationStatus"))
  {
    m_applicationStatus = ApplicationStatusMapper::GetApplicationStatusForName(jsonValue.GetString("ApplicationStatus"));

    m_applicationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationVersionId"))
  {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");

    m_applicationVersionIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("ApplicationConfigurationDescription"))
  {
    m_applicationConfigurationDescription = jsonValue.GetObject("ApplicationConfigurationDescription");

    m_applicationConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLoggingOptionDescriptions"))
  {
    Array<JsonView> cloudWatchLoggingOptionDescriptionsJsonList = jsonValue.GetArray("CloudWatchLoggingOptionDescriptions");
    for(unsigned cloudWatchLoggingOptionDescriptionsIndex = 0; cloudWatchLoggingOptionDescriptionsIndex < cloudWatchLoggingOptionDescriptionsJsonList.GetLength(); ++cloudWatchLoggingOptionDescriptionsIndex)
    {
      m_cloudWatchLoggingOptionDescriptions.push_back(cloudWatchLoggingOptionDescriptionsJsonList[cloudWatchLoggingOptionDescriptionsIndex].AsObject());
    }
    m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_applicationARNHasBeenSet)
  {
   payload.WithString("ApplicationARN", m_applicationARN);

  }

  if(m_applicationDescriptionHasBeenSet)
  {
   payload.WithString("ApplicationDescription", m_applicationDescription);

  }

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_runtimeEnvironmentHasBeenSet)
  {
   payload.WithString("RuntimeEnvironment", RuntimeEnvironmentMapper::GetNameForRuntimeEnvironment(m_runtimeEnvironment));
  }

  if(m_serviceExecutionRoleHasBeenSet)
  {
   payload.WithString("ServiceExecutionRole", m_serviceExecutionRole);

  }

  if(m_applicationStatusHasBeenSet)
  {
   payload.WithString("ApplicationStatus", ApplicationStatusMapper::GetNameForApplicationStatus(m_applicationStatus));
  }

  if(m_applicationVersionIdHasBeenSet)
  {
   payload.WithInt64("ApplicationVersionId", m_applicationVersionId);

  }

  if(m_createTimestampHasBeenSet)
  {
   payload.WithDouble("CreateTimestamp", m_createTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdateTimestamp", m_lastUpdateTimestamp.SecondsWithMSPrecision());
  }

  if(m_applicationConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("ApplicationConfigurationDescription", m_applicationConfigurationDescription.Jsonize());

  }

  if(m_cloudWatchLoggingOptionDescriptionsHasBeenSet)
  {
   Array<JsonValue> cloudWatchLoggingOptionDescriptionsJsonList(m_cloudWatchLoggingOptionDescriptions.size());
   for(unsigned cloudWatchLoggingOptionDescriptionsIndex = 0; cloudWatchLoggingOptionDescriptionsIndex < cloudWatchLoggingOptionDescriptionsJsonList.GetLength(); ++cloudWatchLoggingOptionDescriptionsIndex)
   {
     cloudWatchLoggingOptionDescriptionsJsonList[cloudWatchLoggingOptionDescriptionsIndex].AsObject(m_cloudWatchLoggingOptionDescriptions[cloudWatchLoggingOptionDescriptionsIndex].Jsonize());
   }
   payload.WithArray("CloudWatchLoggingOptionDescriptions", std::move(cloudWatchLoggingOptionDescriptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
