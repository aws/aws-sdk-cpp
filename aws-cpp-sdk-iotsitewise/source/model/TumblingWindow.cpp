/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_intervalHasBeenSet(false)
{
}

TumblingWindow::TumblingWindow(JsonView jsonValue) : 
    m_intervalHasBeenSet(false)
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

  return *this;
}

JsonValue TumblingWindow::Jsonize() const
{
  JsonValue payload;

  if(m_intervalHasBeenSet)
  {
   payload.WithString("interval", m_interval);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
