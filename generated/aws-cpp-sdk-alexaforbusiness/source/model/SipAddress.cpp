/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SipAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

SipAddress::SipAddress() : 
    m_uriHasBeenSet(false),
    m_type(SipType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SipAddress::SipAddress(JsonView jsonValue) : 
    m_uriHasBeenSet(false),
    m_type(SipType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SipAddress& SipAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = SipTypeMapper::GetSipTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SipAddress::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SipTypeMapper::GetNameForSipType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
