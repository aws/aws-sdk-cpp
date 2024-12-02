/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DocumentMetadata.h>
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

DocumentMetadata::DocumentMetadata() : 
    m_inlineAttributesHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_type(MetadataSourceType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

DocumentMetadata::DocumentMetadata(JsonView jsonValue)
  : DocumentMetadata()
{
  *this = jsonValue;
}

DocumentMetadata& DocumentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inlineAttributes"))
  {
    Aws::Utils::Array<JsonView> inlineAttributesJsonList = jsonValue.GetArray("inlineAttributes");
    for(unsigned inlineAttributesIndex = 0; inlineAttributesIndex < inlineAttributesJsonList.GetLength(); ++inlineAttributesIndex)
    {
      m_inlineAttributes.push_back(inlineAttributesJsonList[inlineAttributesIndex].AsObject());
    }
    m_inlineAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = MetadataSourceTypeMapper::GetMetadataSourceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_inlineAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inlineAttributesJsonList(m_inlineAttributes.size());
   for(unsigned inlineAttributesIndex = 0; inlineAttributesIndex < inlineAttributesJsonList.GetLength(); ++inlineAttributesIndex)
   {
     inlineAttributesJsonList[inlineAttributesIndex].AsObject(m_inlineAttributes[inlineAttributesIndex].Jsonize());
   }
   payload.WithArray("inlineAttributes", std::move(inlineAttributesJsonList));

  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MetadataSourceTypeMapper::GetNameForMetadataSourceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
