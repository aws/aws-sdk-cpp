/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CustomContent.h>
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

CustomContent::CustomContent() : 
    m_customDocumentIdentifierHasBeenSet(false),
    m_inlineContentHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_sourceType(CustomSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
}

CustomContent::CustomContent(JsonView jsonValue)
  : CustomContent()
{
  *this = jsonValue;
}

CustomContent& CustomContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customDocumentIdentifier"))
  {
    m_customDocumentIdentifier = jsonValue.GetObject("customDocumentIdentifier");

    m_customDocumentIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inlineContent"))
  {
    m_inlineContent = jsonValue.GetObject("inlineContent");

    m_inlineContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = CustomSourceTypeMapper::GetCustomSourceTypeForName(jsonValue.GetString("sourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomContent::Jsonize() const
{
  JsonValue payload;

  if(m_customDocumentIdentifierHasBeenSet)
  {
   payload.WithObject("customDocumentIdentifier", m_customDocumentIdentifier.Jsonize());

  }

  if(m_inlineContentHasBeenSet)
  {
   payload.WithObject("inlineContent", m_inlineContent.Jsonize());

  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", CustomSourceTypeMapper::GetNameForCustomSourceType(m_sourceType));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
