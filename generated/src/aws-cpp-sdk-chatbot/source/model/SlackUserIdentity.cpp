/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/SlackUserIdentity.h>
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

SlackUserIdentity::SlackUserIdentity() : 
    m_iamRoleArnHasBeenSet(false),
    m_chatConfigurationArnHasBeenSet(false),
    m_slackTeamIdHasBeenSet(false),
    m_slackUserIdHasBeenSet(false),
    m_awsUserIdentityHasBeenSet(false)
{
}

SlackUserIdentity::SlackUserIdentity(JsonView jsonValue) : 
    m_iamRoleArnHasBeenSet(false),
    m_chatConfigurationArnHasBeenSet(false),
    m_slackTeamIdHasBeenSet(false),
    m_slackUserIdHasBeenSet(false),
    m_awsUserIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

SlackUserIdentity& SlackUserIdentity::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("SlackTeamId"))
  {
    m_slackTeamId = jsonValue.GetString("SlackTeamId");

    m_slackTeamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SlackUserId"))
  {
    m_slackUserId = jsonValue.GetString("SlackUserId");

    m_slackUserIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsUserIdentity"))
  {
    m_awsUserIdentity = jsonValue.GetString("AwsUserIdentity");

    m_awsUserIdentityHasBeenSet = true;
  }

  return *this;
}

JsonValue SlackUserIdentity::Jsonize() const
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

  if(m_slackTeamIdHasBeenSet)
  {
   payload.WithString("SlackTeamId", m_slackTeamId);

  }

  if(m_slackUserIdHasBeenSet)
  {
   payload.WithString("SlackUserId", m_slackUserId);

  }

  if(m_awsUserIdentityHasBeenSet)
  {
   payload.WithString("AwsUserIdentity", m_awsUserIdentity);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
