/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
