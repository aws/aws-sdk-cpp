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

#include <aws/iotevents/model/DetectorModelSummary.h>
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

DetectorModelSummary::DetectorModelSummary() : 
    m_detectorModelNameHasBeenSet(false),
    m_detectorModelDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

DetectorModelSummary::DetectorModelSummary(JsonView jsonValue) : 
    m_detectorModelNameHasBeenSet(false),
    m_detectorModelDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DetectorModelSummary& DetectorModelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detectorModelName"))
  {
    m_detectorModelName = jsonValue.GetString("detectorModelName");

    m_detectorModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorModelDescription"))
  {
    m_detectorModelDescription = jsonValue.GetString("detectorModelDescription");

    m_detectorModelDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectorModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_detectorModelNameHasBeenSet)
  {
   payload.WithString("detectorModelName", m_detectorModelName);

  }

  if(m_detectorModelDescriptionHasBeenSet)
  {
   payload.WithString("detectorModelDescription", m_detectorModelDescription);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
