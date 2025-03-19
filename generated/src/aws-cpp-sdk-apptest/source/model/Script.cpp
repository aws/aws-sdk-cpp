/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/Script.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

Script::Script(JsonView jsonValue)
{
  *this = jsonValue;
}

Script& Script::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scriptLocation"))
  {
    m_scriptLocation = jsonValue.GetString("scriptLocation");
    m_scriptLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ScriptTypeMapper::GetScriptTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue Script::Jsonize() const
{
  JsonValue payload;

  if(m_scriptLocationHasBeenSet)
  {
   payload.WithString("scriptLocation", m_scriptLocation);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ScriptTypeMapper::GetNameForScriptType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
