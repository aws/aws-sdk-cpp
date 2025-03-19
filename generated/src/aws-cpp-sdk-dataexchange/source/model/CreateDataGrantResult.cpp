/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/CreateDataGrantResult.h>
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

CreateDataGrantResult::CreateDataGrantResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDataGrantResult& CreateDataGrantResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderPrincipal"))
  {
    m_senderPrincipal = jsonValue.GetString("SenderPrincipal");
    m_senderPrincipalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReceiverPrincipal"))
  {
    m_receiverPrincipal = jsonValue.GetString("ReceiverPrincipal");
    m_receiverPrincipalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AcceptanceState"))
  {
    m_acceptanceState = DataGrantAcceptanceStateMapper::GetDataGrantAcceptanceStateForName(jsonValue.GetString("AcceptanceState"));
    m_acceptanceStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AcceptedAt"))
  {
    m_acceptedAt = jsonValue.GetString("AcceptedAt");
    m_acceptedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndsAt"))
  {
    m_endsAt = jsonValue.GetString("EndsAt");
    m_endsAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GrantDistributionScope"))
  {
    m_grantDistributionScope = GrantDistributionScopeMapper::GetGrantDistributionScopeForName(jsonValue.GetString("GrantDistributionScope"));
    m_grantDistributionScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");
    m_dataSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceDataSetId"))
  {
    m_sourceDataSetId = jsonValue.GetString("SourceDataSetId");
    m_sourceDataSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
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
