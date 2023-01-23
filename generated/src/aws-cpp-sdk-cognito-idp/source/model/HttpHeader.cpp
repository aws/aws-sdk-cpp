/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/HttpHeader.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

HttpHeader::HttpHeader() : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
}

HttpHeader::HttpHeader(JsonView jsonValue) : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
  *this = jsonValue;
}

HttpHeader& HttpHeader::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("headerName"))
  {
    m_headerName = jsonValue.GetString("headerName");

    m_headerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("headerValue"))
  {
    m_headerValue = jsonValue.GetString("headerValue");

    m_headerValueHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpHeader::Jsonize() const
{
  JsonValue payload;

  if(m_headerNameHasBeenSet)
  {
   payload.WithString("headerName", m_headerName);

  }

  if(m_headerValueHasBeenSet)
  {
   payload.WithString("headerValue", m_headerValue);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
