/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ConditionParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

ConditionParameter::ConditionParameter() : 
    m_conditionKeyHasBeenSet(false),
    m_conditionValueHasBeenSet(false)
{
}

ConditionParameter::ConditionParameter(JsonView jsonValue) : 
    m_conditionKeyHasBeenSet(false),
    m_conditionValueHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionParameter& ConditionParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConditionKey"))
  {
    m_conditionKey = jsonValue.GetString("ConditionKey");

    m_conditionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConditionValue"))
  {
    m_conditionValue = jsonValue.GetString("ConditionValue");

    m_conditionValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionParameter::Jsonize() const
{
  JsonValue payload;

  if(m_conditionKeyHasBeenSet)
  {
   payload.WithString("ConditionKey", m_conditionKey);

  }

  if(m_conditionValueHasBeenSet)
  {
   payload.WithString("ConditionValue", m_conditionValue);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
