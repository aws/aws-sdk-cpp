/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EndpointConfig.h>
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

EndpointConfig::EndpointConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EndpointConfig& EndpointConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sageMaker"))
  {
    m_sageMaker = jsonValue.GetObject("sageMaker");
    m_sageMakerHasBeenSet = true;
  }
  return *this;
}

JsonValue EndpointConfig::Jsonize() const
{
  JsonValue payload;

  if(m_sageMakerHasBeenSet)
  {
   payload.WithObject("sageMaker", m_sageMaker.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
