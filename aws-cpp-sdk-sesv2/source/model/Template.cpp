/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Template.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Template::Template() : 
    m_templateNameHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_templateDataHasBeenSet(false)
{
}

Template::Template(JsonView jsonValue) : 
    m_templateNameHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_templateDataHasBeenSet(false)
{
  *this = jsonValue;
}

Template& Template::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateArn"))
  {
    m_templateArn = jsonValue.GetString("TemplateArn");

    m_templateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateData"))
  {
    m_templateData = jsonValue.GetString("TemplateData");

    m_templateDataHasBeenSet = true;
  }

  return *this;
}

JsonValue Template::Jsonize() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("TemplateArn", m_templateArn);

  }

  if(m_templateDataHasBeenSet)
  {
   payload.WithString("TemplateData", m_templateData);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
