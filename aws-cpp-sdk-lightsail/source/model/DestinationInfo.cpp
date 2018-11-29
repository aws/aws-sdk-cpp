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

#include <aws/lightsail/model/DestinationInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

DestinationInfo::DestinationInfo() : 
    m_idHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
}

DestinationInfo::DestinationInfo(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationInfo& DestinationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("service"))
  {
    m_service = jsonValue.GetString("service");

    m_serviceHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
