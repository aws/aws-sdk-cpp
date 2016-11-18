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
#include <aws/dms/model/SupportedEndpointType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

SupportedEndpointType::SupportedEndpointType() : 
    m_engineNameHasBeenSet(false),
    m_supportsCDC(false),
    m_supportsCDCHasBeenSet(false),
    m_endpointType(ReplicationEndpointTypeValue::NOT_SET),
    m_endpointTypeHasBeenSet(false)
{
}

SupportedEndpointType::SupportedEndpointType(const JsonValue& jsonValue) : 
    m_engineNameHasBeenSet(false),
    m_supportsCDC(false),
    m_supportsCDCHasBeenSet(false),
    m_endpointType(ReplicationEndpointTypeValue::NOT_SET),
    m_endpointTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SupportedEndpointType& SupportedEndpointType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EngineName"))
  {
    m_engineName = jsonValue.GetString("EngineName");

    m_engineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportsCDC"))
  {
    m_supportsCDC = jsonValue.GetBool("SupportsCDC");

    m_supportsCDCHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = ReplicationEndpointTypeValueMapper::GetReplicationEndpointTypeValueForName(jsonValue.GetString("EndpointType"));

    m_endpointTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SupportedEndpointType::Jsonize() const
{
  JsonValue payload;

  if(m_engineNameHasBeenSet)
  {
   payload.WithString("EngineName", m_engineName);

  }

  if(m_supportsCDCHasBeenSet)
  {
   payload.WithBool("SupportsCDC", m_supportsCDC);

  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", ReplicationEndpointTypeValueMapper::GetNameForReplicationEndpointTypeValue(m_endpointType));
  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws