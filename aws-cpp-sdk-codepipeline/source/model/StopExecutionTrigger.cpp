/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StopExecutionTrigger.h>
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

StopExecutionTrigger::StopExecutionTrigger() : 
    m_reasonHasBeenSet(false)
{
}

StopExecutionTrigger::StopExecutionTrigger(JsonView jsonValue) : 
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

StopExecutionTrigger& StopExecutionTrigger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue StopExecutionTrigger::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
