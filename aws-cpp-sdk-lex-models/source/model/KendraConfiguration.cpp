/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/KendraConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

KendraConfiguration::KendraConfiguration() : 
    m_kendraIndexHasBeenSet(false),
    m_queryFilterStringHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

KendraConfiguration::KendraConfiguration(JsonView jsonValue) : 
    m_kendraIndexHasBeenSet(false),
    m_queryFilterStringHasBeenSet(false),
    m_roleHasBeenSet(false)
{
  *this = jsonValue;
}

KendraConfiguration& KendraConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kendraIndex"))
  {
    m_kendraIndex = jsonValue.GetString("kendraIndex");

    m_kendraIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryFilterString"))
  {
    m_queryFilterString = jsonValue.GetString("queryFilterString");

    m_queryFilterStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("role"))
  {
    m_role = jsonValue.GetString("role");

    m_roleHasBeenSet = true;
  }

  return *this;
}

JsonValue KendraConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kendraIndexHasBeenSet)
  {
   payload.WithString("kendraIndex", m_kendraIndex);

  }

  if(m_queryFilterStringHasBeenSet)
  {
   payload.WithString("queryFilterString", m_queryFilterString);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", m_role);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
