/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/AttachmentStateChange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

AttachmentStateChange::AttachmentStateChange() : 
    m_attachmentArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AttachmentStateChange::AttachmentStateChange(JsonView jsonValue) : 
    m_attachmentArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AttachmentStateChange& AttachmentStateChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachmentArn"))
  {
    m_attachmentArn = jsonValue.GetString("attachmentArn");

    m_attachmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AttachmentStateChange::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentArnHasBeenSet)
  {
   payload.WithString("attachmentArn", m_attachmentArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
