/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ServiceAdditionalInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ServiceAdditionalInfo::ServiceAdditionalInfo() : 
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

ServiceAdditionalInfo::ServiceAdditionalInfo(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceAdditionalInfo& ServiceAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
