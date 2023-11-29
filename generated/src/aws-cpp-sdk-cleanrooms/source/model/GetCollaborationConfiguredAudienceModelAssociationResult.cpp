/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/GetCollaborationConfiguredAudienceModelAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCollaborationConfiguredAudienceModelAssociationResult::GetCollaborationConfiguredAudienceModelAssociationResult()
{
}

GetCollaborationConfiguredAudienceModelAssociationResult::GetCollaborationConfiguredAudienceModelAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCollaborationConfiguredAudienceModelAssociationResult& GetCollaborationConfiguredAudienceModelAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("collaborationConfiguredAudienceModelAssociation"))
  {
    m_collaborationConfiguredAudienceModelAssociation = jsonValue.GetObject("collaborationConfiguredAudienceModelAssociation");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
