/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressIpToEvaluate.h>
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

IngressIpToEvaluate::IngressIpToEvaluate(JsonView jsonValue)
{
  *this = jsonValue;
}

IngressIpToEvaluate& IngressIpToEvaluate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = IngressIpv4AttributeMapper::GetIngressIpv4AttributeForName(jsonValue.GetString("Attribute"));
    m_attributeHasBeenSet = true;
  }
  return *this;
}

JsonValue IngressIpToEvaluate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", IngressIpv4AttributeMapper::GetNameForIngressIpv4Attribute(m_attribute));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
