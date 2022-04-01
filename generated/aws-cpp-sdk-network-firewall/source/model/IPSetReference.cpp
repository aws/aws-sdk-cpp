/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/IPSetReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

IPSetReference::IPSetReference() : 
    m_referenceArnHasBeenSet(false)
{
}

IPSetReference::IPSetReference(JsonView jsonValue) : 
    m_referenceArnHasBeenSet(false)
{
  *this = jsonValue;
}

IPSetReference& IPSetReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReferenceArn"))
  {
    m_referenceArn = jsonValue.GetString("ReferenceArn");

    m_referenceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue IPSetReference::Jsonize() const
{
  JsonValue payload;

  if(m_referenceArnHasBeenSet)
  {
   payload.WithString("ReferenceArn", m_referenceArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
