/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ResourceError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ResourceError::ResourceError() : 
    m_errorCode(FleetErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorTimestampHasBeenSet(false)
{
}

ResourceError::ResourceError(JsonView jsonValue) : 
    m_errorCode(FleetErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceError& ResourceError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = FleetErrorCodeMapper::GetFleetErrorCodeForName(jsonValue.GetString("ErrorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorTimestamp"))
  {
    m_errorTimestamp = jsonValue.GetDouble("ErrorTimestamp");

    m_errorTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceError::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", FleetErrorCodeMapper::GetNameForFleetErrorCode(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_errorTimestampHasBeenSet)
  {
   payload.WithDouble("ErrorTimestamp", m_errorTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
