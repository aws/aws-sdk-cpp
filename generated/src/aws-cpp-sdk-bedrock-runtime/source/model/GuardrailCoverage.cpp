/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailCoverage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

GuardrailCoverage::GuardrailCoverage(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailCoverage& GuardrailCoverage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textCharacters"))
  {
    m_textCharacters = jsonValue.GetObject("textCharacters");
    m_textCharactersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("images"))
  {
    m_images = jsonValue.GetObject("images");
    m_imagesHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailCoverage::Jsonize() const
{
  JsonValue payload;

  if(m_textCharactersHasBeenSet)
  {
   payload.WithObject("textCharacters", m_textCharacters.Jsonize());

  }

  if(m_imagesHasBeenSet)
  {
   payload.WithObject("images", m_images.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
