/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/ActiveDirectoryError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

ActiveDirectoryError::ActiveDirectoryError() : 
    m_activeDirectoryIdHasBeenSet(false),
    m_type(ActiveDirectoryErrorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ActiveDirectoryError::ActiveDirectoryError(JsonView jsonValue) : 
    m_activeDirectoryIdHasBeenSet(false),
    m_type(ActiveDirectoryErrorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ActiveDirectoryError& ActiveDirectoryError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActiveDirectoryId"))
  {
    m_activeDirectoryId = jsonValue.GetString("ActiveDirectoryId");

    m_activeDirectoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ActiveDirectoryErrorTypeMapper::GetActiveDirectoryErrorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ActiveDirectoryError::Jsonize() const
{
  JsonValue payload;

  if(m_activeDirectoryIdHasBeenSet)
  {
   payload.WithString("ActiveDirectoryId", m_activeDirectoryId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ActiveDirectoryErrorTypeMapper::GetNameForActiveDirectoryErrorType(m_type));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
