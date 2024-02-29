/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/QnAKendraConfiguration.h>
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

QnAKendraConfiguration::QnAKendraConfiguration() : 
    m_kendraIndexHasBeenSet(false),
    m_queryFilterStringEnabled(false),
    m_queryFilterStringEnabledHasBeenSet(false),
    m_queryFilterStringHasBeenSet(false),
    m_exactResponse(false),
    m_exactResponseHasBeenSet(false)
{
}

QnAKendraConfiguration::QnAKendraConfiguration(JsonView jsonValue) : 
    m_kendraIndexHasBeenSet(false),
    m_queryFilterStringEnabled(false),
    m_queryFilterStringEnabledHasBeenSet(false),
    m_queryFilterStringHasBeenSet(false),
    m_exactResponse(false),
    m_exactResponseHasBeenSet(false)
{
  *this = jsonValue;
}

QnAKendraConfiguration& QnAKendraConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("exactResponse"))
  {
    m_exactResponse = jsonValue.GetBool("exactResponse");

    m_exactResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue QnAKendraConfiguration::Jsonize() const
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

  if(m_exactResponseHasBeenSet)
  {
   payload.WithBool("exactResponse", m_exactResponse);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
