/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/VerifyOTPMessageRequestParameters.h>
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

VerifyOTPMessageRequestParameters::VerifyOTPMessageRequestParameters() : 
    m_destinationIdentityHasBeenSet(false),
    m_otpHasBeenSet(false),
    m_referenceIdHasBeenSet(false)
{
}

VerifyOTPMessageRequestParameters::VerifyOTPMessageRequestParameters(JsonView jsonValue) : 
    m_destinationIdentityHasBeenSet(false),
    m_otpHasBeenSet(false),
    m_referenceIdHasBeenSet(false)
{
  *this = jsonValue;
}

VerifyOTPMessageRequestParameters& VerifyOTPMessageRequestParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationIdentity"))
  {
    m_destinationIdentity = jsonValue.GetString("DestinationIdentity");

    m_destinationIdentityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Otp"))
  {
    m_otp = jsonValue.GetString("Otp");

    m_otpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceId"))
  {
    m_referenceId = jsonValue.GetString("ReferenceId");

    m_referenceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VerifyOTPMessageRequestParameters::Jsonize() const
{
  JsonValue payload;

  if(m_destinationIdentityHasBeenSet)
  {
   payload.WithString("DestinationIdentity", m_destinationIdentity);

  }

  if(m_otpHasBeenSet)
  {
   payload.WithString("Otp", m_otp);

  }

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("ReferenceId", m_referenceId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
