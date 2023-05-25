/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/MultipleValuesSetting.h>
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

MultipleValuesSetting::MultipleValuesSetting() : 
    m_allowMultipleValues(false),
    m_allowMultipleValuesHasBeenSet(false)
{
}

MultipleValuesSetting::MultipleValuesSetting(JsonView jsonValue) : 
    m_allowMultipleValues(false),
    m_allowMultipleValuesHasBeenSet(false)
{
  *this = jsonValue;
}

MultipleValuesSetting& MultipleValuesSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowMultipleValues"))
  {
    m_allowMultipleValues = jsonValue.GetBool("allowMultipleValues");

    m_allowMultipleValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue MultipleValuesSetting::Jsonize() const
{
  JsonValue payload;

  if(m_allowMultipleValuesHasBeenSet)
  {
   payload.WithBool("allowMultipleValues", m_allowMultipleValues);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
