/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> bucketsJsonList = jsonValue.GetArray("buckets");
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
   Aws::Utils::Array<JsonValue> bucketsJsonList(m_buckets.size());
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
