/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/S3BucketInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

S3BucketInfo::S3BucketInfo() : 
    m_creationDateHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

S3BucketInfo::S3BucketInfo(JsonView jsonValue) : 
    m_creationDateHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketInfo& S3BucketInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetString("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketInfo::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("creationDate", m_creationDate);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
