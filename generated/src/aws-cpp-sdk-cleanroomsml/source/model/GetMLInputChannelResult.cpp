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

GetMLInputChannelResult::GetMLInputChannelResult() : 
    m_status(MLInputChannelStatus::NOT_SET),
    m_retentionInDays(0),
    m_numberOfRecords(0),
    m_numberOfFiles(0.0),
    m_sizeInGb(0.0)
{
}

GetMLInputChannelResult::GetMLInputChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetMLInputChannelResult()
{
  *this = result;
}

GetMLInputChannelResult& GetMLInputChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");

  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

  }

  if(jsonValue.ValueExists("membershipIdentifier"))
  {
    m_membershipIdentifier = jsonValue.GetString("membershipIdentifier");

  }

  if(jsonValue.ValueExists("collaborationIdentifier"))
  {
    m_collaborationIdentifier = jsonValue.GetString("collaborationIdentifier");

  }

  if(jsonValue.ValueExists("inputChannel"))
  {
    m_inputChannel = jsonValue.GetObject("inputChannel");

  }

  if(jsonValue.ValueExists("protectedQueryIdentifier"))
  {
    m_protectedQueryIdentifier = jsonValue.GetString("protectedQueryIdentifier");

  }

  if(jsonValue.ValueExists("mlInputChannelArn"))
  {
    m_mlInputChannelArn = jsonValue.GetString("mlInputChannelArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("configuredModelAlgorithmAssociations"))
  {
    Aws::Utils::Array<JsonView> configuredModelAlgorithmAssociationsJsonList = jsonValue.GetArray("configuredModelAlgorithmAssociations");
    for(unsigned configuredModelAlgorithmAssociationsIndex = 0; configuredModelAlgorithmAssociationsIndex < configuredModelAlgorithmAssociationsJsonList.GetLength(); ++configuredModelAlgorithmAssociationsIndex)
    {
      m_configuredModelAlgorithmAssociations.push_back(configuredModelAlgorithmAssociationsJsonList[configuredModelAlgorithmAssociationsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MLInputChannelStatusMapper::GetMLInputChannelStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");

  }

  if(jsonValue.ValueExists("retentionInDays"))
  {
    m_retentionInDays = jsonValue.GetInteger("retentionInDays");

  }

  if(jsonValue.ValueExists("numberOfRecords"))
  {
    m_numberOfRecords = jsonValue.GetInt64("numberOfRecords");

  }

  if(jsonValue.ValueExists("numberOfFiles"))
  {
    m_numberOfFiles = jsonValue.GetDouble("numberOfFiles");

  }

  if(jsonValue.ValueExists("sizeInGb"))
  {
    m_sizeInGb = jsonValue.GetDouble("sizeInGb");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
