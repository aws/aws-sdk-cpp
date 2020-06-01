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

#include <aws/fsx/model/AdministrativeAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

AdministrativeAction::AdministrativeAction() : 
    m_administrativeActionType(AdministrativeActionType::NOT_SET),
    m_administrativeActionTypeHasBeenSet(false),
    m_progressPercent(0),
    m_progressPercentHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetFileSystemValuesHasBeenSet(false),
    m_failureDetailsHasBeenSet(false)
{
}

AdministrativeAction::AdministrativeAction(JsonView jsonValue) : 
    m_administrativeActionType(AdministrativeActionType::NOT_SET),
    m_administrativeActionTypeHasBeenSet(false),
    m_progressPercent(0),
    m_progressPercentHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetFileSystemValuesHasBeenSet(false),
    m_failureDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

AdministrativeAction& AdministrativeAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdministrativeActionType"))
  {
    m_administrativeActionType = AdministrativeActionTypeMapper::GetAdministrativeActionTypeForName(jsonValue.GetString("AdministrativeActionType"));

    m_administrativeActionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgressPercent"))
  {
    m_progressPercent = jsonValue.GetInteger("ProgressPercent");

    m_progressPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestTime"))
  {
    m_requestTime = jsonValue.GetDouble("RequestTime");

    m_requestTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetFileSystemValues"))
  {
    m_targetFileSystemValues = jsonValue.GetObject("TargetFileSystemValues");

    m_targetFileSystemValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

    m_failureDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue AdministrativeAction::Jsonize() const
{
  JsonValue payload;

  if(m_administrativeActionTypeHasBeenSet)
  {
   payload.WithString("AdministrativeActionType", AdministrativeActionTypeMapper::GetNameForAdministrativeActionType(m_administrativeActionType));
  }

  if(m_progressPercentHasBeenSet)
  {
   payload.WithInteger("ProgressPercent", m_progressPercent);

  }

  if(m_requestTimeHasBeenSet)
  {
   payload.WithDouble("RequestTime", m_requestTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_targetFileSystemValuesHasBeenSet)
  {
   payload.WithObject("TargetFileSystemValues", m_targetFileSystemValues.Jsonize());

  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
