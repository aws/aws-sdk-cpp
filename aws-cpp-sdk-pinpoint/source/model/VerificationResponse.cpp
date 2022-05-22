/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/VerificationResponse.h>
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

VerificationResponse::VerificationResponse() : 
    m_valid(false),
    m_validHasBeenSet(false)
{
}

VerificationResponse::VerificationResponse(JsonView jsonValue) : 
    m_valid(false),
    m_validHasBeenSet(false)
{
  *this = jsonValue;
}

VerificationResponse& VerificationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Valid"))
  {
    m_valid = jsonValue.GetBool("Valid");

    m_validHasBeenSet = true;
  }

  return *this;
}

JsonValue VerificationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_validHasBeenSet)
  {
   payload.WithBool("Valid", m_valid);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
