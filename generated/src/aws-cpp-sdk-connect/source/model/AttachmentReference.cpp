/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AttachmentReference.h>
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

AttachmentReference::AttachmentReference() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_status(ReferenceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AttachmentReference::AttachmentReference(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_status(ReferenceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AttachmentReference& AttachmentReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ReferenceStatusMapper::GetReferenceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AttachmentReference::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ReferenceStatusMapper::GetNameForReferenceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
