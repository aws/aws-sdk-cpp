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

ScriptBatchJobDefinition::ScriptBatchJobDefinition(JsonView jsonValue)
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
