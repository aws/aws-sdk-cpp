/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetCampaignResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCampaignResult::GetCampaignResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCampaignResult& GetCampaignResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signalCatalogArn"))
  {
    m_signalCatalogArn = jsonValue.GetString("signalCatalogArn");
    m_signalCatalogArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");
    m_targetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = CampaignStatusMapper::GetCampaignStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expiryTime"))
  {
    m_expiryTime = jsonValue.GetDouble("expiryTime");
    m_expiryTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("postTriggerCollectionDuration"))
  {
    m_postTriggerCollectionDuration = jsonValue.GetInt64("postTriggerCollectionDuration");
    m_postTriggerCollectionDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("diagnosticsMode"))
  {
    m_diagnosticsMode = DiagnosticsModeMapper::GetDiagnosticsModeForName(jsonValue.GetString("diagnosticsMode"));
    m_diagnosticsModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("spoolingMode"))
  {
    m_spoolingMode = SpoolingModeMapper::GetSpoolingModeForName(jsonValue.GetString("spoolingMode"));
    m_spoolingModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("compression"))
  {
    m_compression = CompressionMapper::GetCompressionForName(jsonValue.GetString("compression"));
    m_compressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signalsToCollect"))
  {
    Aws::Utils::Array<JsonView> signalsToCollectJsonList = jsonValue.GetArray("signalsToCollect");
    for(unsigned signalsToCollectIndex = 0; signalsToCollectIndex < signalsToCollectJsonList.GetLength(); ++signalsToCollectIndex)
    {
      m_signalsToCollect.push_back(signalsToCollectJsonList[signalsToCollectIndex].AsObject());
    }
    m_signalsToCollectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collectionScheme"))
  {
    m_collectionScheme = jsonValue.GetObject("collectionScheme");
    m_collectionSchemeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataExtraDimensions"))
  {
    Aws::Utils::Array<JsonView> dataExtraDimensionsJsonList = jsonValue.GetArray("dataExtraDimensions");
    for(unsigned dataExtraDimensionsIndex = 0; dataExtraDimensionsIndex < dataExtraDimensionsJsonList.GetLength(); ++dataExtraDimensionsIndex)
    {
      m_dataExtraDimensions.push_back(dataExtraDimensionsJsonList[dataExtraDimensionsIndex].AsString());
    }
    m_dataExtraDimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("lastModificationTime");
    m_lastModificationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataDestinationConfigs"))
  {
    Aws::Utils::Array<JsonView> dataDestinationConfigsJsonList = jsonValue.GetArray("dataDestinationConfigs");
    for(unsigned dataDestinationConfigsIndex = 0; dataDestinationConfigsIndex < dataDestinationConfigsJsonList.GetLength(); ++dataDestinationConfigsIndex)
    {
      m_dataDestinationConfigs.push_back(dataDestinationConfigsJsonList[dataDestinationConfigsIndex].AsObject());
    }
    m_dataDestinationConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataPartitions"))
  {
    Aws::Utils::Array<JsonView> dataPartitionsJsonList = jsonValue.GetArray("dataPartitions");
    for(unsigned dataPartitionsIndex = 0; dataPartitionsIndex < dataPartitionsJsonList.GetLength(); ++dataPartitionsIndex)
    {
      m_dataPartitions.push_back(dataPartitionsJsonList[dataPartitionsIndex].AsObject());
    }
    m_dataPartitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signalsToFetch"))
  {
    Aws::Utils::Array<JsonView> signalsToFetchJsonList = jsonValue.GetArray("signalsToFetch");
    for(unsigned signalsToFetchIndex = 0; signalsToFetchIndex < signalsToFetchJsonList.GetLength(); ++signalsToFetchIndex)
    {
      m_signalsToFetch.push_back(signalsToFetchJsonList[signalsToFetchIndex].AsObject());
    }
    m_signalsToFetchHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
