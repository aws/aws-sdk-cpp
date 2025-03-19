/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RetrievalFlowNodeS3Configuration.h>
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

RetrievalFlowNodeS3Configuration::RetrievalFlowNodeS3Configuration(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrievalFlowNodeS3Configuration& RetrievalFlowNodeS3Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");
    m_bucketNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalFlowNodeS3Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
