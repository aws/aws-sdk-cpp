/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/JobStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

JobStats::JobStats() : 
    m_numberOfProfilesReviewed(0),
    m_numberOfProfilesReviewedHasBeenSet(false),
    m_numberOfMatchesFound(0),
    m_numberOfMatchesFoundHasBeenSet(false),
    m_numberOfMergesDone(0),
    m_numberOfMergesDoneHasBeenSet(false)
{
}

JobStats::JobStats(JsonView jsonValue) : 
    m_numberOfProfilesReviewed(0),
    m_numberOfProfilesReviewedHasBeenSet(false),
    m_numberOfMatchesFound(0),
    m_numberOfMatchesFoundHasBeenSet(false),
    m_numberOfMergesDone(0),
    m_numberOfMergesDoneHasBeenSet(false)
{
  *this = jsonValue;
}

JobStats& JobStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfProfilesReviewed"))
  {
    m_numberOfProfilesReviewed = jsonValue.GetInt64("NumberOfProfilesReviewed");

    m_numberOfProfilesReviewedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfMatchesFound"))
  {
    m_numberOfMatchesFound = jsonValue.GetInt64("NumberOfMatchesFound");

    m_numberOfMatchesFoundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfMergesDone"))
  {
    m_numberOfMergesDone = jsonValue.GetInt64("NumberOfMergesDone");

    m_numberOfMergesDoneHasBeenSet = true;
  }

  return *this;
}

JsonValue JobStats::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfProfilesReviewedHasBeenSet)
  {
   payload.WithInt64("NumberOfProfilesReviewed", m_numberOfProfilesReviewed);

  }

  if(m_numberOfMatchesFoundHasBeenSet)
  {
   payload.WithInt64("NumberOfMatchesFound", m_numberOfMatchesFound);

  }

  if(m_numberOfMergesDoneHasBeenSet)
  {
   payload.WithInt64("NumberOfMergesDone", m_numberOfMergesDone);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
