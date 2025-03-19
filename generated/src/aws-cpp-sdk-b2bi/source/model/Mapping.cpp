/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/Mapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

Mapping::Mapping(JsonView jsonValue)
{
  *this = jsonValue;
}

Mapping& Mapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateLanguage"))
  {
    m_templateLanguage = MappingTemplateLanguageMapper::GetMappingTemplateLanguageForName(jsonValue.GetString("templateLanguage"));
    m_templateLanguageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("template"))
  {
    m_template = jsonValue.GetString("template");
    m_templateHasBeenSet = true;
  }
  return *this;
}

JsonValue Mapping::Jsonize() const
{
  JsonValue payload;

  if(m_templateLanguageHasBeenSet)
  {
   payload.WithString("templateLanguage", MappingTemplateLanguageMapper::GetNameForMappingTemplateLanguage(m_templateLanguage));
  }

  if(m_templateHasBeenSet)
  {
   payload.WithString("template", m_template);

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
