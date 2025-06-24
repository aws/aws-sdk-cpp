/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/SupportTerm.h>
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

SupportTerm::SupportTerm(JsonView jsonValue)
{
  *this = jsonValue;
}

SupportTerm& SupportTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("refundPolicyDescription"))
  {
    m_refundPolicyDescription = jsonValue.GetString("refundPolicyDescription");
    m_refundPolicyDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue SupportTerm::Jsonize() const
{
  JsonValue payload;

  if(m_refundPolicyDescriptionHasBeenSet)
  {
   payload.WithString("refundPolicyDescription", m_refundPolicyDescription);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
