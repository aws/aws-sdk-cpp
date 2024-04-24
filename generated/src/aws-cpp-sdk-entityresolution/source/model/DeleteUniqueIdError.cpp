/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/DeleteUniqueIdError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

DeleteUniqueIdError::DeleteUniqueIdError() : 
    m_errorType(DeleteUniqueIdErrorType::NOT_SET),
    m_errorTypeHasBeenSet(false),
    m_uniqueIdHasBeenSet(false)
{
}

DeleteUniqueIdError::DeleteUniqueIdError(JsonView jsonValue) : 
    m_errorType(DeleteUniqueIdErrorType::NOT_SET),
    m_errorTypeHasBeenSet(false),
    m_uniqueIdHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteUniqueIdError& DeleteUniqueIdError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorType"))
  {
    m_errorType = DeleteUniqueIdErrorTypeMapper::GetDeleteUniqueIdErrorTypeForName(jsonValue.GetString("errorType"));

    m_errorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uniqueId"))
  {
    m_uniqueId = jsonValue.GetString("uniqueId");

    m_uniqueIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteUniqueIdError::Jsonize() const
{
  JsonValue payload;

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("errorType", DeleteUniqueIdErrorTypeMapper::GetNameForDeleteUniqueIdErrorType(m_errorType));
  }

  if(m_uniqueIdHasBeenSet)
  {
   payload.WithString("uniqueId", m_uniqueId);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
