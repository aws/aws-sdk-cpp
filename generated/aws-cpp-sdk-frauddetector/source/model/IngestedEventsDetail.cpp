/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/IngestedEventsDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

IngestedEventsDetail::IngestedEventsDetail() : 
    m_ingestedEventsTimeWindowHasBeenSet(false)
{
}

IngestedEventsDetail::IngestedEventsDetail(JsonView jsonValue) : 
    m_ingestedEventsTimeWindowHasBeenSet(false)
{
  *this = jsonValue;
}

IngestedEventsDetail& IngestedEventsDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ingestedEventsTimeWindow"))
  {
    m_ingestedEventsTimeWindow = jsonValue.GetObject("ingestedEventsTimeWindow");

    m_ingestedEventsTimeWindowHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestedEventsDetail::Jsonize() const
{
  JsonValue payload;

  if(m_ingestedEventsTimeWindowHasBeenSet)
  {
   payload.WithObject("ingestedEventsTimeWindow", m_ingestedEventsTimeWindow.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
