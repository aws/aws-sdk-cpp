/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/GetCapabilityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCapabilityResult::GetCapabilityResult() : 
    m_type(CapabilityType::NOT_SET)
{
}

GetCapabilityResult::GetCapabilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(CapabilityType::NOT_SET)
{
  *this = result;
}

GetCapabilityResult& GetCapabilityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("capabilityId"))
  {
    m_capabilityId = jsonValue.GetString("capabilityId");

  }

  if(jsonValue.ValueExists("capabilityArn"))
  {
    m_capabilityArn = jsonValue.GetString("capabilityArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = CapabilityTypeMapper::GetCapabilityTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

  }

  if(jsonValue.ValueExists("instructionsDocuments"))
  {
    Aws::Utils::Array<JsonView> instructionsDocumentsJsonList = jsonValue.GetArray("instructionsDocuments");
    for(unsigned instructionsDocumentsIndex = 0; instructionsDocumentsIndex < instructionsDocumentsJsonList.GetLength(); ++instructionsDocumentsIndex)
    {
      m_instructionsDocuments.push_back(instructionsDocumentsJsonList[instructionsDocumentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
