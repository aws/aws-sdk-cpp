/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ValidityTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

ValidityTerm::ValidityTerm(JsonView jsonValue)
{
  *this = jsonValue;
}

ValidityTerm& ValidityTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agreementDuration"))
  {
    m_agreementDuration = jsonValue.GetString("agreementDuration");
    m_agreementDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidityTerm::Jsonize() const
{
  JsonValue payload;

  if(m_agreementDurationHasBeenSet)
  {
   payload.WithString("agreementDuration", m_agreementDuration);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
