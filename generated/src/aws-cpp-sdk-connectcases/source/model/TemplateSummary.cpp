/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/TemplateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

TemplateSummary::TemplateSummary() : 
    m_nameHasBeenSet(false),
    m_status(TemplateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

TemplateSummary::TemplateSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_status(TemplateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateSummary& TemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TemplateStatusMapper::GetTemplateStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateArn"))
  {
    m_templateArn = jsonValue.GetString("templateArn");

    m_templateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");

    m_templateIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TemplateStatusMapper::GetNameForTemplateStatus(m_status));
  }

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("templateArn", m_templateArn);

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("templateId", m_templateId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
