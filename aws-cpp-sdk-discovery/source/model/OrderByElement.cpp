/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/discovery/model/OrderByElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

OrderByElement::OrderByElement() : 
    m_fieldNameHasBeenSet(false),
    m_sortOrder(OrderString::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

OrderByElement::OrderByElement(const JsonValue& jsonValue) : 
    m_fieldNameHasBeenSet(false),
    m_sortOrder(OrderString::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

OrderByElement& OrderByElement::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("fieldName"))
  {
    m_fieldName = jsonValue.GetString("fieldName");

    m_fieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = OrderStringMapper::GetOrderStringForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue OrderByElement::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", OrderStringMapper::GetNameForOrderString(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
