/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TermDetails.h>
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

TermDetails::TermDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

TermDetails& TermDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("usageBasedPricingTerm"))
  {
    m_usageBasedPricingTerm = jsonValue.GetObject("usageBasedPricingTerm");
    m_usageBasedPricingTermHasBeenSet = true;
  }
  if(jsonValue.ValueExists("legalTerm"))
  {
    m_legalTerm = jsonValue.GetObject("legalTerm");
    m_legalTermHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportTerm"))
  {
    m_supportTerm = jsonValue.GetObject("supportTerm");
    m_supportTermHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validityTerm"))
  {
    m_validityTerm = jsonValue.GetObject("validityTerm");
    m_validityTermHasBeenSet = true;
  }
  return *this;
}

JsonValue TermDetails::Jsonize() const
{
  JsonValue payload;

  if(m_usageBasedPricingTermHasBeenSet)
  {
   payload.WithObject("usageBasedPricingTerm", m_usageBasedPricingTerm.Jsonize());

  }

  if(m_legalTermHasBeenSet)
  {
   payload.WithObject("legalTerm", m_legalTerm.Jsonize());

  }

  if(m_supportTermHasBeenSet)
  {
   payload.WithObject("supportTerm", m_supportTerm.Jsonize());

  }

  if(m_validityTermHasBeenSet)
  {
   payload.WithObject("validityTerm", m_validityTerm.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
