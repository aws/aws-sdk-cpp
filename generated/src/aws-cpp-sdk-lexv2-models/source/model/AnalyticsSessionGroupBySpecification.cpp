/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsSessionGroupBySpecification.h>
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

AnalyticsSessionGroupBySpecification::AnalyticsSessionGroupBySpecification() : 
    m_name(AnalyticsSessionField::NOT_SET),
    m_nameHasBeenSet(false)
{
}

AnalyticsSessionGroupBySpecification::AnalyticsSessionGroupBySpecification(JsonView jsonValue) : 
    m_name(AnalyticsSessionField::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsSessionGroupBySpecification& AnalyticsSessionGroupBySpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsSessionFieldMapper::GetAnalyticsSessionFieldForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsSessionGroupBySpecification::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsSessionFieldMapper::GetNameForAnalyticsSessionField(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
