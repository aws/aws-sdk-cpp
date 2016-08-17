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
#include <aws/iot/model/KinesisAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

KinesisAction::KinesisAction() : 
    m_roleArnHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_partitionKeyHasBeenSet(false)
{
}

KinesisAction::KinesisAction(const JsonValue& jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_partitionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisAction& KinesisAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamName"))
  {
    m_streamName = jsonValue.GetString("streamName");

    m_streamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partitionKey"))
  {
    m_partitionKey = jsonValue.GetString("partitionKey");

    m_partitionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("streamName", m_streamName);

  }

  if(m_partitionKeyHasBeenSet)
  {
   payload.WithString("partitionKey", m_partitionKey);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws