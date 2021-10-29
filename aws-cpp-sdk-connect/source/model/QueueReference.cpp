/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QueueReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

QueueReference::QueueReference() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_queueType(QueueType::NOT_SET),
    m_queueTypeHasBeenSet(false)
{
}

QueueReference::QueueReference(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_queueType(QueueType::NOT_SET),
    m_queueTypeHasBeenSet(false)
{
  *this = jsonValue;
}

QueueReference& QueueReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueType"))
  {
    m_queueType = QueueTypeMapper::GetQueueTypeForName(jsonValue.GetString("QueueType"));

    m_queueTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue QueueReference::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_queueTypeHasBeenSet)
  {
   payload.WithString("QueueType", QueueTypeMapper::GetNameForQueueType(m_queueType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
