/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/WorkloadData.h>
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

WorkloadData::WorkloadData() : 
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_documentationUrlHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_status(WorkloadStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_workloadNameHasBeenSet(false)
{
}

WorkloadData::WorkloadData(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_documentationUrlHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_status(WorkloadStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_workloadNameHasBeenSet(false)
{
  *this = jsonValue;
}

WorkloadData& WorkloadData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentationUrl"))
  {
    m_documentationUrl = jsonValue.GetString("documentationUrl");

    m_documentationUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iconUrl"))
  {
    m_iconUrl = jsonValue.GetString("iconUrl");

    m_iconUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkloadStatusMapper::GetWorkloadStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workloadName"))
  {
    m_workloadName = jsonValue.GetString("workloadName");

    m_workloadNameHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkloadData::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_documentationUrlHasBeenSet)
  {
   payload.WithString("documentationUrl", m_documentationUrl);

  }

  if(m_iconUrlHasBeenSet)
  {
   payload.WithString("iconUrl", m_iconUrl);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkloadStatusMapper::GetNameForWorkloadStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

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
