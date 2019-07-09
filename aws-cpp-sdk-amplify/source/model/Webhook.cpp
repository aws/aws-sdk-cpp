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

#include <aws/amplify/model/Webhook.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

Webhook::Webhook() : 
    m_webhookArnHasBeenSet(false),
    m_webhookIdHasBeenSet(false),
    m_webhookUrlHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

Webhook::Webhook(JsonView jsonValue) : 
    m_webhookArnHasBeenSet(false),
    m_webhookIdHasBeenSet(false),
    m_webhookUrlHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Webhook& Webhook::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("webhookArn"))
  {
    m_webhookArn = jsonValue.GetString("webhookArn");

    m_webhookArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webhookId"))
  {
    m_webhookId = jsonValue.GetString("webhookId");

    m_webhookIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webhookUrl"))
  {
    m_webhookUrl = jsonValue.GetString("webhookUrl");

    m_webhookUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchName"))
  {
    m_branchName = jsonValue.GetString("branchName");

    m_branchNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetDouble("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Webhook::Jsonize() const
{
  JsonValue payload;

  if(m_webhookArnHasBeenSet)
  {
   payload.WithString("webhookArn", m_webhookArn);

  }

  if(m_webhookIdHasBeenSet)
  {
   payload.WithString("webhookId", m_webhookId);

  }

  if(m_webhookUrlHasBeenSet)
  {
   payload.WithString("webhookUrl", m_webhookUrl);

  }

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
