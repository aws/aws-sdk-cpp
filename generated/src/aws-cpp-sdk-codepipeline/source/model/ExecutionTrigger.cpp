/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ExecutionTrigger.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ExecutionTrigger::ExecutionTrigger() : 
    m_triggerType(TriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false),
    m_triggerDetailHasBeenSet(false)
{
}

ExecutionTrigger::ExecutionTrigger(JsonView jsonValue) : 
    m_triggerType(TriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false),
    m_triggerDetailHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionTrigger& ExecutionTrigger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("triggerType"))
  {
    m_triggerType = TriggerTypeMapper::GetTriggerTypeForName(jsonValue.GetString("triggerType"));

    m_triggerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggerDetail"))
  {
    m_triggerDetail = jsonValue.GetString("triggerDetail");

    m_triggerDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionTrigger::Jsonize() const
{
  JsonValue payload;

  if(m_triggerTypeHasBeenSet)
  {
   payload.WithString("triggerType", TriggerTypeMapper::GetNameForTriggerType(m_triggerType));
  }

  if(m_triggerDetailHasBeenSet)
  {
   payload.WithString("triggerDetail", m_triggerDetail);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
