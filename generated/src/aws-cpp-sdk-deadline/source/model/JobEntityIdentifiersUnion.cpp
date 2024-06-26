﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobEntityIdentifiersUnion.h>
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

JobEntityIdentifiersUnion::JobEntityIdentifiersUnion() : 
    m_environmentDetailsHasBeenSet(false),
    m_jobAttachmentDetailsHasBeenSet(false),
    m_jobDetailsHasBeenSet(false),
    m_stepDetailsHasBeenSet(false)
{
}

JobEntityIdentifiersUnion::JobEntityIdentifiersUnion(JsonView jsonValue)
  : JobEntityIdentifiersUnion()
{
  *this = jsonValue;
}

JobEntityIdentifiersUnion& JobEntityIdentifiersUnion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("environmentDetails"))
  {
    m_environmentDetails = jsonValue.GetObject("environmentDetails");

    m_environmentDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobAttachmentDetails"))
  {
    m_jobAttachmentDetails = jsonValue.GetObject("jobAttachmentDetails");

    m_jobAttachmentDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobDetails"))
  {
    m_jobDetails = jsonValue.GetObject("jobDetails");

    m_jobDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepDetails"))
  {
    m_stepDetails = jsonValue.GetObject("stepDetails");

    m_stepDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue JobEntityIdentifiersUnion::Jsonize() const
{
  JsonValue payload;

  if(m_environmentDetailsHasBeenSet)
  {
   payload.WithObject("environmentDetails", m_environmentDetails.Jsonize());

  }

  if(m_jobAttachmentDetailsHasBeenSet)
  {
   payload.WithObject("jobAttachmentDetails", m_jobAttachmentDetails.Jsonize());

  }

  if(m_jobDetailsHasBeenSet)
  {
   payload.WithObject("jobDetails", m_jobDetails.Jsonize());

  }

  if(m_stepDetailsHasBeenSet)
  {
   payload.WithObject("stepDetails", m_stepDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
