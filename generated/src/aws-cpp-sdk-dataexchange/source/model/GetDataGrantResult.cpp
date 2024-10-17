/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/GetDataGrantResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataGrantResult::GetDataGrantResult() : 
    m_acceptanceState(DataGrantAcceptanceState::NOT_SET),
    m_grantDistributionScope(GrantDistributionScope::NOT_SET)
{
}

GetDataGrantResult::GetDataGrantResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetDataGrantResult()
{
  *this = result;
}

GetDataGrantResult& GetDataGrantResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("SenderPrincipal"))
  {
    m_senderPrincipal = jsonValue.GetString("SenderPrincipal");

  }

  if(jsonValue.ValueExists("ReceiverPrincipal"))
  {
    m_receiverPrincipal = jsonValue.GetString("ReceiverPrincipal");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("AcceptanceState"))
  {
    m_acceptanceState = DataGrantAcceptanceStateMapper::GetDataGrantAcceptanceStateForName(jsonValue.GetString("AcceptanceState"));

  }

  if(jsonValue.ValueExists("AcceptedAt"))
  {
    m_acceptedAt = jsonValue.GetString("AcceptedAt");

  }

  if(jsonValue.ValueExists("EndsAt"))
  {
    m_endsAt = jsonValue.GetString("EndsAt");

  }

  if(jsonValue.ValueExists("GrantDistributionScope"))
  {
    m_grantDistributionScope = GrantDistributionScopeMapper::GetGrantDistributionScopeForName(jsonValue.GetString("GrantDistributionScope"));

  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

  }

  if(jsonValue.ValueExists("SourceDataSetId"))
  {
    m_sourceDataSetId = jsonValue.GetString("SourceDataSetId");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
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
