/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetCampaignResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCampaignResult::GetCampaignResult() : 
    m_status(CampaignStatus::NOT_SET),
    m_postTriggerCollectionDuration(0),
    m_diagnosticsMode(DiagnosticsMode::NOT_SET),
    m_spoolingMode(SpoolingMode::NOT_SET),
    m_compression(Compression::NOT_SET),
    m_priority(0)
{
}

GetCampaignResult::GetCampaignResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(CampaignStatus::NOT_SET),
    m_postTriggerCollectionDuration(0),
    m_diagnosticsMode(DiagnosticsMode::NOT_SET),
    m_spoolingMode(SpoolingMode::NOT_SET),
    m_compression(Compression::NOT_SET),
    m_priority(0)
{
  *this = result;
}

GetCampaignResult& GetCampaignResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("signalCatalogArn"))
  {
    m_signalCatalogArn = jsonValue.GetString("signalCatalogArn");

  }

  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CampaignStatusMapper::GetCampaignStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

  }

  if(jsonValue.ValueExists("expiryTime"))
  {
    m_expiryTime = jsonValue.GetDouble("expiryTime");

  }

  if(jsonValue.ValueExists("postTriggerCollectionDuration"))
  {
    m_postTriggerCollectionDuration = jsonValue.GetInt64("postTriggerCollectionDuration");

  }

  if(jsonValue.ValueExists("diagnosticsMode"))
  {
    m_diagnosticsMode = DiagnosticsModeMapper::GetDiagnosticsModeForName(jsonValue.GetString("diagnosticsMode"));

  }

  if(jsonValue.ValueExists("spoolingMode"))
  {
    m_spoolingMode = SpoolingModeMapper::GetSpoolingModeForName(jsonValue.GetString("spoolingMode"));

  }

  if(jsonValue.ValueExists("compression"))
  {
    m_compression = CompressionMapper::GetCompressionForName(jsonValue.GetString("compression"));

  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

  }

  if(jsonValue.ValueExists("signalsToCollect"))
  {
    Aws::Utils::Array<JsonView> signalsToCollectJsonList = jsonValue.GetArray("signalsToCollect");
    for(unsigned signalsToCollectIndex = 0; signalsToCollectIndex < signalsToCollectJsonList.GetLength(); ++signalsToCollectIndex)
    {
      m_signalsToCollect.push_back(signalsToCollectJsonList[signalsToCollectIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("collectionScheme"))
  {
    m_collectionScheme = jsonValue.GetObject("collectionScheme");

  }

  if(jsonValue.ValueExists("dataExtraDimensions"))
  {
    Aws::Utils::Array<JsonView> dataExtraDimensionsJsonList = jsonValue.GetArray("dataExtraDimensions");
    for(unsigned dataExtraDimensionsIndex = 0; dataExtraDimensionsIndex < dataExtraDimensionsJsonList.GetLength(); ++dataExtraDimensionsIndex)
    {
      m_dataExtraDimensions.push_back(dataExtraDimensionsJsonList[dataExtraDimensionsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("lastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("lastModificationTime");

  }



  return *this;
}
