/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PropertyValidationExceptionProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

PropertyValidationExceptionProperty::PropertyValidationExceptionProperty() : 
    m_propertyPathHasBeenSet(false),
    m_reason(PropertyValidationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

PropertyValidationExceptionProperty::PropertyValidationExceptionProperty(JsonView jsonValue) : 
    m_propertyPathHasBeenSet(false),
    m_reason(PropertyValidationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyValidationExceptionProperty& PropertyValidationExceptionProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PropertyPath"))
  {
    m_propertyPath = jsonValue.GetString("PropertyPath");

    m_propertyPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = PropertyValidationExceptionReasonMapper::GetPropertyValidationExceptionReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyValidationExceptionProperty::Jsonize() const
{
  JsonValue payload;

  if(m_propertyPathHasBeenSet)
  {
   payload.WithString("PropertyPath", m_propertyPath);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", PropertyValidationExceptionReasonMapper::GetNameForPropertyValidationExceptionReason(m_reason));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
