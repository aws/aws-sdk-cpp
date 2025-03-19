/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AutomatedDiscoveryAccountUpdateError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

AutomatedDiscoveryAccountUpdateError::AutomatedDiscoveryAccountUpdateError(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedDiscoveryAccountUpdateError& AutomatedDiscoveryAccountUpdateError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = AutomatedDiscoveryAccountUpdateErrorCodeMapper::GetAutomatedDiscoveryAccountUpdateErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedDiscoveryAccountUpdateError::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", AutomatedDiscoveryAccountUpdateErrorCodeMapper::GetNameForAutomatedDiscoveryAccountUpdateErrorCode(m_errorCode));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
