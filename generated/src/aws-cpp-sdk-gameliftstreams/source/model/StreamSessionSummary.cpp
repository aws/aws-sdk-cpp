/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/StreamSessionSummary.h>
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

StreamSessionSummary::StreamSessionSummary() : 
    m_applicationArnHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_exportFilesMetadataHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_status(StreamSessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

StreamSessionSummary::StreamSessionSummary(JsonView jsonValue)
  : StreamSessionSummary()
{
  *this = jsonValue;
}

StreamSessionSummary& StreamSessionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");

    m_applicationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportFilesMetadata"))
  {
    m_exportFilesMetadata = jsonValue.GetObject("ExportFilesMetadata");

    m_exportFilesMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamSessionStatusMapper::GetStreamSessionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamSessionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_exportFilesMetadataHasBeenSet)
  {
   payload.WithObject("ExportFilesMetadata", m_exportFilesMetadata.Jsonize());

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StreamSessionStatusMapper::GetNameForStreamSessionStatus(m_status));
  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
