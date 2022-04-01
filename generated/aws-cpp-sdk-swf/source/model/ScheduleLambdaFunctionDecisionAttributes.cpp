/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ScheduleLambdaFunctionDecisionAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

ScheduleLambdaFunctionDecisionAttributes::ScheduleLambdaFunctionDecisionAttributes() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_controlHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_startToCloseTimeoutHasBeenSet(false)
{
}

ScheduleLambdaFunctionDecisionAttributes::ScheduleLambdaFunctionDecisionAttributes(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_controlHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_startToCloseTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleLambdaFunctionDecisionAttributes& ScheduleLambdaFunctionDecisionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("control"))
  {
    m_control = jsonValue.GetString("control");

    m_controlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startToCloseTimeout"))
  {
    m_startToCloseTimeout = jsonValue.GetString("startToCloseTimeout");

    m_startToCloseTimeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleLambdaFunctionDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_controlHasBeenSet)
  {
   payload.WithString("control", m_control);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_startToCloseTimeoutHasBeenSet)
  {
   payload.WithString("startToCloseTimeout", m_startToCloseTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
