/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListDocumentClassificationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDocumentClassificationJobsResult::ListDocumentClassificationJobsResult()
{
}

ListDocumentClassificationJobsResult::ListDocumentClassificationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDocumentClassificationJobsResult& ListDocumentClassificationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DocumentClassificationJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> documentClassificationJobPropertiesListJsonList = jsonValue.GetArray("DocumentClassificationJobPropertiesList");
    for(unsigned documentClassificationJobPropertiesListIndex = 0; documentClassificationJobPropertiesListIndex < documentClassificationJobPropertiesListJsonList.GetLength(); ++documentClassificationJobPropertiesListIndex)
    {
      m_documentClassificationJobPropertiesList.push_back(documentClassificationJobPropertiesListJsonList[documentClassificationJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
