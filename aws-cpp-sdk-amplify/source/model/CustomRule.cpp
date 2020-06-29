/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/CustomRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

CustomRule::CustomRule() : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
}

CustomRule::CustomRule(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
  *this = jsonValue;
}

CustomRule& CustomRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetString("condition");

    m_conditionHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomRule::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("condition", m_condition);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
