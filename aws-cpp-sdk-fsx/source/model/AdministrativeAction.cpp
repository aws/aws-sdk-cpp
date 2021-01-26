/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AdministrativeAction.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/FileSystem.h>

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

const FileSystem& AdministrativeAction::GetTargetFileSystemValues() const{ return *m_targetFileSystemValues; }
bool AdministrativeAction::TargetFileSystemValuesHasBeenSet() const { return m_targetFileSystemValuesHasBeenSet; }
void AdministrativeAction::SetTargetFileSystemValues(const FileSystem& value) { m_targetFileSystemValuesHasBeenSet = true; m_targetFileSystemValues = Aws::MakeShared<FileSystem>("AdministrativeAction", value); }
void AdministrativeAction::SetTargetFileSystemValues(FileSystem&& value) { m_targetFileSystemValuesHasBeenSet = true; m_targetFileSystemValues = Aws::MakeShared<FileSystem>("AdministrativeAction", std::move(value)); }
AdministrativeAction& AdministrativeAction::WithTargetFileSystemValues(const FileSystem& value) { SetTargetFileSystemValues(value); return *this;}
AdministrativeAction& AdministrativeAction::WithTargetFileSystemValues(FileSystem&& value) { SetTargetFileSystemValues(std::move(value)); return *this;}

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
    m_targetFileSystemValues = Aws::MakeShared<FileSystem>("AdministrativeAction", jsonValue.GetObject("TargetFileSystemValues"));

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
   payload.WithObject("TargetFileSystemValues", m_targetFileSystemValues->Jsonize());

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
