/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/AsyncInvokeOutputDataConfig.h>
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

AsyncInvokeOutputDataConfig::AsyncInvokeOutputDataConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AsyncInvokeOutputDataConfig& AsyncInvokeOutputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3OutputDataConfig"))
  {
    m_s3OutputDataConfig = jsonValue.GetObject("s3OutputDataConfig");
    m_s3OutputDataConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AsyncInvokeOutputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputDataConfigHasBeenSet)
  {
   payload.WithObject("s3OutputDataConfig", m_s3OutputDataConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
