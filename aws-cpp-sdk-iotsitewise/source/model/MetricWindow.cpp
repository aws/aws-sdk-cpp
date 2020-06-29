/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/MetricWindow.h>
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

MetricWindow::MetricWindow() : 
    m_tumblingHasBeenSet(false)
{
}

MetricWindow::MetricWindow(JsonView jsonValue) : 
    m_tumblingHasBeenSet(false)
{
  *this = jsonValue;
}

MetricWindow& MetricWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tumbling"))
  {
    m_tumbling = jsonValue.GetObject("tumbling");

    m_tumblingHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricWindow::Jsonize() const
{
  JsonValue payload;

  if(m_tumblingHasBeenSet)
  {
   payload.WithObject("tumbling", m_tumbling.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
