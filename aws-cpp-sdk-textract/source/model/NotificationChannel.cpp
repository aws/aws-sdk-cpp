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

#include <aws/textract/model/NotificationChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

NotificationChannel::NotificationChannel() : 
    m_sNSTopicArnHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

NotificationChannel::NotificationChannel(JsonView jsonValue) : 
    m_sNSTopicArnHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationChannel& NotificationChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SNSTopicArn"))
  {
    m_sNSTopicArn = jsonValue.GetString("SNSTopicArn");

    m_sNSTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationChannel::Jsonize() const
{
  JsonValue payload;

  if(m_sNSTopicArnHasBeenSet)
  {
   payload.WithString("SNSTopicArn", m_sNSTopicArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
