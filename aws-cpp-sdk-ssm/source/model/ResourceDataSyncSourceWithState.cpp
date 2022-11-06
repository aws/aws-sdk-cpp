/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourceDataSyncSourceWithState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceDataSyncSourceWithState::ResourceDataSyncSourceWithState() : 
    m_sourceTypeHasBeenSet(false),
    m_awsOrganizationsSourceHasBeenSet(false),
    m_sourceRegionsHasBeenSet(false),
    m_includeFutureRegions(false),
    m_includeFutureRegionsHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_enableAllOpsDataSources(false),
    m_enableAllOpsDataSourcesHasBeenSet(false)
{
}

ResourceDataSyncSourceWithState::ResourceDataSyncSourceWithState(JsonView jsonValue) : 
    m_sourceTypeHasBeenSet(false),
    m_awsOrganizationsSourceHasBeenSet(false),
    m_sourceRegionsHasBeenSet(false),
    m_includeFutureRegions(false),
    m_includeFutureRegionsHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_enableAllOpsDataSources(false),
    m_enableAllOpsDataSourcesHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncSourceWithState& ResourceDataSyncSourceWithState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsOrganizationsSource"))
  {
    m_awsOrganizationsSource = jsonValue.GetObject("AwsOrganizationsSource");

    m_awsOrganizationsSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceRegions"))
  {
    Aws::Utils::Array<JsonView> sourceRegionsJsonList = jsonValue.GetArray("SourceRegions");
    for(unsigned sourceRegionsIndex = 0; sourceRegionsIndex < sourceRegionsJsonList.GetLength(); ++sourceRegionsIndex)
    {
      m_sourceRegions.push_back(sourceRegionsJsonList[sourceRegionsIndex].AsString());
    }
    m_sourceRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeFutureRegions"))
  {
    m_includeFutureRegions = jsonValue.GetBool("IncludeFutureRegions");

    m_includeFutureRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableAllOpsDataSources"))
  {
    m_enableAllOpsDataSources = jsonValue.GetBool("EnableAllOpsDataSources");

    m_enableAllOpsDataSourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncSourceWithState::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_awsOrganizationsSourceHasBeenSet)
  {
   payload.WithObject("AwsOrganizationsSource", m_awsOrganizationsSource.Jsonize());

  }

  if(m_sourceRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceRegionsJsonList(m_sourceRegions.size());
   for(unsigned sourceRegionsIndex = 0; sourceRegionsIndex < sourceRegionsJsonList.GetLength(); ++sourceRegionsIndex)
   {
     sourceRegionsJsonList[sourceRegionsIndex].AsString(m_sourceRegions[sourceRegionsIndex]);
   }
   payload.WithArray("SourceRegions", std::move(sourceRegionsJsonList));

  }

  if(m_includeFutureRegionsHasBeenSet)
  {
   payload.WithBool("IncludeFutureRegions", m_includeFutureRegions);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_enableAllOpsDataSourcesHasBeenSet)
  {
   payload.WithBool("EnableAllOpsDataSources", m_enableAllOpsDataSources);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
