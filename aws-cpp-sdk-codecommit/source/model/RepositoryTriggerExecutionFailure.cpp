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
#include <aws/codecommit/model/RepositoryTriggerExecutionFailure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

RepositoryTriggerExecutionFailure::RepositoryTriggerExecutionFailure() : 
    m_triggerHasBeenSet(false),
    m_failureMessageHasBeenSet(false)
{
}

RepositoryTriggerExecutionFailure::RepositoryTriggerExecutionFailure(const JsonValue& jsonValue) : 
    m_triggerHasBeenSet(false),
    m_failureMessageHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryTriggerExecutionFailure& RepositoryTriggerExecutionFailure::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("trigger"))
  {
    m_trigger = jsonValue.GetString("trigger");

    m_triggerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

    m_failureMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryTriggerExecutionFailure::Jsonize() const
{
  JsonValue payload;

  if(m_triggerHasBeenSet)
  {
   payload.WithString("trigger", m_trigger);

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("failureMessage", m_failureMessage);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws