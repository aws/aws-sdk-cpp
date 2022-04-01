/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ScriptBatchJobIdentifier.h>
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

ScriptBatchJobIdentifier::ScriptBatchJobIdentifier() : 
    m_scriptNameHasBeenSet(false)
{
}

ScriptBatchJobIdentifier::ScriptBatchJobIdentifier(JsonView jsonValue) : 
    m_scriptNameHasBeenSet(false)
{
  *this = jsonValue;
}

ScriptBatchJobIdentifier& ScriptBatchJobIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scriptName"))
  {
    m_scriptName = jsonValue.GetString("scriptName");

    m_scriptNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ScriptBatchJobIdentifier::Jsonize() const
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
