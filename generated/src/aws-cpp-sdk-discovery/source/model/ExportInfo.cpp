/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ExportInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

ExportInfo::ExportInfo() : 
    m_exportIdHasBeenSet(false),
    m_exportStatus(ExportStatus::NOT_SET),
    m_exportStatusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_configurationsDownloadUrlHasBeenSet(false),
    m_exportRequestTimeHasBeenSet(false),
    m_isTruncated(false),
    m_isTruncatedHasBeenSet(false),
    m_requestedStartTimeHasBeenSet(false),
    m_requestedEndTimeHasBeenSet(false)
{
}

ExportInfo::ExportInfo(JsonView jsonValue) : 
    m_exportIdHasBeenSet(false),
    m_exportStatus(ExportStatus::NOT_SET),
    m_exportStatusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_configurationsDownloadUrlHasBeenSet(false),
    m_exportRequestTimeHasBeenSet(false),
    m_isTruncated(false),
    m_isTruncatedHasBeenSet(false),
    m_requestedStartTimeHasBeenSet(false),
    m_requestedEndTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExportInfo& ExportInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exportId"))
  {
    m_exportId = jsonValue.GetString("exportId");

    m_exportIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exportStatus"))
  {
    m_exportStatus = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("exportStatus"));

    m_exportStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationsDownloadUrl"))
  {
    m_configurationsDownloadUrl = jsonValue.GetString("configurationsDownloadUrl");

    m_configurationsDownloadUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exportRequestTime"))
  {
    m_exportRequestTime = jsonValue.GetDouble("exportRequestTime");

    m_exportRequestTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isTruncated"))
  {
    m_isTruncated = jsonValue.GetBool("isTruncated");

    m_isTruncatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestedStartTime"))
  {
    m_requestedStartTime = jsonValue.GetDouble("requestedStartTime");

    m_requestedStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestedEndTime"))
  {
    m_requestedEndTime = jsonValue.GetDouble("requestedEndTime");

    m_requestedEndTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportInfo::Jsonize() const
{
  JsonValue payload;

  if(m_exportIdHasBeenSet)
  {
   payload.WithString("exportId", m_exportId);

  }

  if(m_exportStatusHasBeenSet)
  {
   payload.WithString("exportStatus", ExportStatusMapper::GetNameForExportStatus(m_exportStatus));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_configurationsDownloadUrlHasBeenSet)
  {
   payload.WithString("configurationsDownloadUrl", m_configurationsDownloadUrl);

  }

  if(m_exportRequestTimeHasBeenSet)
  {
   payload.WithDouble("exportRequestTime", m_exportRequestTime.SecondsWithMSPrecision());
  }

  if(m_isTruncatedHasBeenSet)
  {
   payload.WithBool("isTruncated", m_isTruncated);

  }

  if(m_requestedStartTimeHasBeenSet)
  {
   payload.WithDouble("requestedStartTime", m_requestedStartTime.SecondsWithMSPrecision());
  }

  if(m_requestedEndTimeHasBeenSet)
  {
   payload.WithDouble("requestedEndTime", m_requestedEndTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
