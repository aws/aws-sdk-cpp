/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/InspectorScoreDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

InspectorScoreDetails::InspectorScoreDetails() : 
    m_adjustedCvssHasBeenSet(false)
{
}

InspectorScoreDetails::InspectorScoreDetails(JsonView jsonValue) : 
    m_adjustedCvssHasBeenSet(false)
{
  *this = jsonValue;
}

InspectorScoreDetails& InspectorScoreDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adjustedCvss"))
  {
    m_adjustedCvss = jsonValue.GetObject("adjustedCvss");

    m_adjustedCvssHasBeenSet = true;
  }

  return *this;
}

JsonValue InspectorScoreDetails::Jsonize() const
{
  JsonValue payload;

  if(m_adjustedCvssHasBeenSet)
  {
   payload.WithObject("adjustedCvss", m_adjustedCvss.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
