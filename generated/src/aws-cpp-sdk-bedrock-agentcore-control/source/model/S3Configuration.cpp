/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/S3Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

S3Configuration::S3Configuration(JsonView jsonValue)
{
  *this = jsonValue;
}

S3Configuration& S3Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucketOwnerAccountId"))
  {
    m_bucketOwnerAccountId = jsonValue.GetString("bucketOwnerAccountId");
    m_bucketOwnerAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  if(m_bucketOwnerAccountIdHasBeenSet)
  {
   payload.WithString("bucketOwnerAccountId", m_bucketOwnerAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
