/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/QueryGenerationColumn.h>
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

QueryGenerationColumn::QueryGenerationColumn(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryGenerationColumn& QueryGenerationColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inclusion"))
  {
    m_inclusion = IncludeExcludeMapper::GetIncludeExcludeForName(jsonValue.GetString("inclusion"));
    m_inclusionHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryGenerationColumn::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_inclusionHasBeenSet)
  {
   payload.WithString("inclusion", IncludeExcludeMapper::GetNameForIncludeExclude(m_inclusion));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
