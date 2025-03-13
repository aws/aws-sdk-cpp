/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AttachedFileError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AttachedFileError::AttachedFileError(JsonView jsonValue)
{
  *this = jsonValue;
}

AttachedFileError& AttachedFileError::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("FileId"))
  {
    m_fileId = jsonValue.GetString("FileId");
    m_fileIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AttachedFileError::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_fileIdHasBeenSet)
  {
   payload.WithString("FileId", m_fileId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
