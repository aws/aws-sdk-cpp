/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/TrustedAdvisorResourcesSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

TrustedAdvisorResourcesSummary::TrustedAdvisorResourcesSummary() : 
    m_resourcesProcessed(0),
    m_resourcesProcessedHasBeenSet(false),
    m_resourcesFlagged(0),
    m_resourcesFlaggedHasBeenSet(false),
    m_resourcesIgnored(0),
    m_resourcesIgnoredHasBeenSet(false),
    m_resourcesSuppressed(0),
    m_resourcesSuppressedHasBeenSet(false)
{
}

TrustedAdvisorResourcesSummary::TrustedAdvisorResourcesSummary(JsonView jsonValue) : 
    m_resourcesProcessed(0),
    m_resourcesProcessedHasBeenSet(false),
    m_resourcesFlagged(0),
    m_resourcesFlaggedHasBeenSet(false),
    m_resourcesIgnored(0),
    m_resourcesIgnoredHasBeenSet(false),
    m_resourcesSuppressed(0),
    m_resourcesSuppressedHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorResourcesSummary& TrustedAdvisorResourcesSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourcesProcessed"))
  {
    m_resourcesProcessed = jsonValue.GetInt64("resourcesProcessed");

    m_resourcesProcessedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesFlagged"))
  {
    m_resourcesFlagged = jsonValue.GetInt64("resourcesFlagged");

    m_resourcesFlaggedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesIgnored"))
  {
    m_resourcesIgnored = jsonValue.GetInt64("resourcesIgnored");

    m_resourcesIgnoredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesSuppressed"))
  {
    m_resourcesSuppressed = jsonValue.GetInt64("resourcesSuppressed");

    m_resourcesSuppressedHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedAdvisorResourcesSummary::Jsonize() const
{
  JsonValue payload;

  if(m_resourcesProcessedHasBeenSet)
  {
   payload.WithInt64("resourcesProcessed", m_resourcesProcessed);

  }

  if(m_resourcesFlaggedHasBeenSet)
  {
   payload.WithInt64("resourcesFlagged", m_resourcesFlagged);

  }

  if(m_resourcesIgnoredHasBeenSet)
  {
   payload.WithInt64("resourcesIgnored", m_resourcesIgnored);

  }

  if(m_resourcesSuppressedHasBeenSet)
  {
   payload.WithInt64("resourcesSuppressed", m_resourcesSuppressed);

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
