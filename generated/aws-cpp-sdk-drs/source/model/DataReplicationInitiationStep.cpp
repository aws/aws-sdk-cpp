/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DataReplicationInitiationStep.h>
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

DataReplicationInitiationStep::DataReplicationInitiationStep() : 
    m_name(DataReplicationInitiationStepName::NOT_SET),
    m_nameHasBeenSet(false),
    m_status(DataReplicationInitiationStepStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DataReplicationInitiationStep::DataReplicationInitiationStep(JsonView jsonValue) : 
    m_name(DataReplicationInitiationStepName::NOT_SET),
    m_nameHasBeenSet(false),
    m_status(DataReplicationInitiationStepStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DataReplicationInitiationStep& DataReplicationInitiationStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = DataReplicationInitiationStepNameMapper::GetDataReplicationInitiationStepNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataReplicationInitiationStepStatusMapper::GetDataReplicationInitiationStepStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DataReplicationInitiationStep::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", DataReplicationInitiationStepNameMapper::GetNameForDataReplicationInitiationStepName(m_name));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataReplicationInitiationStepStatusMapper::GetNameForDataReplicationInitiationStepStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
