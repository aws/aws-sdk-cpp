﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AccountCustomization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AccountCustomization::AccountCustomization() : 
    m_defaultThemeHasBeenSet(false),
    m_defaultEmailCustomizationTemplateHasBeenSet(false)
{
}

AccountCustomization::AccountCustomization(JsonView jsonValue) : 
    m_defaultThemeHasBeenSet(false),
    m_defaultEmailCustomizationTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

AccountCustomization& AccountCustomization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultTheme"))
  {
    m_defaultTheme = jsonValue.GetString("DefaultTheme");

    m_defaultThemeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultEmailCustomizationTemplate"))
  {
    m_defaultEmailCustomizationTemplate = jsonValue.GetString("DefaultEmailCustomizationTemplate");

    m_defaultEmailCustomizationTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountCustomization::Jsonize() const
{
  JsonValue payload;

  if(m_defaultThemeHasBeenSet)
  {
   payload.WithString("DefaultTheme", m_defaultTheme);

  }

  if(m_defaultEmailCustomizationTemplateHasBeenSet)
  {
   payload.WithString("DefaultEmailCustomizationTemplate", m_defaultEmailCustomizationTemplate);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
