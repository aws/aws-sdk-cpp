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

#include <aws/glacier/model/Grantee.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

Grantee::Grantee() : 
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_uRIHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
}

Grantee::Grantee(const JsonValue& jsonValue) : 
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_uRIHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
  *this = jsonValue;
}

Grantee& Grantee::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("URI"))
  {
    m_uRI = jsonValue.GetString("URI");

    m_uRIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ID"))
  {
    m_iD = jsonValue.GetString("ID");

    m_iDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue Grantee::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_uRIHasBeenSet)
  {
   payload.WithString("URI", m_uRI);

  }

  if(m_iDHasBeenSet)
  {
   payload.WithString("ID", m_iD);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
