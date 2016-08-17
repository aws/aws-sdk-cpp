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
#include <aws/iot/model/SqsAction.h>
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

SqsAction::SqsAction() : 
    m_roleArnHasBeenSet(false),
    m_queueUrlHasBeenSet(false),
    m_useBase64(false),
    m_useBase64HasBeenSet(false)
{
}

SqsAction::SqsAction(const JsonValue& jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_queueUrlHasBeenSet(false),
    m_useBase64(false),
    m_useBase64HasBeenSet(false)
{
  *this = jsonValue;
}

SqsAction& SqsAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queueUrl"))
  {
    m_queueUrl = jsonValue.GetString("queueUrl");

    m_queueUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useBase64"))
  {
    m_useBase64 = jsonValue.GetBool("useBase64");

    m_useBase64HasBeenSet = true;
  }

  return *this;
}

JsonValue SqsAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_queueUrlHasBeenSet)
  {
   payload.WithString("queueUrl", m_queueUrl);

  }

  if(m_useBase64HasBeenSet)
  {
   payload.WithBool("useBase64", m_useBase64);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws