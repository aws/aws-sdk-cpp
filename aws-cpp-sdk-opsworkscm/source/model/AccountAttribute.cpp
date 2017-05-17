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

#include <aws/opsworkscm/model/AccountAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

AccountAttribute::AccountAttribute() : 
    m_nameHasBeenSet(false),
    m_maximum(0),
    m_maximumHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false)
{
}

AccountAttribute::AccountAttribute(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_maximum(0),
    m_maximumHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false)
{
  *this = jsonValue;
}

AccountAttribute& AccountAttribute::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Maximum"))
  {
    m_maximum = jsonValue.GetInteger("Maximum");

    m_maximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Used"))
  {
    m_used = jsonValue.GetInteger("Used");

    m_usedHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithInteger("Maximum", m_maximum);

  }

  if(m_usedHasBeenSet)
  {
   payload.WithInteger("Used", m_used);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws