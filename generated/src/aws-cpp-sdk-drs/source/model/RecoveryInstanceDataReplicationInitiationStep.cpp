/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstanceDataReplicationInitiationStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

RecoveryInstanceDataReplicationInitiationStep::RecoveryInstanceDataReplicationInitiationStep() : 
    m_name(RecoveryInstanceDataReplicationInitiationStepName::NOT_SET),
    m_nameHasBeenSet(false),
    m_status(RecoveryInstanceDataReplicationInitiationStepStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

RecoveryInstanceDataReplicationInitiationStep::RecoveryInstanceDataReplicationInitiationStep(JsonView jsonValue) : 
    m_name(RecoveryInstanceDataReplicationInitiationStepName::NOT_SET),
    m_nameHasBeenSet(false),
    m_status(RecoveryInstanceDataReplicationInitiationStepStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryInstanceDataReplicationInitiationStep& RecoveryInstanceDataReplicationInitiationStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = RecoveryInstanceDataReplicationInitiationStepNameMapper::GetRecoveryInstanceDataReplicationInitiationStepNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RecoveryInstanceDataReplicationInitiationStepStatusMapper::GetRecoveryInstanceDataReplicationInitiationStepStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryInstanceDataReplicationInitiationStep::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", RecoveryInstanceDataReplicationInitiationStepNameMapper::GetNameForRecoveryInstanceDataReplicationInitiationStepName(m_name));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RecoveryInstanceDataReplicationInitiationStepStatusMapper::GetNameForRecoveryInstanceDataReplicationInitiationStepStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
