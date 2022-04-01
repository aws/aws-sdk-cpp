/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/MatchingResource.h>
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

MatchingResource::MatchingResource() : 
    m_matchingBucketHasBeenSet(false)
{
}

MatchingResource::MatchingResource(JsonView jsonValue) : 
    m_matchingBucketHasBeenSet(false)
{
  *this = jsonValue;
}

MatchingResource& MatchingResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("matchingBucket"))
  {
    m_matchingBucket = jsonValue.GetObject("matchingBucket");

    m_matchingBucketHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchingResource::Jsonize() const
{
  JsonValue payload;

  if(m_matchingBucketHasBeenSet)
  {
   payload.WithObject("matchingBucket", m_matchingBucket.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
