/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/DefaultDetection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

DefaultDetection::DefaultDetection() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_occurrencesHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

DefaultDetection::DefaultDetection(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_occurrencesHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultDetection& DefaultDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("occurrences"))
  {
    m_occurrences = jsonValue.GetObject("occurrences");

    m_occurrencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultDetection::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_occurrencesHasBeenSet)
  {
   payload.WithObject("occurrences", m_occurrences.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
