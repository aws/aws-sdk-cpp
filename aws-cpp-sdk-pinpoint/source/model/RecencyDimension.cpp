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

#include <aws/pinpoint/model/RecencyDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

RecencyDimension::RecencyDimension() : 
    m_duration(Duration::NOT_SET),
    m_durationHasBeenSet(false),
    m_recencyType(RecencyType::NOT_SET),
    m_recencyTypeHasBeenSet(false)
{
}

RecencyDimension::RecencyDimension(const JsonValue& jsonValue) : 
    m_duration(Duration::NOT_SET),
    m_durationHasBeenSet(false),
    m_recencyType(RecencyType::NOT_SET),
    m_recencyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

RecencyDimension& RecencyDimension::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = DurationMapper::GetDurationForName(jsonValue.GetString("Duration"));

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecencyType"))
  {
    m_recencyType = RecencyTypeMapper::GetRecencyTypeForName(jsonValue.GetString("RecencyType"));

    m_recencyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecencyDimension::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithString("Duration", DurationMapper::GetNameForDuration(m_duration));
  }

  if(m_recencyTypeHasBeenSet)
  {
   payload.WithString("RecencyType", RecencyTypeMapper::GetNameForRecencyType(m_recencyType));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
