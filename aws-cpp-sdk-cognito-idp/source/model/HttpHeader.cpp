/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

HttpHeader::HttpHeader(const JsonValue& jsonValue) : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
  *this = jsonValue;
}

HttpHeader& HttpHeader::operator =(const JsonValue& jsonValue)
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
