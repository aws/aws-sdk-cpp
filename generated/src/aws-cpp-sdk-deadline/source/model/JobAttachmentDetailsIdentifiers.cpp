/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobAttachmentDetailsIdentifiers.h>
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

JobAttachmentDetailsIdentifiers::JobAttachmentDetailsIdentifiers() : 
    m_jobIdHasBeenSet(false)
{
}

JobAttachmentDetailsIdentifiers::JobAttachmentDetailsIdentifiers(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false)
{
  *this = jsonValue;
}

JobAttachmentDetailsIdentifiers& JobAttachmentDetailsIdentifiers::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  return *this;
}

JsonValue JobAttachmentDetailsIdentifiers::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
