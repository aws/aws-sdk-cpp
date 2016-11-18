/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

TrustedAdvisorResourcesSummary::TrustedAdvisorResourcesSummary(const JsonValue& jsonValue) : 
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

TrustedAdvisorResourcesSummary& TrustedAdvisorResourcesSummary::operator =(const JsonValue& jsonValue)
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