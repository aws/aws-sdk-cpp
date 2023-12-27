/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscriptionTargetForm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SubscriptionTargetForm::SubscriptionTargetForm() : 
    m_contentHasBeenSet(false),
    m_formNameHasBeenSet(false)
{
}

SubscriptionTargetForm::SubscriptionTargetForm(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_formNameHasBeenSet(false)
{
  *this = jsonValue;
}

SubscriptionTargetForm& SubscriptionTargetForm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("formName"))
  {
    m_formName = jsonValue.GetString("formName");

    m_formNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscriptionTargetForm::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_formNameHasBeenSet)
  {
   payload.WithString("formName", m_formName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
