/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/GetTransformerJobResult.h>
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

GetTransformerJobResult::GetTransformerJobResult() : 
    m_status(TransformerJobStatus::NOT_SET)
{
}

GetTransformerJobResult::GetTransformerJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TransformerJobStatus::NOT_SET)
{
  *this = result;
}

GetTransformerJobResult& GetTransformerJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = TransformerJobStatusMapper::GetTransformerJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("outputFiles"))
  {
    Aws::Utils::Array<JsonView> outputFilesJsonList = jsonValue.GetArray("outputFiles");
    for(unsigned outputFilesIndex = 0; outputFilesIndex < outputFilesJsonList.GetLength(); ++outputFilesIndex)
    {
      m_outputFiles.push_back(outputFilesJsonList[outputFilesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
