/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TermsAggregation.h>
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

TermsAggregation::TermsAggregation() : 
    m_maxBuckets(0),
    m_maxBucketsHasBeenSet(false)
{
}

TermsAggregation::TermsAggregation(JsonView jsonValue) : 
    m_maxBuckets(0),
    m_maxBucketsHasBeenSet(false)
{
  *this = jsonValue;
}

TermsAggregation& TermsAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxBuckets"))
  {
    m_maxBuckets = jsonValue.GetInteger("maxBuckets");

    m_maxBucketsHasBeenSet = true;
  }

  return *this;
}

JsonValue TermsAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_maxBucketsHasBeenSet)
  {
   payload.WithInteger("maxBuckets", m_maxBuckets);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
