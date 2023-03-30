/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FeaturedResultsSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

FeaturedResultsSetSummary::FeaturedResultsSetSummary() : 
    m_featuredResultsSetIdHasBeenSet(false),
    m_featuredResultsSetNameHasBeenSet(false),
    m_status(FeaturedResultsSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedTimestamp(0),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_creationTimestamp(0),
    m_creationTimestampHasBeenSet(false)
{
}

FeaturedResultsSetSummary::FeaturedResultsSetSummary(JsonView jsonValue) : 
    m_featuredResultsSetIdHasBeenSet(false),
    m_featuredResultsSetNameHasBeenSet(false),
    m_status(FeaturedResultsSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedTimestamp(0),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_creationTimestamp(0),
    m_creationTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

FeaturedResultsSetSummary& FeaturedResultsSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeaturedResultsSetId"))
  {
    m_featuredResultsSetId = jsonValue.GetString("FeaturedResultsSetId");

    m_featuredResultsSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeaturedResultsSetName"))
  {
    m_featuredResultsSetName = jsonValue.GetString("FeaturedResultsSetName");

    m_featuredResultsSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FeaturedResultsSetStatusMapper::GetFeaturedResultsSetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetInt64("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetInt64("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue FeaturedResultsSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_featuredResultsSetIdHasBeenSet)
  {
   payload.WithString("FeaturedResultsSetId", m_featuredResultsSetId);

  }

  if(m_featuredResultsSetNameHasBeenSet)
  {
   payload.WithString("FeaturedResultsSetName", m_featuredResultsSetName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FeaturedResultsSetStatusMapper::GetNameForFeaturedResultsSetStatus(m_status));
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithInt64("LastUpdatedTimestamp", m_lastUpdatedTimestamp);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithInt64("CreationTimestamp", m_creationTimestamp);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
