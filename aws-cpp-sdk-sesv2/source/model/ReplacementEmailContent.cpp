/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ReplacementEmailContent.h>
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

ReplacementEmailContent::ReplacementEmailContent() : 
    m_replacementTemplateHasBeenSet(false)
{
}

ReplacementEmailContent::ReplacementEmailContent(JsonView jsonValue) : 
    m_replacementTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplacementEmailContent& ReplacementEmailContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplacementTemplate"))
  {
    m_replacementTemplate = jsonValue.GetObject("ReplacementTemplate");

    m_replacementTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplacementEmailContent::Jsonize() const
{
  JsonValue payload;

  if(m_replacementTemplateHasBeenSet)
  {
   payload.WithObject("ReplacementTemplate", m_replacementTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
