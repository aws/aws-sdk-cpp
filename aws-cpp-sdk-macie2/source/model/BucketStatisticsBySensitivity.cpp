/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BucketStatisticsBySensitivity.h>
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

BucketStatisticsBySensitivity::BucketStatisticsBySensitivity() : 
    m_classificationErrorHasBeenSet(false),
    m_notClassifiedHasBeenSet(false),
    m_notSensitiveHasBeenSet(false),
    m_sensitiveHasBeenSet(false)
{
}

BucketStatisticsBySensitivity::BucketStatisticsBySensitivity(JsonView jsonValue) : 
    m_classificationErrorHasBeenSet(false),
    m_notClassifiedHasBeenSet(false),
    m_notSensitiveHasBeenSet(false),
    m_sensitiveHasBeenSet(false)
{
  *this = jsonValue;
}

BucketStatisticsBySensitivity& BucketStatisticsBySensitivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("classificationError"))
  {
    m_classificationError = jsonValue.GetObject("classificationError");

    m_classificationErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notClassified"))
  {
    m_notClassified = jsonValue.GetObject("notClassified");

    m_notClassifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notSensitive"))
  {
    m_notSensitive = jsonValue.GetObject("notSensitive");

    m_notSensitiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sensitive"))
  {
    m_sensitive = jsonValue.GetObject("sensitive");

    m_sensitiveHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketStatisticsBySensitivity::Jsonize() const
{
  JsonValue payload;

  if(m_classificationErrorHasBeenSet)
  {
   payload.WithObject("classificationError", m_classificationError.Jsonize());

  }

  if(m_notClassifiedHasBeenSet)
  {
   payload.WithObject("notClassified", m_notClassified.Jsonize());

  }

  if(m_notSensitiveHasBeenSet)
  {
   payload.WithObject("notSensitive", m_notSensitive.Jsonize());

  }

  if(m_sensitiveHasBeenSet)
  {
   payload.WithObject("sensitive", m_sensitive.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
