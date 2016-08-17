/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/model/IpRoute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

IpRoute::IpRoute() : 
    m_cidrIpHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

IpRoute::IpRoute(const JsonValue& jsonValue) : 
    m_cidrIpHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

IpRoute& IpRoute::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CidrIp"))
  {
    m_cidrIp = jsonValue.GetString("CidrIp");

    m_cidrIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue IpRoute::Jsonize() const
{
  JsonValue payload;

  if(m_cidrIpHasBeenSet)
  {
   payload.WithString("CidrIp", m_cidrIp);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws