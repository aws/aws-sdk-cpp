/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ToolSpecification.h>
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

ToolSpecification::ToolSpecification() : 
    m_descriptionHasBeenSet(false),
    m_inputSchemaHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

ToolSpecification::ToolSpecification(JsonView jsonValue)
  : ToolSpecification()
{
  *this = jsonValue;
}

ToolSpecification& ToolSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputSchema"))
  {
    m_inputSchema = jsonValue.GetObject("inputSchema");

    m_inputSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ToolSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_inputSchemaHasBeenSet)
  {
   payload.WithObject("inputSchema", m_inputSchema.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
