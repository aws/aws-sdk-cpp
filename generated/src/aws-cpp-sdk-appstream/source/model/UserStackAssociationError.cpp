/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UserStackAssociationError.h>
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

UserStackAssociationError::UserStackAssociationError() : 
    m_userStackAssociationHasBeenSet(false),
    m_errorCode(UserStackAssociationErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

UserStackAssociationError::UserStackAssociationError(JsonView jsonValue) : 
    m_userStackAssociationHasBeenSet(false),
    m_errorCode(UserStackAssociationErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

UserStackAssociationError& UserStackAssociationError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserStackAssociation"))
  {
    m_userStackAssociation = jsonValue.GetObject("UserStackAssociation");

    m_userStackAssociationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = UserStackAssociationErrorCodeMapper::GetUserStackAssociationErrorCodeForName(jsonValue.GetString("ErrorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue UserStackAssociationError::Jsonize() const
{
  JsonValue payload;

  if(m_userStackAssociationHasBeenSet)
  {
   payload.WithObject("UserStackAssociation", m_userStackAssociation.Jsonize());

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", UserStackAssociationErrorCodeMapper::GetNameForUserStackAssociationErrorCode(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
