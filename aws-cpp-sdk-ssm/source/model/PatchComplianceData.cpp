/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/PatchComplianceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

PatchComplianceData::PatchComplianceData() : 
    m_titleHasBeenSet(false),
    m_kBIdHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_state(PatchComplianceDataState::NOT_SET),
    m_stateHasBeenSet(false),
    m_installedTimeHasBeenSet(false)
{
}

PatchComplianceData::PatchComplianceData(const JsonValue& jsonValue) : 
    m_titleHasBeenSet(false),
    m_kBIdHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_state(PatchComplianceDataState::NOT_SET),
    m_stateHasBeenSet(false),
    m_installedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PatchComplianceData& PatchComplianceData::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KBId"))
  {
    m_kBId = jsonValue.GetString("KBId");

    m_kBIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");

    m_classificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = jsonValue.GetString("Severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = PatchComplianceDataStateMapper::GetPatchComplianceDataStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstalledTime"))
  {
    m_installedTime = jsonValue.GetDouble("InstalledTime");

    m_installedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchComplianceData::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_kBIdHasBeenSet)
  {
   payload.WithString("KBId", m_kBId);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", m_severity);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", PatchComplianceDataStateMapper::GetNameForPatchComplianceDataState(m_state));
  }

  if(m_installedTimeHasBeenSet)
  {
   payload.WithDouble("InstalledTime", m_installedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws