/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsUtteranceGroupBySpecification.h>
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

AnalyticsUtteranceGroupBySpecification::AnalyticsUtteranceGroupBySpecification() : 
    m_name(AnalyticsUtteranceField::NOT_SET),
    m_nameHasBeenSet(false)
{
}

AnalyticsUtteranceGroupBySpecification::AnalyticsUtteranceGroupBySpecification(JsonView jsonValue) : 
    m_name(AnalyticsUtteranceField::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsUtteranceGroupBySpecification& AnalyticsUtteranceGroupBySpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsUtteranceFieldMapper::GetAnalyticsUtteranceFieldForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsUtteranceGroupBySpecification::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsUtteranceFieldMapper::GetNameForAnalyticsUtteranceField(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
