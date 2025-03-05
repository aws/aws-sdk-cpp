/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/ExportFilesMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

ExportFilesMetadata::ExportFilesMetadata() : 
    m_outputUriHasBeenSet(false),
    m_status(ExportFilesStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

ExportFilesMetadata::ExportFilesMetadata(JsonView jsonValue)
  : ExportFilesMetadata()
{
  *this = jsonValue;
}

ExportFilesMetadata& ExportFilesMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputUri"))
  {
    m_outputUri = jsonValue.GetString("OutputUri");

    m_outputUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ExportFilesStatusMapper::GetExportFilesStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportFilesMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_outputUriHasBeenSet)
  {
   payload.WithString("OutputUri", m_outputUri);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ExportFilesStatusMapper::GetNameForExportFilesStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
