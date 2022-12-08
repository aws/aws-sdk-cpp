/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

ConfigurationSummary::ConfigurationSummary() : 
    m_ipAddressBasedRemoteInfoListHasBeenSet(false),
    m_pipelineInfoListHasBeenSet(false),
    m_remoteSourceCodeAnalysisServerInfoHasBeenSet(false),
    m_vcenterBasedRemoteInfoListHasBeenSet(false),
    m_versionControlInfoListHasBeenSet(false)
{
}

ConfigurationSummary::ConfigurationSummary(JsonView jsonValue) : 
    m_ipAddressBasedRemoteInfoListHasBeenSet(false),
    m_pipelineInfoListHasBeenSet(false),
    m_remoteSourceCodeAnalysisServerInfoHasBeenSet(false),
    m_vcenterBasedRemoteInfoListHasBeenSet(false),
    m_versionControlInfoListHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationSummary& ConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipAddressBasedRemoteInfoList"))
  {
    Aws::Utils::Array<JsonView> ipAddressBasedRemoteInfoListJsonList = jsonValue.GetArray("ipAddressBasedRemoteInfoList");
    for(unsigned ipAddressBasedRemoteInfoListIndex = 0; ipAddressBasedRemoteInfoListIndex < ipAddressBasedRemoteInfoListJsonList.GetLength(); ++ipAddressBasedRemoteInfoListIndex)
    {
      m_ipAddressBasedRemoteInfoList.push_back(ipAddressBasedRemoteInfoListJsonList[ipAddressBasedRemoteInfoListIndex].AsObject());
    }
    m_ipAddressBasedRemoteInfoListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineInfoList"))
  {
    Aws::Utils::Array<JsonView> pipelineInfoListJsonList = jsonValue.GetArray("pipelineInfoList");
    for(unsigned pipelineInfoListIndex = 0; pipelineInfoListIndex < pipelineInfoListJsonList.GetLength(); ++pipelineInfoListIndex)
    {
      m_pipelineInfoList.push_back(pipelineInfoListJsonList[pipelineInfoListIndex].AsObject());
    }
    m_pipelineInfoListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteSourceCodeAnalysisServerInfo"))
  {
    m_remoteSourceCodeAnalysisServerInfo = jsonValue.GetObject("remoteSourceCodeAnalysisServerInfo");

    m_remoteSourceCodeAnalysisServerInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vcenterBasedRemoteInfoList"))
  {
    Aws::Utils::Array<JsonView> vcenterBasedRemoteInfoListJsonList = jsonValue.GetArray("vcenterBasedRemoteInfoList");
    for(unsigned vcenterBasedRemoteInfoListIndex = 0; vcenterBasedRemoteInfoListIndex < vcenterBasedRemoteInfoListJsonList.GetLength(); ++vcenterBasedRemoteInfoListIndex)
    {
      m_vcenterBasedRemoteInfoList.push_back(vcenterBasedRemoteInfoListJsonList[vcenterBasedRemoteInfoListIndex].AsObject());
    }
    m_vcenterBasedRemoteInfoListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionControlInfoList"))
  {
    Aws::Utils::Array<JsonView> versionControlInfoListJsonList = jsonValue.GetArray("versionControlInfoList");
    for(unsigned versionControlInfoListIndex = 0; versionControlInfoListIndex < versionControlInfoListJsonList.GetLength(); ++versionControlInfoListIndex)
    {
      m_versionControlInfoList.push_back(versionControlInfoListJsonList[versionControlInfoListIndex].AsObject());
    }
    m_versionControlInfoListHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressBasedRemoteInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipAddressBasedRemoteInfoListJsonList(m_ipAddressBasedRemoteInfoList.size());
   for(unsigned ipAddressBasedRemoteInfoListIndex = 0; ipAddressBasedRemoteInfoListIndex < ipAddressBasedRemoteInfoListJsonList.GetLength(); ++ipAddressBasedRemoteInfoListIndex)
   {
     ipAddressBasedRemoteInfoListJsonList[ipAddressBasedRemoteInfoListIndex].AsObject(m_ipAddressBasedRemoteInfoList[ipAddressBasedRemoteInfoListIndex].Jsonize());
   }
   payload.WithArray("ipAddressBasedRemoteInfoList", std::move(ipAddressBasedRemoteInfoListJsonList));

  }

  if(m_pipelineInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelineInfoListJsonList(m_pipelineInfoList.size());
   for(unsigned pipelineInfoListIndex = 0; pipelineInfoListIndex < pipelineInfoListJsonList.GetLength(); ++pipelineInfoListIndex)
   {
     pipelineInfoListJsonList[pipelineInfoListIndex].AsObject(m_pipelineInfoList[pipelineInfoListIndex].Jsonize());
   }
   payload.WithArray("pipelineInfoList", std::move(pipelineInfoListJsonList));

  }

  if(m_remoteSourceCodeAnalysisServerInfoHasBeenSet)
  {
   payload.WithObject("remoteSourceCodeAnalysisServerInfo", m_remoteSourceCodeAnalysisServerInfo.Jsonize());

  }

  if(m_vcenterBasedRemoteInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vcenterBasedRemoteInfoListJsonList(m_vcenterBasedRemoteInfoList.size());
   for(unsigned vcenterBasedRemoteInfoListIndex = 0; vcenterBasedRemoteInfoListIndex < vcenterBasedRemoteInfoListJsonList.GetLength(); ++vcenterBasedRemoteInfoListIndex)
   {
     vcenterBasedRemoteInfoListJsonList[vcenterBasedRemoteInfoListIndex].AsObject(m_vcenterBasedRemoteInfoList[vcenterBasedRemoteInfoListIndex].Jsonize());
   }
   payload.WithArray("vcenterBasedRemoteInfoList", std::move(vcenterBasedRemoteInfoListJsonList));

  }

  if(m_versionControlInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> versionControlInfoListJsonList(m_versionControlInfoList.size());
   for(unsigned versionControlInfoListIndex = 0; versionControlInfoListIndex < versionControlInfoListJsonList.GetLength(); ++versionControlInfoListIndex)
   {
     versionControlInfoListJsonList[versionControlInfoListIndex].AsObject(m_versionControlInfoList[versionControlInfoListIndex].Jsonize());
   }
   payload.WithArray("versionControlInfoList", std::move(versionControlInfoListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
