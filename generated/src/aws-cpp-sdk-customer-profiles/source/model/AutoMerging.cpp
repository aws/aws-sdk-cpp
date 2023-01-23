/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/AutoMerging.h>
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

AutoMerging::AutoMerging() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_consolidationHasBeenSet(false),
    m_conflictResolutionHasBeenSet(false),
    m_minAllowedConfidenceScoreForMerging(0.0),
    m_minAllowedConfidenceScoreForMergingHasBeenSet(false)
{
}

AutoMerging::AutoMerging(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_consolidationHasBeenSet(false),
    m_conflictResolutionHasBeenSet(false),
    m_minAllowedConfidenceScoreForMerging(0.0),
    m_minAllowedConfidenceScoreForMergingHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMerging& AutoMerging::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Consolidation"))
  {
    m_consolidation = jsonValue.GetObject("Consolidation");

    m_consolidationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConflictResolution"))
  {
    m_conflictResolution = jsonValue.GetObject("ConflictResolution");

    m_conflictResolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinAllowedConfidenceScoreForMerging"))
  {
    m_minAllowedConfidenceScoreForMerging = jsonValue.GetDouble("MinAllowedConfidenceScoreForMerging");

    m_minAllowedConfidenceScoreForMergingHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMerging::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_consolidationHasBeenSet)
  {
   payload.WithObject("Consolidation", m_consolidation.Jsonize());

  }

  if(m_conflictResolutionHasBeenSet)
  {
   payload.WithObject("ConflictResolution", m_conflictResolution.Jsonize());

  }

  if(m_minAllowedConfidenceScoreForMergingHasBeenSet)
  {
   payload.WithDouble("MinAllowedConfidenceScoreForMerging", m_minAllowedConfidenceScoreForMerging);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
