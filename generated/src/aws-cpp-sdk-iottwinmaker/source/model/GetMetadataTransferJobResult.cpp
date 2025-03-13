/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetMetadataTransferJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMetadataTransferJobResult::GetMetadataTransferJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMetadataTransferJobResult& GetMetadataTransferJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metadataTransferJobId"))
  {
    m_metadataTransferJobId = jsonValue.GetString("metadataTransferJobId");
    m_metadataTransferJobIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");
    m_destinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadataTransferJobRole"))
  {
    m_metadataTransferJobRole = jsonValue.GetString("metadataTransferJobRole");
    m_metadataTransferJobRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reportUrl"))
  {
    m_reportUrl = jsonValue.GetString("reportUrl");
    m_reportUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");
    m_updateDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("progress"))
  {
    m_progress = jsonValue.GetObject("progress");
    m_progressHasBeenSet = true;
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
