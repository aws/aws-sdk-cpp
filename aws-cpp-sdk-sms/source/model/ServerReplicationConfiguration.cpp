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

#include <aws/sms/model/ServerReplicationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ServerReplicationConfiguration::ServerReplicationConfiguration() : 
    m_serverHasBeenSet(false),
    m_serverReplicationParametersHasBeenSet(false)
{
}

ServerReplicationConfiguration::ServerReplicationConfiguration(JsonView jsonValue) : 
    m_serverHasBeenSet(false),
    m_serverReplicationParametersHasBeenSet(false)
{
  *this = jsonValue;
}

ServerReplicationConfiguration& ServerReplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("server"))
  {
    m_server = jsonValue.GetObject("server");

    m_serverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverReplicationParameters"))
  {
    m_serverReplicationParameters = jsonValue.GetObject("serverReplicationParameters");

    m_serverReplicationParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerReplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverHasBeenSet)
  {
   payload.WithObject("server", m_server.Jsonize());

  }

  if(m_serverReplicationParametersHasBeenSet)
  {
   payload.WithObject("serverReplicationParameters", m_serverReplicationParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
