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

#include <aws/fsx/model/InvalidNetworkSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

InvalidNetworkSettings::InvalidNetworkSettings() : 
    m_messageHasBeenSet(false),
    m_invalidSubnetIdHasBeenSet(false),
    m_invalidSecurityGroupIdHasBeenSet(false)
{
}

InvalidNetworkSettings::InvalidNetworkSettings(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_invalidSubnetIdHasBeenSet(false),
    m_invalidSecurityGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidNetworkSettings& InvalidNetworkSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidSubnetId"))
  {
    m_invalidSubnetId = jsonValue.GetString("InvalidSubnetId");

    m_invalidSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidSecurityGroupId"))
  {
    m_invalidSecurityGroupId = jsonValue.GetString("InvalidSecurityGroupId");

    m_invalidSecurityGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidNetworkSettings::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_invalidSubnetIdHasBeenSet)
  {
   payload.WithString("InvalidSubnetId", m_invalidSubnetId);

  }

  if(m_invalidSecurityGroupIdHasBeenSet)
  {
   payload.WithString("InvalidSecurityGroupId", m_invalidSecurityGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
