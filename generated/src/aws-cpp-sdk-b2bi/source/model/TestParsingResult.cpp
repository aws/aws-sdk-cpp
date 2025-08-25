/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/TestParsingResult.h>
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

TestParsingResult::TestParsingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TestParsingResult& TestParsingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("parsedFileContent"))
  {
    m_parsedFileContent = jsonValue.GetString("parsedFileContent");
    m_parsedFileContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parsedSplitFileContents"))
  {
    Aws::Utils::Array<JsonView> parsedSplitFileContentsJsonList = jsonValue.GetArray("parsedSplitFileContents");
    for(unsigned parsedSplitFileContentsIndex = 0; parsedSplitFileContentsIndex < parsedSplitFileContentsJsonList.GetLength(); ++parsedSplitFileContentsIndex)
    {
      m_parsedSplitFileContents.push_back(parsedSplitFileContentsJsonList[parsedSplitFileContentsIndex].AsString());
    }
    m_parsedSplitFileContentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validationMessages"))
  {
    Aws::Utils::Array<JsonView> validationMessagesJsonList = jsonValue.GetArray("validationMessages");
    for(unsigned validationMessagesIndex = 0; validationMessagesIndex < validationMessagesJsonList.GetLength(); ++validationMessagesIndex)
    {
      m_validationMessages.push_back(validationMessagesJsonList[validationMessagesIndex].AsString());
    }
    m_validationMessagesHasBeenSet = true;
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
