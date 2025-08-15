/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/NeptuneAnalyticsFieldMapping.h>
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

NeptuneAnalyticsFieldMapping::NeptuneAnalyticsFieldMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

NeptuneAnalyticsFieldMapping& NeptuneAnalyticsFieldMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textField"))
  {
    m_textField = jsonValue.GetString("textField");
    m_textFieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadataField"))
  {
    m_metadataField = jsonValue.GetString("metadataField");
    m_metadataFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue NeptuneAnalyticsFieldMapping::Jsonize() const
{
  JsonValue payload;

  if(m_textFieldHasBeenSet)
  {
   payload.WithString("textField", m_textField);

  }

  if(m_metadataFieldHasBeenSet)
  {
   payload.WithString("metadataField", m_metadataField);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
