/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/WebSourceConfiguration.h>
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

WebSourceConfiguration::WebSourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

WebSourceConfiguration& WebSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("urlConfiguration"))
  {
    m_urlConfiguration = jsonValue.GetObject("urlConfiguration");
    m_urlConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue WebSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_urlConfigurationHasBeenSet)
  {
   payload.WithObject("urlConfiguration", m_urlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
