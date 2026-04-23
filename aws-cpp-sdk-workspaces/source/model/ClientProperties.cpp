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

#include <aws/workspaces/model/ClientProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ClientProperties::ClientProperties() : 
    m_reconnectEnabled(ReconnectEnum::NOT_SET),
    m_reconnectEnabledHasBeenSet(false)
{
}

ClientProperties::ClientProperties(JsonView jsonValue) : 
    m_reconnectEnabled(ReconnectEnum::NOT_SET),
    m_reconnectEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

ClientProperties& ClientProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReconnectEnabled"))
  {
    m_reconnectEnabled = ReconnectEnumMapper::GetReconnectEnumForName(jsonValue.GetString("ReconnectEnabled"));

    m_reconnectEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientProperties::Jsonize() const
{
  JsonValue payload;

  if(m_reconnectEnabledHasBeenSet)
  {
   payload.WithString("ReconnectEnabled", ReconnectEnumMapper::GetNameForReconnectEnum(m_reconnectEnabled));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
