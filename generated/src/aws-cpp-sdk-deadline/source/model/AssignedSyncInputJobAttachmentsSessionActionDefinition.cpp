/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AssignedSyncInputJobAttachmentsSessionActionDefinition.h>
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

AssignedSyncInputJobAttachmentsSessionActionDefinition::AssignedSyncInputJobAttachmentsSessionActionDefinition() : 
    m_stepIdHasBeenSet(false)
{
}

AssignedSyncInputJobAttachmentsSessionActionDefinition::AssignedSyncInputJobAttachmentsSessionActionDefinition(JsonView jsonValue) : 
    m_stepIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssignedSyncInputJobAttachmentsSessionActionDefinition& AssignedSyncInputJobAttachmentsSessionActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");

    m_stepIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssignedSyncInputJobAttachmentsSessionActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("stepId", m_stepId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
