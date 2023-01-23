/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SensitivityAggregations.h>
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

SensitivityAggregations::SensitivityAggregations() : 
    m_classifiableSizeInBytes(0),
    m_classifiableSizeInBytesHasBeenSet(false),
    m_publiclyAccessibleCount(0),
    m_publiclyAccessibleCountHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_totalSizeInBytes(0),
    m_totalSizeInBytesHasBeenSet(false)
{
}

SensitivityAggregations::SensitivityAggregations(JsonView jsonValue) : 
    m_classifiableSizeInBytes(0),
    m_classifiableSizeInBytesHasBeenSet(false),
    m_publiclyAccessibleCount(0),
    m_publiclyAccessibleCountHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_totalSizeInBytes(0),
    m_totalSizeInBytesHasBeenSet(false)
{
  *this = jsonValue;
}

SensitivityAggregations& SensitivityAggregations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("classifiableSizeInBytes"))
  {
    m_classifiableSizeInBytes = jsonValue.GetInt64("classifiableSizeInBytes");

    m_classifiableSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publiclyAccessibleCount"))
  {
    m_publiclyAccessibleCount = jsonValue.GetInt64("publiclyAccessibleCount");

    m_publiclyAccessibleCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalCount"))
  {
    m_totalCount = jsonValue.GetInt64("totalCount");

    m_totalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalSizeInBytes"))
  {
    m_totalSizeInBytes = jsonValue.GetInt64("totalSizeInBytes");

    m_totalSizeInBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue SensitivityAggregations::Jsonize() const
{
  JsonValue payload;

  if(m_classifiableSizeInBytesHasBeenSet)
  {
   payload.WithInt64("classifiableSizeInBytes", m_classifiableSizeInBytes);

  }

  if(m_publiclyAccessibleCountHasBeenSet)
  {
   payload.WithInt64("publiclyAccessibleCount", m_publiclyAccessibleCount);

  }

  if(m_totalCountHasBeenSet)
  {
   payload.WithInt64("totalCount", m_totalCount);

  }

  if(m_totalSizeInBytesHasBeenSet)
  {
   payload.WithInt64("totalSizeInBytes", m_totalSizeInBytes);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
