/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/CustomDetection.h>
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

CustomDetection::CustomDetection() : 
    m_arnHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_occurrencesHasBeenSet(false)
{
}

CustomDetection::CustomDetection(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_occurrencesHasBeenSet(false)
{
  *this = jsonValue;
}

CustomDetection& CustomDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("occurrences"))
  {
    m_occurrences = jsonValue.GetObject("occurrences");

    m_occurrencesHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomDetection::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_occurrencesHasBeenSet)
  {
   payload.WithObject("occurrences", m_occurrences.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
