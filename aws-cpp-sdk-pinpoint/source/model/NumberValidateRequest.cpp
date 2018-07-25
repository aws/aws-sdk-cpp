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

#include <aws/pinpoint/model/NumberValidateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

NumberValidateRequest::NumberValidateRequest() : 
    m_isoCountryCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false)
{
}

NumberValidateRequest::NumberValidateRequest(JsonView jsonValue) : 
    m_isoCountryCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false)
{
  *this = jsonValue;
}

NumberValidateRequest& NumberValidateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsoCountryCode"))
  {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");

    m_isoCountryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue NumberValidateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_isoCountryCodeHasBeenSet)
  {
   payload.WithString("IsoCountryCode", m_isoCountryCode);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
