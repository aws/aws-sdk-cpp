/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/CreateTransformerResult.h>
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

CreateTransformerResult::CreateTransformerResult() : 
    m_status(TransformerStatus::NOT_SET)
{
}

CreateTransformerResult::CreateTransformerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateTransformerResult()
{
  *this = result;
}

CreateTransformerResult& CreateTransformerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("transformerId"))
  {
    m_transformerId = jsonValue.GetString("transformerId");

  }

  if(jsonValue.ValueExists("transformerArn"))
  {
    m_transformerArn = jsonValue.GetString("transformerArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TransformerStatusMapper::GetTransformerStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("inputConversion"))
  {
    m_inputConversion = jsonValue.GetObject("inputConversion");

  }

  if(jsonValue.ValueExists("mapping"))
  {
    m_mapping = jsonValue.GetObject("mapping");

  }

  if(jsonValue.ValueExists("outputConversion"))
  {
    m_outputConversion = jsonValue.GetObject("outputConversion");

  }

  if(jsonValue.ValueExists("sampleDocuments"))
  {
    m_sampleDocuments = jsonValue.GetObject("sampleDocuments");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
