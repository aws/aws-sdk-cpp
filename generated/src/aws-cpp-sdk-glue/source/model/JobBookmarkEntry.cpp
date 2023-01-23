/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JobBookmarkEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

JobBookmarkEntry::JobBookmarkEntry() : 
    m_jobNameHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_run(0),
    m_runHasBeenSet(false),
    m_attempt(0),
    m_attemptHasBeenSet(false),
    m_previousRunIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_jobBookmarkHasBeenSet(false)
{
}

JobBookmarkEntry::JobBookmarkEntry(JsonView jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_run(0),
    m_runHasBeenSet(false),
    m_attempt(0),
    m_attemptHasBeenSet(false),
    m_previousRunIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_jobBookmarkHasBeenSet(false)
{
  *this = jsonValue;
}

JobBookmarkEntry& JobBookmarkEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Run"))
  {
    m_run = jsonValue.GetInteger("Run");

    m_runHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attempt"))
  {
    m_attempt = jsonValue.GetInteger("Attempt");

    m_attemptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreviousRunId"))
  {
    m_previousRunId = jsonValue.GetString("PreviousRunId");

    m_previousRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");

    m_runIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobBookmark"))
  {
    m_jobBookmark = jsonValue.GetString("JobBookmark");

    m_jobBookmarkHasBeenSet = true;
  }

  return *this;
}

JsonValue JobBookmarkEntry::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  if(m_runHasBeenSet)
  {
   payload.WithInteger("Run", m_run);

  }

  if(m_attemptHasBeenSet)
  {
   payload.WithInteger("Attempt", m_attempt);

  }

  if(m_previousRunIdHasBeenSet)
  {
   payload.WithString("PreviousRunId", m_previousRunId);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  if(m_jobBookmarkHasBeenSet)
  {
   payload.WithString("JobBookmark", m_jobBookmark);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
