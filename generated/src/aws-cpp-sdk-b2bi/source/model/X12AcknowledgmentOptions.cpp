/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12AcknowledgmentOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

X12AcknowledgmentOptions::X12AcknowledgmentOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

X12AcknowledgmentOptions& X12AcknowledgmentOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functionalAcknowledgment"))
  {
    m_functionalAcknowledgment = X12FunctionalAcknowledgmentMapper::GetX12FunctionalAcknowledgmentForName(jsonValue.GetString("functionalAcknowledgment"));
    m_functionalAcknowledgmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("technicalAcknowledgment"))
  {
    m_technicalAcknowledgment = X12TechnicalAcknowledgmentMapper::GetX12TechnicalAcknowledgmentForName(jsonValue.GetString("technicalAcknowledgment"));
    m_technicalAcknowledgmentHasBeenSet = true;
  }
  return *this;
}

JsonValue X12AcknowledgmentOptions::Jsonize() const
{
  JsonValue payload;

  if(m_functionalAcknowledgmentHasBeenSet)
  {
   payload.WithString("functionalAcknowledgment", X12FunctionalAcknowledgmentMapper::GetNameForX12FunctionalAcknowledgment(m_functionalAcknowledgment));
  }

  if(m_technicalAcknowledgmentHasBeenSet)
  {
   payload.WithString("technicalAcknowledgment", X12TechnicalAcknowledgmentMapper::GetNameForX12TechnicalAcknowledgment(m_technicalAcknowledgment));
  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
