/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/CountAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

CountAction::CountAction() : 
    m_customRequestHandlingHasBeenSet(false)
{
}

CountAction::CountAction(JsonView jsonValue) : 
    m_customRequestHandlingHasBeenSet(false)
{
  *this = jsonValue;
}

CountAction& CountAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomRequestHandling"))
  {
    m_customRequestHandling = jsonValue.GetObject("CustomRequestHandling");

    m_customRequestHandlingHasBeenSet = true;
  }

  return *this;
}

JsonValue CountAction::Jsonize() const
{
  JsonValue payload;

  if(m_customRequestHandlingHasBeenSet)
  {
   payload.WithObject("CustomRequestHandling", m_customRequestHandling.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
