/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/BucketsAggregationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

BucketsAggregationType::BucketsAggregationType() : 
    m_termsAggregationHasBeenSet(false)
{
}

BucketsAggregationType::BucketsAggregationType(JsonView jsonValue) : 
    m_termsAggregationHasBeenSet(false)
{
  *this = jsonValue;
}

BucketsAggregationType& BucketsAggregationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("termsAggregation"))
  {
    m_termsAggregation = jsonValue.GetObject("termsAggregation");

    m_termsAggregationHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketsAggregationType::Jsonize() const
{
  JsonValue payload;

  if(m_termsAggregationHasBeenSet)
  {
   payload.WithObject("termsAggregation", m_termsAggregation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
