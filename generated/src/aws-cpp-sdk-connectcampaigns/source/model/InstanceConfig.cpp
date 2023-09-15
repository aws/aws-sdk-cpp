/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/InstanceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

InstanceConfig::InstanceConfig() : 
    m_connectInstanceIdHasBeenSet(false),
    m_serviceLinkedRoleArnHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false)
{
}

InstanceConfig::InstanceConfig(JsonView jsonValue) : 
    m_connectInstanceIdHasBeenSet(false),
    m_serviceLinkedRoleArnHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceConfig& InstanceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectInstanceId"))
  {
    m_connectInstanceId = jsonValue.GetString("connectInstanceId");

    m_connectInstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceLinkedRoleArn"))
  {
    m_serviceLinkedRoleArn = jsonValue.GetString("serviceLinkedRoleArn");

    m_serviceLinkedRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionConfig"))
  {
    m_encryptionConfig = jsonValue.GetObject("encryptionConfig");

    m_encryptionConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_connectInstanceIdHasBeenSet)
  {
   payload.WithString("connectInstanceId", m_connectInstanceId);

  }

  if(m_serviceLinkedRoleArnHasBeenSet)
  {
   payload.WithString("serviceLinkedRoleArn", m_serviceLinkedRoleArn);

  }

  if(m_encryptionConfigHasBeenSet)
  {
   payload.WithObject("encryptionConfig", m_encryptionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
