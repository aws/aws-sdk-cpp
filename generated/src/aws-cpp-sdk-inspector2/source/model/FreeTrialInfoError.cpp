/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FreeTrialInfoError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

FreeTrialInfoError::FreeTrialInfoError() : 
    m_accountIdHasBeenSet(false),
    m_code(FreeTrialInfoErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

FreeTrialInfoError::FreeTrialInfoError(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_code(FreeTrialInfoErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

FreeTrialInfoError& FreeTrialInfoError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = FreeTrialInfoErrorCodeMapper::GetFreeTrialInfoErrorCodeForName(jsonValue.GetString("code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue FreeTrialInfoError::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", FreeTrialInfoErrorCodeMapper::GetNameForFreeTrialInfoErrorCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
