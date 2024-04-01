/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SyncInputJobAttachmentsSessionActionDefinition.h>
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

SyncInputJobAttachmentsSessionActionDefinition::SyncInputJobAttachmentsSessionActionDefinition() : 
    m_stepIdHasBeenSet(false)
{
}

SyncInputJobAttachmentsSessionActionDefinition::SyncInputJobAttachmentsSessionActionDefinition(JsonView jsonValue) : 
    m_stepIdHasBeenSet(false)
{
  *this = jsonValue;
}

SyncInputJobAttachmentsSessionActionDefinition& SyncInputJobAttachmentsSessionActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");

    m_stepIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SyncInputJobAttachmentsSessionActionDefinition::Jsonize() const
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
