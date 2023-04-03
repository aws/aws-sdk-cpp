/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FederationSourceException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

FederationSourceException::FederationSourceException() : 
    m_federationSourceErrorCode(FederationSourceErrorCode::NOT_SET),
    m_federationSourceErrorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

FederationSourceException::FederationSourceException(JsonView jsonValue) : 
    m_federationSourceErrorCode(FederationSourceErrorCode::NOT_SET),
    m_federationSourceErrorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

FederationSourceException& FederationSourceException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FederationSourceErrorCode"))
  {
    m_federationSourceErrorCode = FederationSourceErrorCodeMapper::GetFederationSourceErrorCodeForName(jsonValue.GetString("FederationSourceErrorCode"));

    m_federationSourceErrorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue FederationSourceException::Jsonize() const
{
  JsonValue payload;

  if(m_federationSourceErrorCodeHasBeenSet)
  {
   payload.WithString("FederationSourceErrorCode", FederationSourceErrorCodeMapper::GetNameForFederationSourceErrorCode(m_federationSourceErrorCode));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
