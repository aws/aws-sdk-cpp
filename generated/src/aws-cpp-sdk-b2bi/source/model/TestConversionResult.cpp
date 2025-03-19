/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/TestConversionResult.h>
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

TestConversionResult::TestConversionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TestConversionResult& TestConversionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("convertedFileContent"))
  {
    m_convertedFileContent = jsonValue.GetString("convertedFileContent");
    m_convertedFileContentHasBeenSet = true;
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
