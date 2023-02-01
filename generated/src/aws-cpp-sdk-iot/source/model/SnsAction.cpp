/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

SnsAction::SnsAction(JsonView jsonValue) : 
    m_targetArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_messageFormat(MessageFormat::NOT_SET),
    m_messageFormatHasBeenSet(false)
{
  *this = jsonValue;
}

SnsAction& SnsAction::operator =(JsonView jsonValue)
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
