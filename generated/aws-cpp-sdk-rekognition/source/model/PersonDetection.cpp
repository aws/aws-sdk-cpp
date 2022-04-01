/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/PersonDetection.h>
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

PersonDetection::PersonDetection() : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_personHasBeenSet(false)
{
}

PersonDetection::PersonDetection(JsonView jsonValue) : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_personHasBeenSet(false)
{
  *this = jsonValue;
}

PersonDetection& PersonDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Person"))
  {
    m_person = jsonValue.GetObject("Person");

    m_personHasBeenSet = true;
  }

  return *this;
}

JsonValue PersonDetection::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("Timestamp", m_timestamp);

  }

  if(m_personHasBeenSet)
  {
   payload.WithObject("Person", m_person.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
