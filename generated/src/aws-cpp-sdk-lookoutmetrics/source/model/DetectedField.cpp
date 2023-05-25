/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DetectedField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

DetectedField::DetectedField() : 
    m_valueHasBeenSet(false),
    m_confidence(Confidence::NOT_SET),
    m_confidenceHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

DetectedField::DetectedField(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_confidence(Confidence::NOT_SET),
    m_confidenceHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

DetectedField& DetectedField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = ConfidenceMapper::GetConfidenceForName(jsonValue.GetString("Confidence"));

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectedField::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithString("Confidence", ConfidenceMapper::GetNameForConfidence(m_confidence));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
