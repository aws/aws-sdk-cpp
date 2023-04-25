/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NumericQuestionPropertyValueAutomation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

NumericQuestionPropertyValueAutomation::NumericQuestionPropertyValueAutomation() : 
    m_label(NumericQuestionPropertyAutomationLabel::NOT_SET),
    m_labelHasBeenSet(false)
{
}

NumericQuestionPropertyValueAutomation::NumericQuestionPropertyValueAutomation(JsonView jsonValue) : 
    m_label(NumericQuestionPropertyAutomationLabel::NOT_SET),
    m_labelHasBeenSet(false)
{
  *this = jsonValue;
}

NumericQuestionPropertyValueAutomation& NumericQuestionPropertyValueAutomation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Label"))
  {
    m_label = NumericQuestionPropertyAutomationLabelMapper::GetNumericQuestionPropertyAutomationLabelForName(jsonValue.GetString("Label"));

    m_labelHasBeenSet = true;
  }

  return *this;
}

JsonValue NumericQuestionPropertyValueAutomation::Jsonize() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", NumericQuestionPropertyAutomationLabelMapper::GetNameForNumericQuestionPropertyAutomationLabel(m_label));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
