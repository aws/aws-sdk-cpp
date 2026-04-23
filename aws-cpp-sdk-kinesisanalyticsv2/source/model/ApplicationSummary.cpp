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

#include <aws/kinesisanalyticsv2/model/ApplicationSummary.h>
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

ApplicationSummary::ApplicationSummary() : 
    m_applicationNameHasBeenSet(false),
    m_applicationARNHasBeenSet(false),
    m_applicationStatus(ApplicationStatus::NOT_SET),
    m_applicationStatusHasBeenSet(false),
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false),
    m_runtimeEnvironment(RuntimeEnvironment::NOT_SET),
    m_runtimeEnvironmentHasBeenSet(false)
{
}

ApplicationSummary::ApplicationSummary(JsonView jsonValue) : 
    m_applicationNameHasBeenSet(false),
    m_applicationARNHasBeenSet(false),
    m_applicationStatus(ApplicationStatus::NOT_SET),
    m_applicationStatusHasBeenSet(false),
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false),
    m_runtimeEnvironment(RuntimeEnvironment::NOT_SET),
    m_runtimeEnvironmentHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSummary& ApplicationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationName"))
  {
    m_applicationName = jsonValue.GetString("ApplicationName");

    m_applicationNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("ApplicationVersionId"))
  {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");

    m_applicationVersionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuntimeEnvironment"))
  {
    m_runtimeEnvironment = RuntimeEnvironmentMapper::GetRuntimeEnvironmentForName(jsonValue.GetString("RuntimeEnvironment"));

    m_runtimeEnvironmentHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_applicationARNHasBeenSet)
  {
   payload.WithString("ApplicationARN", m_applicationARN);

  }

  if(m_applicationStatusHasBeenSet)
  {
   payload.WithString("ApplicationStatus", ApplicationStatusMapper::GetNameForApplicationStatus(m_applicationStatus));
  }

  if(m_applicationVersionIdHasBeenSet)
  {
   payload.WithInt64("ApplicationVersionId", m_applicationVersionId);

  }

  if(m_runtimeEnvironmentHasBeenSet)
  {
   payload.WithString("RuntimeEnvironment", RuntimeEnvironmentMapper::GetNameForRuntimeEnvironment(m_runtimeEnvironment));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
