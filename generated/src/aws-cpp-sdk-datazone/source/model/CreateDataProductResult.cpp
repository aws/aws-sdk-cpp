/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateDataProductResult.h>
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

CreateDataProductResult::CreateDataProductResult() : 
    m_status(DataProductStatus::NOT_SET)
{
}

CreateDataProductResult::CreateDataProductResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateDataProductResult()
{
  *this = result;
}

CreateDataProductResult& CreateDataProductResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("firstRevisionCreatedAt"))
  {
    m_firstRevisionCreatedAt = jsonValue.GetDouble("firstRevisionCreatedAt");

  }

  if(jsonValue.ValueExists("firstRevisionCreatedBy"))
  {
    m_firstRevisionCreatedBy = jsonValue.GetString("firstRevisionCreatedBy");

  }

  if(jsonValue.ValueExists("formsOutput"))
  {
    Aws::Utils::Array<JsonView> formsOutputJsonList = jsonValue.GetArray("formsOutput");
    for(unsigned formsOutputIndex = 0; formsOutputIndex < formsOutputJsonList.GetLength(); ++formsOutputIndex)
    {
      m_formsOutput.push_back(formsOutputJsonList[formsOutputIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("glossaryTerms"))
  {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("glossaryTerms");
    for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
    {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("owningProjectId"))
  {
    m_owningProjectId = jsonValue.GetString("owningProjectId");

  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataProductStatusMapper::GetDataProductStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
