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

#include <aws/ssm/model/ParameterHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ParameterHistory::ParameterHistory() : 
    m_nameHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ParameterHistory::ParameterHistory(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterHistory& ParameterHistory::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ParameterTypeMapper::GetParameterTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedUser"))
  {
    m_lastModifiedUser = jsonValue.GetString("LastModifiedUser");

    m_lastModifiedUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterHistory::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ParameterTypeMapper::GetNameForParameterType(m_type));
  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedUserHasBeenSet)
  {
   payload.WithString("LastModifiedUser", m_lastModifiedUser);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws