/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/TemplateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

TemplateConfiguration::TemplateConfiguration() : 
    m_templateHasBeenSet(false)
{
}

TemplateConfiguration::TemplateConfiguration(JsonView jsonValue) : 
    m_templateHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateConfiguration& TemplateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Template"))
  {
    m_template = jsonValue.GetObject("Template");

    m_templateHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_templateHasBeenSet)
  {
    if(!m_template.View().IsNull())
    {
       payload.WithObject("Template", JsonValue(m_template.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
