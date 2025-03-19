/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobEntity.h>
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

JobEntity::JobEntity(JsonView jsonValue)
{
  *this = jsonValue;
}

JobEntity& JobEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobDetails"))
  {
    m_jobDetails = jsonValue.GetObject("jobDetails");
    m_jobDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobAttachmentDetails"))
  {
    m_jobAttachmentDetails = jsonValue.GetObject("jobAttachmentDetails");
    m_jobAttachmentDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepDetails"))
  {
    m_stepDetails = jsonValue.GetObject("stepDetails");
    m_stepDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentDetails"))
  {
    m_environmentDetails = jsonValue.GetObject("environmentDetails");
    m_environmentDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue JobEntity::Jsonize() const
{
  JsonValue payload;

  if(m_jobDetailsHasBeenSet)
  {
   payload.WithObject("jobDetails", m_jobDetails.Jsonize());

  }

  if(m_jobAttachmentDetailsHasBeenSet)
  {
   payload.WithObject("jobAttachmentDetails", m_jobAttachmentDetails.Jsonize());

  }

  if(m_stepDetailsHasBeenSet)
  {
   payload.WithObject("stepDetails", m_stepDetails.Jsonize());

  }

  if(m_environmentDetailsHasBeenSet)
  {
   payload.WithObject("environmentDetails", m_environmentDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
