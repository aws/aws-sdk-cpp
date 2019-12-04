/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
