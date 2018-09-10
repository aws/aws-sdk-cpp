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

#include <aws/iotanalytics/model/EstimatedResourceSize.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

EstimatedResourceSize::EstimatedResourceSize() : 
    m_estimatedSizeInBytes(0.0),
    m_estimatedSizeInBytesHasBeenSet(false),
    m_estimatedOnHasBeenSet(false)
{
}

EstimatedResourceSize::EstimatedResourceSize(JsonView jsonValue) : 
    m_estimatedSizeInBytes(0.0),
    m_estimatedSizeInBytesHasBeenSet(false),
    m_estimatedOnHasBeenSet(false)
{
  *this = jsonValue;
}

EstimatedResourceSize& EstimatedResourceSize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("estimatedSizeInBytes"))
  {
    m_estimatedSizeInBytes = jsonValue.GetDouble("estimatedSizeInBytes");

    m_estimatedSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedOn"))
  {
    m_estimatedOn = jsonValue.GetDouble("estimatedOn");

    m_estimatedOnHasBeenSet = true;
  }

  return *this;
}

JsonValue EstimatedResourceSize::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedSizeInBytesHasBeenSet)
  {
   payload.WithDouble("estimatedSizeInBytes", m_estimatedSizeInBytes);

  }

  if(m_estimatedOnHasBeenSet)
  {
   payload.WithDouble("estimatedOn", m_estimatedOn.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
