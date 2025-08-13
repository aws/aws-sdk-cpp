/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/ActionMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

ActionMetadata::ActionMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionMetadata& ActionMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = jsonValue.GetString("actionType");
    m_actionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("programCount"))
  {
    m_programCount = jsonValue.GetInt64("programCount");
    m_programCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executableCount"))
  {
    m_executableCount = jsonValue.GetInt64("executableCount");
    m_executableCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", m_actionType);

  }

  if(m_programCountHasBeenSet)
  {
   payload.WithInt64("programCount", m_programCount);

  }

  if(m_executableCountHasBeenSet)
  {
   payload.WithInt64("executableCount", m_executableCount);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
