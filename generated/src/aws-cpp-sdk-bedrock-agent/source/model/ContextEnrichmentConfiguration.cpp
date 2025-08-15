/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ContextEnrichmentConfiguration.h>
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

ContextEnrichmentConfiguration::ContextEnrichmentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ContextEnrichmentConfiguration& ContextEnrichmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ContextEnrichmentTypeMapper::GetContextEnrichmentTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bedrockFoundationModelConfiguration"))
  {
    m_bedrockFoundationModelConfiguration = jsonValue.GetObject("bedrockFoundationModelConfiguration");
    m_bedrockFoundationModelConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextEnrichmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ContextEnrichmentTypeMapper::GetNameForContextEnrichmentType(m_type));
  }

  if(m_bedrockFoundationModelConfigurationHasBeenSet)
  {
   payload.WithObject("bedrockFoundationModelConfiguration", m_bedrockFoundationModelConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
