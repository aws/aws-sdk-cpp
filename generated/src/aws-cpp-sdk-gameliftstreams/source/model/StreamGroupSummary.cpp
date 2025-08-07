/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/StreamGroupSummary.h>
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

StreamGroupSummary::StreamGroupSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

StreamGroupSummary& StreamGroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultApplication"))
  {
    m_defaultApplication = jsonValue.GetObject("DefaultApplication");
    m_defaultApplicationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamClass"))
  {
    m_streamClass = StreamClassMapper::GetStreamClassForName(jsonValue.GetString("StreamClass"));
    m_streamClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamGroupStatusMapper::GetStreamGroupStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_defaultApplicationHasBeenSet)
  {
   payload.WithObject("DefaultApplication", m_defaultApplication.Jsonize());

  }

  if(m_streamClassHasBeenSet)
  {
   payload.WithString("StreamClass", StreamClassMapper::GetNameForStreamClass(m_streamClass));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StreamGroupStatusMapper::GetNameForStreamGroupStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
