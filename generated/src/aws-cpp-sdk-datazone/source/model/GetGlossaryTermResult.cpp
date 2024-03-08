/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetGlossaryTermResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGlossaryTermResult::GetGlossaryTermResult() : 
    m_status(GlossaryTermStatus::NOT_SET)
{
}

GetGlossaryTermResult::GetGlossaryTermResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(GlossaryTermStatus::NOT_SET)
{
  *this = result;
}

GetGlossaryTermResult& GetGlossaryTermResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("glossaryId"))
  {
    m_glossaryId = jsonValue.GetString("glossaryId");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("longDescription"))
  {
    m_longDescription = jsonValue.GetString("longDescription");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("shortDescription"))
  {
    m_shortDescription = jsonValue.GetString("shortDescription");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = GlossaryTermStatusMapper::GetGlossaryTermStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("termRelations"))
  {
    m_termRelations = jsonValue.GetObject("termRelations");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
