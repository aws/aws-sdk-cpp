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

#include <aws/appstream/model/NetworkAccessConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

NetworkAccessConfiguration::NetworkAccessConfiguration() : 
    m_eniPrivateIpAddressHasBeenSet(false),
    m_eniIdHasBeenSet(false)
{
}

NetworkAccessConfiguration::NetworkAccessConfiguration(JsonView jsonValue) : 
    m_eniPrivateIpAddressHasBeenSet(false),
    m_eniIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkAccessConfiguration& NetworkAccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EniPrivateIpAddress"))
  {
    m_eniPrivateIpAddress = jsonValue.GetString("EniPrivateIpAddress");

    m_eniPrivateIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EniId"))
  {
    m_eniId = jsonValue.GetString("EniId");

    m_eniIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkAccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_eniPrivateIpAddressHasBeenSet)
  {
   payload.WithString("EniPrivateIpAddress", m_eniPrivateIpAddress);

  }

  if(m_eniIdHasBeenSet)
  {
   payload.WithString("EniId", m_eniId);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
