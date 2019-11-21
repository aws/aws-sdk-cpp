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

#include <aws/connectparticipant/model/ConnectionCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

ConnectionCredentials::ConnectionCredentials() : 
    m_connectionTokenHasBeenSet(false),
    m_expiryHasBeenSet(false)
{
}

ConnectionCredentials::ConnectionCredentials(JsonView jsonValue) : 
    m_connectionTokenHasBeenSet(false),
    m_expiryHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionCredentials& ConnectionCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionToken"))
  {
    m_connectionToken = jsonValue.GetString("ConnectionToken");

    m_connectionTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expiry"))
  {
    m_expiry = jsonValue.GetString("Expiry");

    m_expiryHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_connectionTokenHasBeenSet)
  {
   payload.WithString("ConnectionToken", m_connectionToken);

  }

  if(m_expiryHasBeenSet)
  {
   payload.WithString("Expiry", m_expiry);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
