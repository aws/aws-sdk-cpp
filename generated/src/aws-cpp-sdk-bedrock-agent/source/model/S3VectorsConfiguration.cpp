/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/S3VectorsConfiguration.h>
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

S3VectorsConfiguration::S3VectorsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

S3VectorsConfiguration& S3VectorsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vectorBucketArn"))
  {
    m_vectorBucketArn = jsonValue.GetString("vectorBucketArn");
    m_vectorBucketArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("indexArn"))
  {
    m_indexArn = jsonValue.GetString("indexArn");
    m_indexArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("indexName"))
  {
    m_indexName = jsonValue.GetString("indexName");
    m_indexNameHasBeenSet = true;
  }
  return *this;
}

JsonValue S3VectorsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_vectorBucketArnHasBeenSet)
  {
   payload.WithString("vectorBucketArn", m_vectorBucketArn);

  }

  if(m_indexArnHasBeenSet)
  {
   payload.WithString("indexArn", m_indexArn);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("indexName", m_indexName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
