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

#include <aws/transcribe/model/JobExecutionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

JobExecutionSettings::JobExecutionSettings() : 
    m_allowDeferredExecution(false),
    m_allowDeferredExecutionHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false)
{
}

JobExecutionSettings::JobExecutionSettings(JsonView jsonValue) : 
    m_allowDeferredExecution(false),
    m_allowDeferredExecutionHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionSettings& JobExecutionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowDeferredExecution"))
  {
    m_allowDeferredExecution = jsonValue.GetBool("AllowDeferredExecution");

    m_allowDeferredExecutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue JobExecutionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_allowDeferredExecutionHasBeenSet)
  {
   payload.WithBool("AllowDeferredExecution", m_allowDeferredExecution);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
