/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/AddressList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

AddressList::AddressList(JsonView jsonValue)
{
  *this = jsonValue;
}

AddressList& AddressList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddressListId"))
  {
    m_addressListId = jsonValue.GetString("AddressListId");
    m_addressListIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddressListArn"))
  {
    m_addressListArn = jsonValue.GetString("AddressListArn");
    m_addressListArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddressListName"))
  {
    m_addressListName = jsonValue.GetString("AddressListName");
    m_addressListNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");
    m_lastUpdatedTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue AddressList::Jsonize() const
{
  JsonValue payload;

  if(m_addressListIdHasBeenSet)
  {
   payload.WithString("AddressListId", m_addressListId);

  }

  if(m_addressListArnHasBeenSet)
  {
   payload.WithString("AddressListArn", m_addressListArn);

  }

  if(m_addressListNameHasBeenSet)
  {
   payload.WithString("AddressListName", m_addressListName);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
