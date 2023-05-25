/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AnalysisResult.h>
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

AnalysisResult::AnalysisResult() : 
    m_typeHasBeenSet(false),
    m_level(AnalysisResultLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_locationsHasBeenSet(false)
{
}

AnalysisResult::AnalysisResult(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_level(AnalysisResultLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_locationsHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisResult& AnalysisResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("level"))
  {
    m_level = AnalysisResultLevelMapper::GetAnalysisResultLevelForName(jsonValue.GetString("level"));

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("locations"))
  {
    Aws::Utils::Array<JsonView> locationsJsonList = jsonValue.GetArray("locations");
    for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
    {
      m_locations.push_back(locationsJsonList[locationsIndex].AsObject());
    }
    m_locationsHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisResult::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", AnalysisResultLevelMapper::GetNameForAnalysisResultLevel(m_level));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_locationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationsJsonList(m_locations.size());
   for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
   {
     locationsJsonList[locationsIndex].AsObject(m_locations[locationsIndex].Jsonize());
   }
   payload.WithArray("locations", std::move(locationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
