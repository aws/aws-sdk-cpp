/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Measurement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Measurement::Measurement() : 
    m_processingConfigHasBeenSet(false)
{
}

Measurement::Measurement(JsonView jsonValue) : 
    m_processingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

Measurement& Measurement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("processingConfig"))
  {
    m_processingConfig = jsonValue.GetObject("processingConfig");

    m_processingConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue Measurement::Jsonize() const
{
  JsonValue payload;

  if(m_processingConfigHasBeenSet)
  {
   payload.WithObject("processingConfig", m_processingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
