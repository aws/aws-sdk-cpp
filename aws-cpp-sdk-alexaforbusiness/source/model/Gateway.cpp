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

#include <aws/alexaforbusiness/model/Gateway.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

Gateway::Gateway() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_gatewayGroupArnHasBeenSet(false),
    m_softwareVersionHasBeenSet(false)
{
}

Gateway::Gateway(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_gatewayGroupArnHasBeenSet(false),
    m_softwareVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Gateway& Gateway::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayGroupArn"))
  {
    m_gatewayGroupArn = jsonValue.GetString("GatewayGroupArn");

    m_gatewayGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SoftwareVersion"))
  {
    m_softwareVersion = jsonValue.GetString("SoftwareVersion");

    m_softwareVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Gateway::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_gatewayGroupArnHasBeenSet)
  {
   payload.WithString("GatewayGroupArn", m_gatewayGroupArn);

  }

  if(m_softwareVersionHasBeenSet)
  {
   payload.WithString("SoftwareVersion", m_softwareVersion);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
