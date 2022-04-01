/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/SanitizationWarning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

SanitizationWarning::SanitizationWarning() : 
    m_attributeNameHasBeenSet(false),
    m_elementNameHasBeenSet(false),
    m_reason(SanitizationWarningReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

SanitizationWarning::SanitizationWarning(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_elementNameHasBeenSet(false),
    m_reason(SanitizationWarningReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

SanitizationWarning& SanitizationWarning::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributeName"))
  {
    m_attributeName = jsonValue.GetString("attributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elementName"))
  {
    m_elementName = jsonValue.GetString("elementName");

    m_elementNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = SanitizationWarningReasonMapper::GetSanitizationWarningReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue SanitizationWarning::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("attributeName", m_attributeName);

  }

  if(m_elementNameHasBeenSet)
  {
   payload.WithString("elementName", m_elementName);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", SanitizationWarningReasonMapper::GetNameForSanitizationWarningReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
