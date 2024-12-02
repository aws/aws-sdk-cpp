/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CustomS3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

CustomS3Location::CustomS3Location() : 
    m_bucketOwnerAccountIdHasBeenSet(false),
    m_uriHasBeenSet(false)
{
}

CustomS3Location::CustomS3Location(JsonView jsonValue)
  : CustomS3Location()
{
  *this = jsonValue;
}

CustomS3Location& CustomS3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketOwnerAccountId"))
  {
    m_bucketOwnerAccountId = jsonValue.GetString("bucketOwnerAccountId");

    m_bucketOwnerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");

    m_uriHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomS3Location::Jsonize() const
{
  JsonValue payload;

  if(m_bucketOwnerAccountIdHasBeenSet)
  {
   payload.WithString("bucketOwnerAccountId", m_bucketOwnerAccountId);

  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
