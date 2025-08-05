/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeRepositoryAggregationResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CodeRepositoryAggregationResponse::CodeRepositoryAggregationResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeRepositoryAggregationResponse& CodeRepositoryAggregationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectNames"))
  {
    m_projectNames = jsonValue.GetString("projectNames");
    m_projectNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerType"))
  {
    m_providerType = jsonValue.GetString("providerType");
    m_providerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severityCounts"))
  {
    m_severityCounts = jsonValue.GetObject("severityCounts");
    m_severityCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exploitAvailableActiveFindingsCount"))
  {
    m_exploitAvailableActiveFindingsCount = jsonValue.GetInt64("exploitAvailableActiveFindingsCount");
    m_exploitAvailableActiveFindingsCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fixAvailableActiveFindingsCount"))
  {
    m_fixAvailableActiveFindingsCount = jsonValue.GetInt64("fixAvailableActiveFindingsCount");
    m_fixAvailableActiveFindingsCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeRepositoryAggregationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_projectNamesHasBeenSet)
  {
   payload.WithString("projectNames", m_projectNames);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("providerType", m_providerType);

  }

  if(m_severityCountsHasBeenSet)
  {
   payload.WithObject("severityCounts", m_severityCounts.Jsonize());

  }

  if(m_exploitAvailableActiveFindingsCountHasBeenSet)
  {
   payload.WithInt64("exploitAvailableActiveFindingsCount", m_exploitAvailableActiveFindingsCount);

  }

  if(m_fixAvailableActiveFindingsCountHasBeenSet)
  {
   payload.WithInt64("fixAvailableActiveFindingsCount", m_fixAvailableActiveFindingsCount);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
