/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobAttachmentDetailsEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

JobAttachmentDetailsEntity::JobAttachmentDetailsEntity(JsonView jsonValue)
{
  *this = jsonValue;
}

JobAttachmentDetailsEntity& JobAttachmentDetailsEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attachments"))
  {
    m_attachments = jsonValue.GetObject("attachments");
    m_attachmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue JobAttachmentDetailsEntity::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_attachmentsHasBeenSet)
  {
   payload.WithObject("attachments", m_attachments.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
