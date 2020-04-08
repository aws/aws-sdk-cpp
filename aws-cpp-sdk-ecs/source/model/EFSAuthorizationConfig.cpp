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

#include <aws/ecs/model/EFSAuthorizationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

EFSAuthorizationConfig::EFSAuthorizationConfig() : 
    m_accessPointIdHasBeenSet(false),
    m_iam(EFSAuthorizationConfigIAM::NOT_SET),
    m_iamHasBeenSet(false)
{
}

EFSAuthorizationConfig::EFSAuthorizationConfig(JsonView jsonValue) : 
    m_accessPointIdHasBeenSet(false),
    m_iam(EFSAuthorizationConfigIAM::NOT_SET),
    m_iamHasBeenSet(false)
{
  *this = jsonValue;
}

EFSAuthorizationConfig& EFSAuthorizationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessPointId"))
  {
    m_accessPointId = jsonValue.GetString("accessPointId");

    m_accessPointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iam"))
  {
    m_iam = EFSAuthorizationConfigIAMMapper::GetEFSAuthorizationConfigIAMForName(jsonValue.GetString("iam"));

    m_iamHasBeenSet = true;
  }

  return *this;
}

JsonValue EFSAuthorizationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_accessPointIdHasBeenSet)
  {
   payload.WithString("accessPointId", m_accessPointId);

  }

  if(m_iamHasBeenSet)
  {
   payload.WithString("iam", EFSAuthorizationConfigIAMMapper::GetNameForEFSAuthorizationConfigIAM(m_iam));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
