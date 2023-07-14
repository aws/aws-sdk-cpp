/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/LabelNameCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

LabelNameCondition::LabelNameCondition() : 
    m_labelNameHasBeenSet(false)
{
}

LabelNameCondition::LabelNameCondition(JsonView jsonValue) : 
    m_labelNameHasBeenSet(false)
{
  *this = jsonValue;
}

LabelNameCondition& LabelNameCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LabelName"))
  {
    m_labelName = jsonValue.GetString("LabelName");

    m_labelNameHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelNameCondition::Jsonize() const
{
  JsonValue payload;

  if(m_labelNameHasBeenSet)
  {
   payload.WithString("LabelName", m_labelName);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
