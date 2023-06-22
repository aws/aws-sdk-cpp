/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/InvokedBy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

InvokedBy::InvokedBy() : 
    m_standardMessages(StandardMessages::NOT_SET),
    m_standardMessagesHasBeenSet(false),
    m_targetedMessages(TargetedMessages::NOT_SET),
    m_targetedMessagesHasBeenSet(false)
{
}

InvokedBy::InvokedBy(JsonView jsonValue) : 
    m_standardMessages(StandardMessages::NOT_SET),
    m_standardMessagesHasBeenSet(false),
    m_targetedMessages(TargetedMessages::NOT_SET),
    m_targetedMessagesHasBeenSet(false)
{
  *this = jsonValue;
}

InvokedBy& InvokedBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardMessages"))
  {
    m_standardMessages = StandardMessagesMapper::GetStandardMessagesForName(jsonValue.GetString("StandardMessages"));

    m_standardMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetedMessages"))
  {
    m_targetedMessages = TargetedMessagesMapper::GetTargetedMessagesForName(jsonValue.GetString("TargetedMessages"));

    m_targetedMessagesHasBeenSet = true;
  }

  return *this;
}

JsonValue InvokedBy::Jsonize() const
{
  JsonValue payload;

  if(m_standardMessagesHasBeenSet)
  {
   payload.WithString("StandardMessages", StandardMessagesMapper::GetNameForStandardMessages(m_standardMessages));
  }

  if(m_targetedMessagesHasBeenSet)
  {
   payload.WithString("TargetedMessages", TargetedMessagesMapper::GetNameForTargetedMessages(m_targetedMessages));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
