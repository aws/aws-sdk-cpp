/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DocumentContent.h>
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

DocumentContent::DocumentContent(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentContent& DocumentContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSourceType"))
  {
    m_dataSourceType = ContentDataSourceTypeMapper::GetContentDataSourceTypeForName(jsonValue.GetString("dataSourceType"));
    m_dataSourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("custom"))
  {
    m_custom = jsonValue.GetObject("custom");
    m_customHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentContent::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceTypeHasBeenSet)
  {
   payload.WithString("dataSourceType", ContentDataSourceTypeMapper::GetNameForContentDataSourceType(m_dataSourceType));
  }

  if(m_customHasBeenSet)
  {
   payload.WithObject("custom", m_custom.Jsonize());

  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
