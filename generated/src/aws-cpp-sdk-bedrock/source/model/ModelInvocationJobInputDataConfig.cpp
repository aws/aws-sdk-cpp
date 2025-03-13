/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelInvocationJobInputDataConfig.h>
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

ModelInvocationJobInputDataConfig::ModelInvocationJobInputDataConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelInvocationJobInputDataConfig& ModelInvocationJobInputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3InputDataConfig"))
  {
    m_s3InputDataConfig = jsonValue.GetObject("s3InputDataConfig");
    m_s3InputDataConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelInvocationJobInputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3InputDataConfigHasBeenSet)
  {
   payload.WithObject("s3InputDataConfig", m_s3InputDataConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
