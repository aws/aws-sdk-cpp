/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ExperimentState::ExperimentState() : 
    m_status(ExperimentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

ExperimentState::ExperimentState(JsonView jsonValue) : 
    m_status(ExperimentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentState& ExperimentState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ExperimentStatusMapper::GetExperimentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentState::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ExperimentStatusMapper::GetNameForExperimentStatus(m_status));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
