/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/DefinitionDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

DefinitionDocument::DefinitionDocument(JsonView jsonValue)
{
  *this = jsonValue;
}

DefinitionDocument& DefinitionDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("language"))
  {
    m_language = DefinitionLanguageMapper::GetDefinitionLanguageForName(jsonValue.GetString("language"));
    m_languageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  return *this;
}

JsonValue DefinitionDocument::Jsonize() const
{
  JsonValue payload;

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", DefinitionLanguageMapper::GetNameForDefinitionLanguage(m_language));
  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
