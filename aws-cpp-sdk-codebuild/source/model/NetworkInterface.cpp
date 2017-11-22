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

#include <aws/codebuild/model/NetworkInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

NetworkInterface::NetworkInterface() : 
    m_subnetIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(const JsonValue& jsonValue) : 
    m_subnetIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInterface& NetworkInterface::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("subnetId"))
  {
    m_subnetId = jsonValue.GetString("subnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("networkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("subnetId", m_subnetId);

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("networkInterfaceId", m_networkInterfaceId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
