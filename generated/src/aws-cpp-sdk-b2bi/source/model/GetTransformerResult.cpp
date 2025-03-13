/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/GetTransformerResult.h>
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

GetTransformerResult::GetTransformerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTransformerResult& GetTransformerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("transformerId"))
  {
    m_transformerId = jsonValue.GetString("transformerId");
    m_transformerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transformerArn"))
  {
    m_transformerArn = jsonValue.GetString("transformerArn");
    m_transformerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TransformerStatusMapper::GetTransformerStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputConversion"))
  {
    m_inputConversion = jsonValue.GetObject("inputConversion");
    m_inputConversionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mapping"))
  {
    m_mapping = jsonValue.GetObject("mapping");
    m_mappingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputConversion"))
  {
    m_outputConversion = jsonValue.GetObject("outputConversion");
    m_outputConversionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleDocuments"))
  {
    m_sampleDocuments = jsonValue.GetObject("sampleDocuments");
    m_sampleDocumentsHasBeenSet = true;
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
