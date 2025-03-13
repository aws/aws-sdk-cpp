/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/S3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

S3Location::S3Location(JsonView jsonValue)
{
  *this = jsonValue;
}

S3Location& S3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucketOwner"))
  {
    m_bucketOwner = jsonValue.GetString("bucketOwner");
    m_bucketOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Location::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  if(m_bucketOwnerHasBeenSet)
  {
   payload.WithString("bucketOwner", m_bucketOwner);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
