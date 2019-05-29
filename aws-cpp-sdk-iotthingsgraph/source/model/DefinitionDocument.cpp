/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

DefinitionDocument::DefinitionDocument() : 
    m_language(DefinitionLanguage::NOT_SET),
    m_languageHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

DefinitionDocument::DefinitionDocument(JsonView jsonValue) : 
    m_language(DefinitionLanguage::NOT_SET),
    m_languageHasBeenSet(false),
    m_textHasBeenSet(false)
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
