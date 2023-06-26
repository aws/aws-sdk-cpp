/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ScriptBatchJobDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

ScriptBatchJobDefinition::ScriptBatchJobDefinition() : 
    m_scriptNameHasBeenSet(false)
{
}

ScriptBatchJobDefinition::ScriptBatchJobDefinition(JsonView jsonValue) : 
    m_scriptNameHasBeenSet(false)
{
  *this = jsonValue;
}

ScriptBatchJobDefinition& ScriptBatchJobDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scriptName"))
  {
    m_scriptName = jsonValue.GetString("scriptName");

    m_scriptNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ScriptBatchJobDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_scriptNameHasBeenSet)
  {
   payload.WithString("scriptName", m_scriptName);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
