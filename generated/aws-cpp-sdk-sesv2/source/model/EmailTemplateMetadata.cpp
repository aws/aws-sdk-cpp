/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/EmailTemplateMetadata.h>
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

EmailTemplateMetadata::EmailTemplateMetadata() : 
    m_templateNameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

EmailTemplateMetadata::EmailTemplateMetadata(JsonView jsonValue) : 
    m_templateNameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

EmailTemplateMetadata& EmailTemplateMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailTemplateMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
