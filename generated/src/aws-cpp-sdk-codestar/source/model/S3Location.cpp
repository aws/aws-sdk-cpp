/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/S3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStar
{
namespace Model
{

S3Location::S3Location() : 
    m_bucketNameHasBeenSet(false),
    m_bucketKeyHasBeenSet(false)
{
}

S3Location::S3Location(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_bucketKeyHasBeenSet(false)
{
  *this = jsonValue;
}

S3Location& S3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketKey"))
  {
    m_bucketKey = jsonValue.GetString("bucketKey");

    m_bucketKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Location::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_bucketKeyHasBeenSet)
  {
   payload.WithString("bucketKey", m_bucketKey);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStar
} // namespace Aws
