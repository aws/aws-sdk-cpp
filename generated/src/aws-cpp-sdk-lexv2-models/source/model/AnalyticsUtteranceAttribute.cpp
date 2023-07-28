/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsUtteranceAttribute.h>
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

AnalyticsUtteranceAttribute::AnalyticsUtteranceAttribute() : 
    m_name(AnalyticsUtteranceAttributeName::NOT_SET),
    m_nameHasBeenSet(false)
{
}

AnalyticsUtteranceAttribute::AnalyticsUtteranceAttribute(JsonView jsonValue) : 
    m_name(AnalyticsUtteranceAttributeName::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsUtteranceAttribute& AnalyticsUtteranceAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsUtteranceAttributeNameMapper::GetAnalyticsUtteranceAttributeNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsUtteranceAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsUtteranceAttributeNameMapper::GetNameForAnalyticsUtteranceAttributeName(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
