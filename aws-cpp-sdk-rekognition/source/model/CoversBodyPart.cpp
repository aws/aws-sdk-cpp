/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CoversBodyPart.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

CoversBodyPart::CoversBodyPart() : 
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_value(false),
    m_valueHasBeenSet(false)
{
}

CoversBodyPart::CoversBodyPart(JsonView jsonValue) : 
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_value(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

CoversBodyPart& CoversBodyPart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetBool("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue CoversBodyPart::Jsonize() const
{
  JsonValue payload;

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithBool("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
