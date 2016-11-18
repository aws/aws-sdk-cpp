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
#include <aws/iot/model/FirehoseAction.h>
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

FirehoseAction::FirehoseAction() : 
    m_roleArnHasBeenSet(false),
    m_deliveryStreamNameHasBeenSet(false),
    m_separatorHasBeenSet(false)
{
}

FirehoseAction::FirehoseAction(const JsonValue& jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_deliveryStreamNameHasBeenSet(false),
    m_separatorHasBeenSet(false)
{
  *this = jsonValue;
}

FirehoseAction& FirehoseAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deliveryStreamName"))
  {
    m_deliveryStreamName = jsonValue.GetString("deliveryStreamName");

    m_deliveryStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("separator"))
  {
    m_separator = jsonValue.GetString("separator");

    m_separatorHasBeenSet = true;
  }

  return *this;
}

JsonValue FirehoseAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("deliveryStreamName", m_deliveryStreamName);

  }

  if(m_separatorHasBeenSet)
  {
   payload.WithString("separator", m_separator);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws