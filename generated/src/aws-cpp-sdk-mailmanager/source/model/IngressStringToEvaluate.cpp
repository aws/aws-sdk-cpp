/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressStringToEvaluate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

IngressStringToEvaluate::IngressStringToEvaluate() : 
    m_attribute(IngressStringEmailAttribute::NOT_SET),
    m_attributeHasBeenSet(false)
{
}

IngressStringToEvaluate::IngressStringToEvaluate(JsonView jsonValue)
  : IngressStringToEvaluate()
{
  *this = jsonValue;
}

IngressStringToEvaluate& IngressStringToEvaluate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = IngressStringEmailAttributeMapper::GetIngressStringEmailAttributeForName(jsonValue.GetString("Attribute"));

    m_attributeHasBeenSet = true;
  }

  return *this;
}

JsonValue IngressStringToEvaluate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", IngressStringEmailAttributeMapper::GetNameForIngressStringEmailAttribute(m_attribute));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
