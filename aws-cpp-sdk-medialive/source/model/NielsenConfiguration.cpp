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

#include <aws/medialive/model/NielsenConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

NielsenConfiguration::NielsenConfiguration() : 
    m_distributorIdHasBeenSet(false),
    m_nielsenPcmToId3Tagging(NielsenPcmToId3TaggingState::NOT_SET),
    m_nielsenPcmToId3TaggingHasBeenSet(false)
{
}

NielsenConfiguration::NielsenConfiguration(JsonView jsonValue) : 
    m_distributorIdHasBeenSet(false),
    m_nielsenPcmToId3Tagging(NielsenPcmToId3TaggingState::NOT_SET),
    m_nielsenPcmToId3TaggingHasBeenSet(false)
{
  *this = jsonValue;
}

NielsenConfiguration& NielsenConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("distributorId"))
  {
    m_distributorId = jsonValue.GetString("distributorId");

    m_distributorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenPcmToId3Tagging"))
  {
    m_nielsenPcmToId3Tagging = NielsenPcmToId3TaggingStateMapper::GetNielsenPcmToId3TaggingStateForName(jsonValue.GetString("nielsenPcmToId3Tagging"));

    m_nielsenPcmToId3TaggingHasBeenSet = true;
  }

  return *this;
}

JsonValue NielsenConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_distributorIdHasBeenSet)
  {
   payload.WithString("distributorId", m_distributorId);

  }

  if(m_nielsenPcmToId3TaggingHasBeenSet)
  {
   payload.WithString("nielsenPcmToId3Tagging", NielsenPcmToId3TaggingStateMapper::GetNameForNielsenPcmToId3TaggingState(m_nielsenPcmToId3Tagging));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
