/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/BatchGetFindingsError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

BatchGetFindingsError::BatchGetFindingsError(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchGetFindingsError& BatchGetFindingsError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanName"))
  {
    m_scanName = jsonValue.GetString("scanName");
    m_scanNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("findingId"))
  {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetFindingsError::Jsonize() const
{
  JsonValue payload;

  if(m_scanNameHasBeenSet)
  {
   payload.WithString("scanName", m_scanName);

  }

  if(m_findingIdHasBeenSet)
  {
   payload.WithString("findingId", m_findingId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", ErrorCodeMapper::GetNameForErrorCode(m_errorCode));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
