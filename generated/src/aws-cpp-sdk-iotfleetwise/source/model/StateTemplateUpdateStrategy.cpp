/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StateTemplateUpdateStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

StateTemplateUpdateStrategy::StateTemplateUpdateStrategy(JsonView jsonValue)
{
  *this = jsonValue;
}

StateTemplateUpdateStrategy& StateTemplateUpdateStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("periodic"))
  {
    m_periodic = jsonValue.GetObject("periodic");
    m_periodicHasBeenSet = true;
  }
  if(jsonValue.ValueExists("onChange"))
  {
    m_onChange = jsonValue.GetObject("onChange");
    m_onChangeHasBeenSet = true;
  }
  return *this;
}

JsonValue StateTemplateUpdateStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_periodicHasBeenSet)
  {
   payload.WithObject("periodic", m_periodic.Jsonize());

  }

  if(m_onChangeHasBeenSet)
  {
   payload.WithObject("onChange", m_onChange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
