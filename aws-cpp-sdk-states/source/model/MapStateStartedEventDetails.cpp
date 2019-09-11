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

#include <aws/states/model/MapStateStartedEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

MapStateStartedEventDetails::MapStateStartedEventDetails() : 
    m_length(0),
    m_lengthHasBeenSet(false)
{
}

MapStateStartedEventDetails::MapStateStartedEventDetails(JsonView jsonValue) : 
    m_length(0),
    m_lengthHasBeenSet(false)
{
  *this = jsonValue;
}

MapStateStartedEventDetails& MapStateStartedEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("length"))
  {
    m_length = jsonValue.GetInteger("length");

    m_lengthHasBeenSet = true;
  }

  return *this;
}

JsonValue MapStateStartedEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_lengthHasBeenSet)
  {
   payload.WithInteger("length", m_length);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
