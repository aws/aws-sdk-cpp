/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/macie2/model/S3BucketDefinitionForJob.h>
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

S3BucketDefinitionForJob::S3BucketDefinitionForJob() : 
    m_accountIdHasBeenSet(false),
    m_bucketsHasBeenSet(false)
{
}

S3BucketDefinitionForJob::S3BucketDefinitionForJob(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_bucketsHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketDefinitionForJob& S3BucketDefinitionForJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buckets"))
  {
    Array<JsonView> bucketsJsonList = jsonValue.GetArray("buckets");
    for(unsigned bucketsIndex = 0; bucketsIndex < bucketsJsonList.GetLength(); ++bucketsIndex)
    {
      m_buckets.push_back(bucketsJsonList[bucketsIndex].AsString());
    }
    m_bucketsHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketDefinitionForJob::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_bucketsHasBeenSet)
  {
   Array<JsonValue> bucketsJsonList(m_buckets.size());
   for(unsigned bucketsIndex = 0; bucketsIndex < bucketsJsonList.GetLength(); ++bucketsIndex)
   {
     bucketsJsonList[bucketsIndex].AsString(m_buckets[bucketsIndex]);
   }
   payload.WithArray("buckets", std::move(bucketsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
