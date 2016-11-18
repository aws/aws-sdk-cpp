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
#include <aws/iot/model/SnsAction.h>
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

SnsAction::SnsAction() : 
    m_targetArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_messageFormat(MessageFormat::NOT_SET),
    m_messageFormatHasBeenSet(false)
{
}

SnsAction::SnsAction(const JsonValue& jsonValue) : 
    m_targetArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_messageFormat(MessageFormat::NOT_SET),
    m_messageFormatHasBeenSet(false)
{
  *this = jsonValue;
}

SnsAction& SnsAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");

    m_targetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("messageFormat"))
  {
    m_messageFormat = MessageFormatMapper::GetMessageFormatForName(jsonValue.GetString("messageFormat"));

    m_messageFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue SnsAction::Jsonize() const
{
  JsonValue payload;

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("targetArn", m_targetArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_messageFormatHasBeenSet)
  {
   payload.WithString("messageFormat", MessageFormatMapper::GetNameForMessageFormat(m_messageFormat));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws