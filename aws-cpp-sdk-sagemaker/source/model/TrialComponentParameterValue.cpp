/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrialComponentParameterValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TrialComponentParameterValue::TrialComponentParameterValue() : 
    m_stringValueHasBeenSet(false),
    m_numberValue(0.0),
    m_numberValueHasBeenSet(false)
{
}

TrialComponentParameterValue::TrialComponentParameterValue(JsonView jsonValue) : 
    m_stringValueHasBeenSet(false),
    m_numberValue(0.0),
    m_numberValueHasBeenSet(false)
{
  *this = jsonValue;
}

TrialComponentParameterValue& TrialComponentParameterValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringValue"))
  {
    m_stringValue = jsonValue.GetString("StringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberValue"))
  {
    m_numberValue = jsonValue.GetDouble("NumberValue");

    m_numberValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TrialComponentParameterValue::Jsonize() const
{
  JsonValue payload;

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("StringValue", m_stringValue);

  }

  if(m_numberValueHasBeenSet)
  {
   payload.WithDouble("NumberValue", m_numberValue);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
