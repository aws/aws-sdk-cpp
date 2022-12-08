/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ApplicationComponentDetail.h>
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

ApplicationComponentDetail::ApplicationComponentDetail() : 
    m_analysisStatus(SrcCodeOrDbAnalysisStatus::NOT_SET),
    m_analysisStatusHasBeenSet(false),
    m_antipatternReportS3ObjectHasBeenSet(false),
    m_antipatternReportStatus(AntipatternReportStatus::NOT_SET),
    m_antipatternReportStatusHasBeenSet(false),
    m_antipatternReportStatusMessageHasBeenSet(false),
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_appUnitErrorHasBeenSet(false),
    m_associatedServerIdHasBeenSet(false),
    m_databaseConfigDetailHasBeenSet(false),
    m_idHasBeenSet(false),
    m_inclusionStatus(InclusionStatus::NOT_SET),
    m_inclusionStatusHasBeenSet(false),
    m_lastAnalyzedTimestampHasBeenSet(false),
    m_listAntipatternSeveritySummaryHasBeenSet(false),
    m_moreServerAssociationExists(false),
    m_moreServerAssociationExistsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_osDriverHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_recommendationSetHasBeenSet(false),
    m_resourceSubType(ResourceSubType::NOT_SET),
    m_resourceSubTypeHasBeenSet(false),
    m_runtimeStatus(RuntimeAnalysisStatus::NOT_SET),
    m_runtimeStatusHasBeenSet(false),
    m_runtimeStatusMessageHasBeenSet(false),
    m_sourceCodeRepositoriesHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

