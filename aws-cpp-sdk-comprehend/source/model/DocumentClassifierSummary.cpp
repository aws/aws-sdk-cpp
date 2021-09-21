/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentClassifierSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DocumentClassifierSummary::DocumentClassifierSummary() : 
    m_documentClassifierNameHasBeenSet(false),
    m_numberOfVersions(0),
    m_numberOfVersionsHasBeenSet(false),
    m_latestVersionCreatedAtHasBeenSet(false),
    m_latestVersionNameHasBeenSet(false),
    m_latestVersionStatus(ModelStatus::NOT_SET),
    m_latestVersionStatusHasBeenSet(false)
{
}

DocumentClassifierSummary::DocumentClassifierSummary(JsonView jsonValue) : 
    m_documentClassifierNameHasBeenSet(false),
    m_numberOfVersions(0),
    m_numberOfVersionsHasBeenSet(false),
    m_latestVersionCreatedAtHasBeenSet(false),
    m_latestVersionNameHasBeenSet(false),
    m_latestVersionStatus(ModelStatus::NOT_SET),
    m_latestVersionStatusHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentClassifierSummary& DocumentClassifierSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentClassifierName"))
  {
    m_documentClassifierName = jsonValue.GetString("DocumentClassifierName");

    m_documentClassifierNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfVersions"))
  {
    m_numberOfVersions = jsonValue.GetInteger("NumberOfVersions");

    m_numberOfVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestVersionCreatedAt"))
  {
    m_latestVersionCreatedAt = jsonValue.GetDouble("LatestVersionCreatedAt");

    m_latestVersionCreatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestVersionName"))
  {
    m_latestVersionName = jsonValue.GetString("LatestVersionName");

    m_latestVersionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestVersionStatus"))
  {
    m_latestVersionStatus = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("LatestVersionStatus"));

    m_latestVersionStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentClassifierSummary::Jsonize() const
{
  JsonValue payload;

  if(m_documentClassifierNameHasBeenSet)
  {
   payload.WithString("DocumentClassifierName", m_documentClassifierName);

  }

  if(m_numberOfVersionsHasBeenSet)
  {
   payload.WithInteger("NumberOfVersions", m_numberOfVersions);

  }

  if(m_latestVersionCreatedAtHasBeenSet)
  {
   payload.WithDouble("LatestVersionCreatedAt", m_latestVersionCreatedAt.SecondsWithMSPrecision());
  }

  if(m_latestVersionNameHasBeenSet)
  {
   payload.WithString("LatestVersionName", m_latestVersionName);

  }

  if(m_latestVersionStatusHasBeenSet)
  {
   payload.WithString("LatestVersionStatus", ModelStatusMapper::GetNameForModelStatus(m_latestVersionStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
