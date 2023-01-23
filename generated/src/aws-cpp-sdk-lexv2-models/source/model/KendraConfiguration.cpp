/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/KendraConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

KendraConfiguration::KendraConfiguration() : 
    m_kendraIndexHasBeenSet(false),
    m_queryFilterStringEnabled(false),
    m_queryFilterStringEnabledHasBeenSet(false),
    m_queryFilterStringHasBeenSet(false)
{
}

KendraConfiguration::KendraConfiguration(JsonView jsonValue) : 
    m_kendraIndexHasBeenSet(false),
    m_queryFilterStringEnabled(false),
    m_queryFilterStringEnabledHasBeenSet(false),
    m_queryFilterStringHasBeenSet(false)
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

  if(jsonValue.ValueExists("queryFilterStringEnabled"))
  {
    m_queryFilterStringEnabled = jsonValue.GetBool("queryFilterStringEnabled");

    m_queryFilterStringEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryFilterString"))
  {
    m_queryFilterString = jsonValue.GetString("queryFilterString");

    m_queryFilterStringHasBeenSet = true;
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

  if(m_queryFilterStringEnabledHasBeenSet)
  {
   payload.WithBool("queryFilterStringEnabled", m_queryFilterStringEnabled);

  }

  if(m_queryFilterStringHasBeenSet)
  {
   payload.WithString("queryFilterString", m_queryFilterString);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
