/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/StartSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

StartSessionRequest::StartSessionRequest() : 
    m_ledgerNameHasBeenSet(false)
{
}

StartSessionRequest::StartSessionRequest(JsonView jsonValue) : 
    m_ledgerNameHasBeenSet(false)
{
  *this = jsonValue;
}

StartSessionRequest& StartSessionRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LedgerName"))
  {
    m_ledgerName = jsonValue.GetString("LedgerName");

    m_ledgerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue StartSessionRequest::Jsonize() const
{
  JsonValue payload;

  if(m_ledgerNameHasBeenSet)
  {
   payload.WithString("LedgerName", m_ledgerName);

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
