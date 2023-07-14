﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/TumblingWindow.h>
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

TumblingWindow::TumblingWindow() : 
    m_intervalHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

TumblingWindow::TumblingWindow(JsonView jsonValue) : 
    m_intervalHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
  *this = jsonValue;
}

TumblingWindow& TumblingWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("interval"))
  {
    m_interval = jsonValue.GetString("interval");

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offset"))
  {
    m_offset = jsonValue.GetString("offset");

    m_offsetHasBeenSet = true;
  }

  return *this;
}

JsonValue TumblingWindow::Jsonize() const
{
  JsonValue payload;

  if(m_intervalHasBeenSet)
  {
   payload.WithString("interval", m_interval);

  }

  if(m_offsetHasBeenSet)
  {
   payload.WithString("offset", m_offset);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
