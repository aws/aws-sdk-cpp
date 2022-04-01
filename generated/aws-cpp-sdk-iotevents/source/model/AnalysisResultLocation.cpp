/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AnalysisResultLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

AnalysisResultLocation::AnalysisResultLocation() : 
    m_pathHasBeenSet(false)
{
}

AnalysisResultLocation::AnalysisResultLocation(JsonView jsonValue) : 
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisResultLocation& AnalysisResultLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisResultLocation::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
