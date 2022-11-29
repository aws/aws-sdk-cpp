/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/S3ClassificationScopeExclusion.h>
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

S3ClassificationScopeExclusion::S3ClassificationScopeExclusion() : 
    m_bucketNamesHasBeenSet(false)
{
}

S3ClassificationScopeExclusion::S3ClassificationScopeExclusion(JsonView jsonValue) : 
    m_bucketNamesHasBeenSet(false)
{
  *this = jsonValue;
}

S3ClassificationScopeExclusion& S3ClassificationScopeExclusion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketNames"))
  {
    Aws::Utils::Array<JsonView> bucketNamesJsonList = jsonValue.GetArray("bucketNames");
    for(unsigned bucketNamesIndex = 0; bucketNamesIndex < bucketNamesJsonList.GetLength(); ++bucketNamesIndex)
    {
      m_bucketNames.push_back(bucketNamesJsonList[bucketNamesIndex].AsString());
    }
    m_bucketNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ClassificationScopeExclusion::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bucketNamesJsonList(m_bucketNames.size());
   for(unsigned bucketNamesIndex = 0; bucketNamesIndex < bucketNamesJsonList.GetLength(); ++bucketNamesIndex)
   {
     bucketNamesJsonList[bucketNamesIndex].AsString(m_bucketNames[bucketNamesIndex]);
   }
   payload.WithArray("bucketNames", std::move(bucketNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
