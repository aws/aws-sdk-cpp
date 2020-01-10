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

#include <aws/chime/model/AlexaForBusinessMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

AlexaForBusinessMetadata::AlexaForBusinessMetadata() : 
    m_isAlexaForBusinessEnabled(false),
    m_isAlexaForBusinessEnabledHasBeenSet(false),
    m_alexaForBusinessRoomArnHasBeenSet(false)
{
}

AlexaForBusinessMetadata::AlexaForBusinessMetadata(JsonView jsonValue) : 
    m_isAlexaForBusinessEnabled(false),
    m_isAlexaForBusinessEnabledHasBeenSet(false),
    m_alexaForBusinessRoomArnHasBeenSet(false)
{
  *this = jsonValue;
}

AlexaForBusinessMetadata& AlexaForBusinessMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsAlexaForBusinessEnabled"))
  {
    m_isAlexaForBusinessEnabled = jsonValue.GetBool("IsAlexaForBusinessEnabled");

    m_isAlexaForBusinessEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlexaForBusinessRoomArn"))
  {
    m_alexaForBusinessRoomArn = jsonValue.GetString("AlexaForBusinessRoomArn");

    m_alexaForBusinessRoomArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AlexaForBusinessMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_isAlexaForBusinessEnabledHasBeenSet)
  {
   payload.WithBool("IsAlexaForBusinessEnabled", m_isAlexaForBusinessEnabled);

  }

  if(m_alexaForBusinessRoomArnHasBeenSet)
  {
   payload.WithString("AlexaForBusinessRoomArn", m_alexaForBusinessRoomArn);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
