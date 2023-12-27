/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/WorkloadDataSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{

WorkloadDataSummary::WorkloadDataSummary() : 
    m_displayNameHasBeenSet(false),
    m_workloadNameHasBeenSet(false)
{
}

WorkloadDataSummary::WorkloadDataSummary(JsonView jsonValue) : 
    m_displayNameHasBeenSet(false),
    m_workloadNameHasBeenSet(false)
{
  *this = jsonValue;
}

WorkloadDataSummary& WorkloadDataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workloadName"))
  {
    m_workloadName = jsonValue.GetString("workloadName");

    m_workloadNameHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkloadDataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("workloadName", m_workloadName);

  }

  return payload;
}

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
