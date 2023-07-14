/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

RepositoryTriggerExecutionFailure::RepositoryTriggerExecutionFailure(JsonView jsonValue) : 
    m_triggerHasBeenSet(false),
    m_failureMessageHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryTriggerExecutionFailure& RepositoryTriggerExecutionFailure::operator =(JsonView jsonValue)
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
