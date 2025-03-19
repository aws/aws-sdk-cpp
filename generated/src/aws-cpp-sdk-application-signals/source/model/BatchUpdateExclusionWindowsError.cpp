/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BatchUpdateExclusionWindowsError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

BatchUpdateExclusionWindowsError::BatchUpdateExclusionWindowsError(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchUpdateExclusionWindowsError& BatchUpdateExclusionWindowsError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SloId"))
  {
    m_sloId = jsonValue.GetString("SloId");
    m_sloIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateExclusionWindowsError::Jsonize() const
{
  JsonValue payload;

  if(m_sloIdHasBeenSet)
  {
   payload.WithString("SloId", m_sloId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
