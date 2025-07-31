/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ContactPreference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ContactPreference::ContactPreference(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactPreference& ContactPreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyName"))
  {
    m_keyName = jsonValue.GetString("KeyName");
    m_keyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyValue"))
  {
    m_keyValue = jsonValue.GetString("KeyValue");
    m_keyValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfileId"))
  {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContactType"))
  {
    m_contactType = ContactTypeMapper::GetContactTypeForName(jsonValue.GetString("ContactType"));
    m_contactTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactPreference::Jsonize() const
{
  JsonValue payload;

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("KeyName", m_keyName);

  }

  if(m_keyValueHasBeenSet)
  {
   payload.WithString("KeyValue", m_keyValue);

  }

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_contactTypeHasBeenSet)
  {
   payload.WithString("ContactType", ContactTypeMapper::GetNameForContactType(m_contactType));
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
