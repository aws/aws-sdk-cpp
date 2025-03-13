/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelInvocationJobOutputDataConfig.h>
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

ModelInvocationJobOutputDataConfig::ModelInvocationJobOutputDataConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelInvocationJobOutputDataConfig& ModelInvocationJobOutputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3OutputDataConfig"))
  {
    m_s3OutputDataConfig = jsonValue.GetObject("s3OutputDataConfig");
    m_s3OutputDataConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelInvocationJobOutputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputDataConfigHasBeenSet)
  {
   payload.WithObject("s3OutputDataConfig", m_s3OutputDataConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
