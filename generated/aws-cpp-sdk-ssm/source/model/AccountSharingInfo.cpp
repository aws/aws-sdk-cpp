/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AccountSharingInfo.h>
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

AccountSharingInfo::AccountSharingInfo() : 
    m_accountIdHasBeenSet(false),
    m_sharedDocumentVersionHasBeenSet(false)
{
}

AccountSharingInfo::AccountSharingInfo(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_sharedDocumentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

AccountSharingInfo& AccountSharingInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedDocumentVersion"))
  {
    m_sharedDocumentVersion = jsonValue.GetString("SharedDocumentVersion");

    m_sharedDocumentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountSharingInfo::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_sharedDocumentVersionHasBeenSet)
  {
   payload.WithString("SharedDocumentVersion", m_sharedDocumentVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
