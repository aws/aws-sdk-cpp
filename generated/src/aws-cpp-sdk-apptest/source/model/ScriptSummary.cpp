﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/ScriptSummary.h>
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

ScriptSummary::ScriptSummary() : 
    m_scriptLocationHasBeenSet(false),
    m_type(ScriptType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ScriptSummary::ScriptSummary(JsonView jsonValue)
  : ScriptSummary()
{
  *this = jsonValue;
}

ScriptSummary& ScriptSummary::operator =(JsonView jsonValue)
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

JsonValue ScriptSummary::Jsonize() const
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
