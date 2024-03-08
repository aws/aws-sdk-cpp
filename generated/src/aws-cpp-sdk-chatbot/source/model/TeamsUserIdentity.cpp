/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/TeamsUserIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace chatbot
{
namespace Model
{

TeamsUserIdentity::TeamsUserIdentity() : 
    m_iamRoleArnHasBeenSet(false),
    m_chatConfigurationArnHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_awsUserIdentityHasBeenSet(false),
    m_teamsChannelIdHasBeenSet(false),
    m_teamsTenantIdHasBeenSet(false)
{
}

TeamsUserIdentity::TeamsUserIdentity(JsonView jsonValue) : 
    m_iamRoleArnHasBeenSet(false),
    m_chatConfigurationArnHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_awsUserIdentityHasBeenSet(false),
    m_teamsChannelIdHasBeenSet(false),
    m_teamsTenantIdHasBeenSet(false)
{
  *this = jsonValue;
}

TeamsUserIdentity& TeamsUserIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChatConfigurationArn"))
  {
    m_chatConfigurationArn = jsonValue.GetString("ChatConfigurationArn");

    m_chatConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TeamId"))
  {
    m_teamId = jsonValue.GetString("TeamId");

    m_teamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsUserIdentity"))
  {
    m_awsUserIdentity = jsonValue.GetString("AwsUserIdentity");

    m_awsUserIdentityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TeamsChannelId"))
  {
    m_teamsChannelId = jsonValue.GetString("TeamsChannelId");

    m_teamsChannelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TeamsTenantId"))
  {
    m_teamsTenantId = jsonValue.GetString("TeamsTenantId");

    m_teamsTenantIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TeamsUserIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_chatConfigurationArnHasBeenSet)
  {
   payload.WithString("ChatConfigurationArn", m_chatConfigurationArn);

  }

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("TeamId", m_teamId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_awsUserIdentityHasBeenSet)
  {
   payload.WithString("AwsUserIdentity", m_awsUserIdentity);

  }

  if(m_teamsChannelIdHasBeenSet)
  {
   payload.WithString("TeamsChannelId", m_teamsChannelId);

  }

  if(m_teamsTenantIdHasBeenSet)
  {
   payload.WithString("TeamsTenantId", m_teamsTenantId);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