ApplicationComponentDetail::ApplicationComponentDetail(JsonView jsonValue) : 
    m_analysisStatus(SrcCodeOrDbAnalysisStatus::NOT_SET),
    m_analysisStatusHasBeenSet(false),
    m_antipatternReportS3ObjectHasBeenSet(false),
    m_antipatternReportStatus(AntipatternReportStatus::NOT_SET),
    m_antipatternReportStatusHasBeenSet(false),
    m_antipatternReportStatusMessageHasBeenSet(false),
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_appUnitErrorHasBeenSet(false),
    m_associatedServerIdHasBeenSet(false),
    m_databaseConfigDetailHasBeenSet(false),
    m_idHasBeenSet(false),
    m_inclusionStatus(InclusionStatus::NOT_SET),
    m_inclusionStatusHasBeenSet(false),
    m_lastAnalyzedTimestampHasBeenSet(false),
    m_listAntipatternSeveritySummaryHasBeenSet(false),
    m_moreServerAssociationExists(false),
    m_moreServerAssociationExistsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_osDriverHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_recommendationSetHasBeenSet(false),
    m_resourceSubType(ResourceSubType::NOT_SET),
    m_resourceSubTypeHasBeenSet(false),
    m_runtimeStatus(RuntimeAnalysisStatus::NOT_SET),
    m_runtimeStatusHasBeenSet(false),
    m_runtimeStatusMessageHasBeenSet(false),
    m_sourceCodeRepositoriesHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationComponentDetail& ApplicationComponentDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("analysisStatus"))
  {
    m_analysisStatus = SrcCodeOrDbAnalysisStatusMapper::GetSrcCodeOrDbAnalysisStatusForName(jsonValue.GetString("analysisStatus"));

    m_analysisStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antipatternReportS3Object"))
  {
    m_antipatternReportS3Object = jsonValue.GetObject("antipatternReportS3Object");

    m_antipatternReportS3ObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antipatternReportStatus"))
  {
    m_antipatternReportStatus = AntipatternReportStatusMapper::GetAntipatternReportStatusForName(jsonValue.GetString("antipatternReportStatus"));

    m_antipatternReportStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antipatternReportStatusMessage"))
  {
    m_antipatternReportStatusMessage = jsonValue.GetString("antipatternReportStatusMessage");

    m_antipatternReportStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appType"))
  {
    m_appType = AppTypeMapper::GetAppTypeForName(jsonValue.GetString("appType"));

    m_appTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appUnitError"))
  {
    m_appUnitError = jsonValue.GetObject("appUnitError");

    m_appUnitErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedServerId"))
  {
    m_associatedServerId = jsonValue.GetString("associatedServerId");

    m_associatedServerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseConfigDetail"))
  {
    m_databaseConfigDetail = jsonValue.GetObject("databaseConfigDetail");

    m_databaseConfigDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inclusionStatus"))
  {
    m_inclusionStatus = InclusionStatusMapper::GetInclusionStatusForName(jsonValue.GetString("inclusionStatus"));

    m_inclusionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAnalyzedTimestamp"))
  {
    m_lastAnalyzedTimestamp = jsonValue.GetDouble("lastAnalyzedTimestamp");

    m_lastAnalyzedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listAntipatternSeveritySummary"))
  {
    Aws::Utils::Array<JsonView> listAntipatternSeveritySummaryJsonList = jsonValue.GetArray("listAntipatternSeveritySummary");
    for(unsigned listAntipatternSeveritySummaryIndex = 0; listAntipatternSeveritySummaryIndex < listAntipatternSeveritySummaryJsonList.GetLength(); ++listAntipatternSeveritySummaryIndex)
    {
      m_listAntipatternSeveritySummary.push_back(listAntipatternSeveritySummaryJsonList[listAntipatternSeveritySummaryIndex].AsObject());
    }
    m_listAntipatternSeveritySummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("moreServerAssociationExists"))
  {
    m_moreServerAssociationExists = jsonValue.GetBool("moreServerAssociationExists");

    m_moreServerAssociationExistsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("osDriver"))
  {
    m_osDriver = jsonValue.GetString("osDriver");

    m_osDriverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("osVersion"))
  {
    m_osVersion = jsonValue.GetString("osVersion");

    m_osVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationSet"))
  {
    m_recommendationSet = jsonValue.GetObject("recommendationSet");

    m_recommendationSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceSubType"))
  {
    m_resourceSubType = ResourceSubTypeMapper::GetResourceSubTypeForName(jsonValue.GetString("resourceSubType"));

    m_resourceSubTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimeStatus"))
  {
    m_runtimeStatus = RuntimeAnalysisStatusMapper::GetRuntimeAnalysisStatusForName(jsonValue.GetString("runtimeStatus"));

    m_runtimeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimeStatusMessage"))
  {
    m_runtimeStatusMessage = jsonValue.GetString("runtimeStatusMessage");

    m_runtimeStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceCodeRepositories"))
  {
    Aws::Utils::Array<JsonView> sourceCodeRepositoriesJsonList = jsonValue.GetArray("sourceCodeRepositories");
    for(unsigned sourceCodeRepositoriesIndex = 0; sourceCodeRepositoriesIndex < sourceCodeRepositoriesJsonList.GetLength(); ++sourceCodeRepositoriesIndex)
    {
      m_sourceCodeRepositories.push_back(sourceCodeRepositoriesJsonList[sourceCodeRepositoriesIndex].AsObject());
    }
    m_sourceCodeRepositoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationComponentDetail::Jsonize() const
{
  JsonValue payload;

  if(m_analysisStatusHasBeenSet)
  {
   payload.WithString("analysisStatus", SrcCodeOrDbAnalysisStatusMapper::GetNameForSrcCodeOrDbAnalysisStatus(m_analysisStatus));
  }

  if(m_antipatternReportS3ObjectHasBeenSet)
  {
   payload.WithObject("antipatternReportS3Object", m_antipatternReportS3Object.Jsonize());

  }

  if(m_antipatternReportStatusHasBeenSet)
  {
   payload.WithString("antipatternReportStatus", AntipatternReportStatusMapper::GetNameForAntipatternReportStatus(m_antipatternReportStatus));
  }

  if(m_antipatternReportStatusMessageHasBeenSet)
  {
   payload.WithString("antipatternReportStatusMessage", m_antipatternReportStatusMessage);

  }

  if(m_appTypeHasBeenSet)
  {
   payload.WithString("appType", AppTypeMapper::GetNameForAppType(m_appType));
  }

  if(m_appUnitErrorHasBeenSet)
  {
   payload.WithObject("appUnitError", m_appUnitError.Jsonize());

  }

  if(m_associatedServerIdHasBeenSet)
  {
   payload.WithString("associatedServerId", m_associatedServerId);

  }

  if(m_databaseConfigDetailHasBeenSet)
  {
   payload.WithObject("databaseConfigDetail", m_databaseConfigDetail.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_inclusionStatusHasBeenSet)
  {
   payload.WithString("inclusionStatus", InclusionStatusMapper::GetNameForInclusionStatus(m_inclusionStatus));
  }

  if(m_lastAnalyzedTimestampHasBeenSet)
  {
   payload.WithDouble("lastAnalyzedTimestamp", m_lastAnalyzedTimestamp.SecondsWithMSPrecision());
  }

  if(m_listAntipatternSeveritySummaryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listAntipatternSeveritySummaryJsonList(m_listAntipatternSeveritySummary.size());
   for(unsigned listAntipatternSeveritySummaryIndex = 0; listAntipatternSeveritySummaryIndex < listAntipatternSeveritySummaryJsonList.GetLength(); ++listAntipatternSeveritySummaryIndex)
   {
     listAntipatternSeveritySummaryJsonList[listAntipatternSeveritySummaryIndex].AsObject(m_listAntipatternSeveritySummary[listAntipatternSeveritySummaryIndex].Jsonize());
   }
   payload.WithArray("listAntipatternSeveritySummary", std::move(listAntipatternSeveritySummaryJsonList));

  }

  if(m_moreServerAssociationExistsHasBeenSet)
  {
   payload.WithBool("moreServerAssociationExists", m_moreServerAssociationExists);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_osDriverHasBeenSet)
  {
   payload.WithString("osDriver", m_osDriver);

  }

  if(m_osVersionHasBeenSet)
  {
   payload.WithString("osVersion", m_osVersion);

  }

  if(m_recommendationSetHasBeenSet)
  {
   payload.WithObject("recommendationSet", m_recommendationSet.Jsonize());

  }

  if(m_resourceSubTypeHasBeenSet)
  {
   payload.WithString("resourceSubType", ResourceSubTypeMapper::GetNameForResourceSubType(m_resourceSubType));
  }

  if(m_runtimeStatusHasBeenSet)
  {
   payload.WithString("runtimeStatus", RuntimeAnalysisStatusMapper::GetNameForRuntimeAnalysisStatus(m_runtimeStatus));
  }

  if(m_runtimeStatusMessageHasBeenSet)
  {
   payload.WithString("runtimeStatusMessage", m_runtimeStatusMessage);

  }

  if(m_sourceCodeRepositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceCodeRepositoriesJsonList(m_sourceCodeRepositories.size());
   for(unsigned sourceCodeRepositoriesIndex = 0; sourceCodeRepositoriesIndex < sourceCodeRepositoriesJsonList.GetLength(); ++sourceCodeRepositoriesIndex)
   {
     sourceCodeRepositoriesJsonList[sourceCodeRepositoriesIndex].AsObject(m_sourceCodeRepositories[sourceCodeRepositoriesIndex].Jsonize());
   }
   payload.WithArray("sourceCodeRepositories", std::move(sourceCodeRepositoriesJsonList));

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
