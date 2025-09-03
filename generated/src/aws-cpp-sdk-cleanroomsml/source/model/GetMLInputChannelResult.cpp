/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetMLInputChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMLInputChannelResult::GetMLInputChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMLInputChannelResult& GetMLInputChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("membershipIdentifier"))
  {
    m_membershipIdentifier = jsonValue.GetString("membershipIdentifier");
    m_membershipIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationIdentifier"))
  {
    m_collaborationIdentifier = jsonValue.GetString("collaborationIdentifier");
    m_collaborationIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mlInputChannelArn"))
  {
    m_mlInputChannelArn = jsonValue.GetString("mlInputChannelArn");
    m_mlInputChannelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuredModelAlgorithmAssociations"))
  {
    Aws::Utils::Array<JsonView> configuredModelAlgorithmAssociationsJsonList = jsonValue.GetArray("configuredModelAlgorithmAssociations");
    for(unsigned configuredModelAlgorithmAssociationsIndex = 0; configuredModelAlgorithmAssociationsIndex < configuredModelAlgorithmAssociationsJsonList.GetLength(); ++configuredModelAlgorithmAssociationsIndex)
    {
      m_configuredModelAlgorithmAssociations.push_back(configuredModelAlgorithmAssociationsJsonList[configuredModelAlgorithmAssociationsIndex].AsString());
    }
    m_configuredModelAlgorithmAssociationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = MLInputChannelStatusMapper::GetMLInputChannelStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");
    m_statusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retentionInDays"))
  {
    m_retentionInDays = jsonValue.GetInteger("retentionInDays");
    m_retentionInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfRecords"))
  {
    m_numberOfRecords = jsonValue.GetInt64("numberOfRecords");
    m_numberOfRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputChannel"))
  {
    m_inputChannel = jsonValue.GetObject("inputChannel");
    m_inputChannelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protectedQueryIdentifier"))
  {
    m_protectedQueryIdentifier = jsonValue.GetString("protectedQueryIdentifier");
    m_protectedQueryIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfFiles"))
  {
    m_numberOfFiles = jsonValue.GetDouble("numberOfFiles");
    m_numberOfFilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sizeInGb"))
  {
    m_sizeInGb = jsonValue.GetDouble("sizeInGb");
    m_sizeInGbHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
