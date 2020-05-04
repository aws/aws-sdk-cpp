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

#include <aws/elasticfilesystem/model/AccessPointAlreadyExists.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

AccessPointAlreadyExists::AccessPointAlreadyExists() : 
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_accessPointIdHasBeenSet(false)
{
}

AccessPointAlreadyExists::AccessPointAlreadyExists(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_accessPointIdHasBeenSet(false)
{
  *this = jsonValue;
}

AccessPointAlreadyExists& AccessPointAlreadyExists::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessPointId"))
  {
    m_accessPointId = jsonValue.GetString("AccessPointId");

    m_accessPointIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessPointAlreadyExists::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_accessPointIdHasBeenSet)
  {
   payload.WithString("AccessPointId", m_accessPointId);

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
