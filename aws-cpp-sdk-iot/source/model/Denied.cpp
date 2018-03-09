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

#include <aws/iot/model/Denied.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

Denied::Denied() : 
    m_implicitDenyHasBeenSet(false),
    m_explicitDenyHasBeenSet(false)
{
}

Denied::Denied(const JsonValue& jsonValue) : 
    m_implicitDenyHasBeenSet(false),
    m_explicitDenyHasBeenSet(false)
{
  *this = jsonValue;
}

Denied& Denied::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("implicitDeny"))
  {
    m_implicitDeny = jsonValue.GetObject("implicitDeny");

    m_implicitDenyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("explicitDeny"))
  {
    m_explicitDeny = jsonValue.GetObject("explicitDeny");

    m_explicitDenyHasBeenSet = true;
  }

  return *this;
}

JsonValue Denied::Jsonize() const
{
  JsonValue payload;

  if(m_implicitDenyHasBeenSet)
  {
   payload.WithObject("implicitDeny", m_implicitDeny.Jsonize());

  }

  if(m_explicitDenyHasBeenSet)
  {
   payload.WithObject("explicitDeny", m_explicitDeny.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
