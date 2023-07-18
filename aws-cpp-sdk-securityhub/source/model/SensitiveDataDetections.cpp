/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SensitiveDataDetections.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

SensitiveDataDetections::SensitiveDataDetections() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_occurrencesHasBeenSet(false)
{
}

SensitiveDataDetections::SensitiveDataDetections(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_occurrencesHasBeenSet(false)
{
  *this = jsonValue;
}

SensitiveDataDetections& SensitiveDataDetections::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInt64("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Occurrences"))
  {
    m_occurrences = jsonValue.GetObject("Occurrences");

    m_occurrencesHasBeenSet = true;
  }

  return *this;
}

JsonValue SensitiveDataDetections::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInt64("Count", m_count);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_occurrencesHasBeenSet)
  {
   payload.WithObject("Occurrences", m_occurrences.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
