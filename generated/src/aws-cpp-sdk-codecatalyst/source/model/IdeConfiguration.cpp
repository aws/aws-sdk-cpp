﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/IdeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

IdeConfiguration::IdeConfiguration() : 
    m_runtimeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

IdeConfiguration::IdeConfiguration(JsonView jsonValue) : 
    m_runtimeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

IdeConfiguration& IdeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = jsonValue.GetString("runtime");

    m_runtimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue IdeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("runtime", m_runtime);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
