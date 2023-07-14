/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/GetDocumentPathResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDocumentPathResult::GetDocumentPathResult()
{
}

GetDocumentPathResult::GetDocumentPathResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDocumentPathResult& GetDocumentPathResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetObject("Path");

  }



  return *this;
}
