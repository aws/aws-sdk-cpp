/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/S3ClassificationScopeExclusionUpdate.h>
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

S3ClassificationScopeExclusionUpdate::S3ClassificationScopeExclusionUpdate() : 
    m_bucketNamesHasBeenSet(false),
    m_operation(ClassificationScopeUpdateOperation::NOT_SET),
    m_operationHasBeenSet(false)
{
}

S3ClassificationScopeExclusionUpdate::S3ClassificationScopeExclusionUpdate(JsonView jsonValue) : 
    m_bucketNamesHasBeenSet(false),
    m_operation(ClassificationScopeUpdateOperation::NOT_SET),
    m_operationHasBeenSet(false)
{
  *this = jsonValue;
}

S3ClassificationScopeExclusionUpdate& S3ClassificationScopeExclusionUpdate::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("operation"))
  {
    m_operation = ClassificationScopeUpdateOperationMapper::GetClassificationScopeUpdateOperationForName(jsonValue.GetString("operation"));

    m_operationHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ClassificationScopeExclusionUpdate::Jsonize() const
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

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", ClassificationScopeUpdateOperationMapper::GetNameForClassificationScopeUpdateOperation(m_operation));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
