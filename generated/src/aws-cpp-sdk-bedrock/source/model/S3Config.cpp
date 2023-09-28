/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/S3Config.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

S3Config::S3Config() : 
    m_bucketNameHasBeenSet(false),
    m_keyPrefixHasBeenSet(false)
{
}

S3Config::S3Config(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_keyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3Config& S3Config::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyPrefix"))
  {
    m_keyPrefix = jsonValue.GetString("keyPrefix");

    m_keyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Config::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_keyPrefixHasBeenSet)
  {
   payload.WithString("keyPrefix", m_keyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
