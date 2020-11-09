/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/PackageVersionHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

PackageVersionHistory::PackageVersionHistory() : 
    m_packageVersionHasBeenSet(false),
    m_commitMessageHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

PackageVersionHistory::PackageVersionHistory(JsonView jsonValue) : 
    m_packageVersionHasBeenSet(false),
    m_commitMessageHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

PackageVersionHistory& PackageVersionHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");

    m_packageVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommitMessage"))
  {
    m_commitMessage = jsonValue.GetString("CommitMessage");

    m_commitMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageVersionHistory::Jsonize() const
{
  JsonValue payload;

  if(m_packageVersionHasBeenSet)
  {
   payload.WithString("PackageVersion", m_packageVersion);

  }

  if(m_commitMessageHasBeenSet)
  {
   payload.WithString("CommitMessage", m_commitMessage);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
