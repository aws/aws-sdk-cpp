/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DescribeDocumentVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDocumentVersionsResult::DescribeDocumentVersionsResult()
{
}

DescribeDocumentVersionsResult::DescribeDocumentVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDocumentVersionsResult& DescribeDocumentVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DocumentVersions"))
  {
    Aws::Utils::Array<JsonView> documentVersionsJsonList = jsonValue.GetArray("DocumentVersions");
    for(unsigned documentVersionsIndex = 0; documentVersionsIndex < documentVersionsJsonList.GetLength(); ++documentVersionsIndex)
    {
      m_documentVersions.push_back(documentVersionsJsonList[documentVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
