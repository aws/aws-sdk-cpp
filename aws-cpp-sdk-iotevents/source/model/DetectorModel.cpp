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

#include <aws/iotevents/model/DetectorModel.h>
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

DetectorModel::DetectorModel() : 
    m_detectorModelDefinitionHasBeenSet(false),
    m_detectorModelConfigurationHasBeenSet(false)
{
}

DetectorModel::DetectorModel(JsonView jsonValue) : 
    m_detectorModelDefinitionHasBeenSet(false),
    m_detectorModelConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DetectorModel& DetectorModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detectorModelDefinition"))
  {
    m_detectorModelDefinition = jsonValue.GetObject("detectorModelDefinition");

    m_detectorModelDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorModelConfiguration"))
  {
    m_detectorModelConfiguration = jsonValue.GetObject("detectorModelConfiguration");

    m_detectorModelConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectorModel::Jsonize() const
{
  JsonValue payload;

  if(m_detectorModelDefinitionHasBeenSet)
  {
   payload.WithObject("detectorModelDefinition", m_detectorModelDefinition.Jsonize());

  }

  if(m_detectorModelConfigurationHasBeenSet)
  {
   payload.WithObject("detectorModelConfiguration", m_detectorModelConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
