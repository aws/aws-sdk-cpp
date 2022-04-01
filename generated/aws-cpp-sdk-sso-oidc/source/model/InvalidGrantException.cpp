/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/InvalidGrantException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOOIDC
{
namespace Model
{

InvalidGrantException::InvalidGrantException() : 
    m_errorHasBeenSet(false),
    m_error_descriptionHasBeenSet(false)
{
}

InvalidGrantException::InvalidGrantException(JsonView jsonValue) : 
    m_errorHasBeenSet(false),
    m_error_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidGrantException& InvalidGrantException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error_description"))
  {
    m_error_description = jsonValue.GetString("error_description");

    m_error_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidGrantException::Jsonize() const
{
  JsonValue payload;

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_error_descriptionHasBeenSet)
  {
   payload.WithString("error_description", m_error_description);

  }

  return payload;
}

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
