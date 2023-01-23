/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListAssessmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssessmentsResult::ListAssessmentsResult()
{
}

ListAssessmentsResult::ListAssessmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssessmentsResult& ListAssessmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentMetadata"))
  {
    Aws::Utils::Array<JsonView> assessmentMetadataJsonList = jsonValue.GetArray("assessmentMetadata");
    for(unsigned assessmentMetadataIndex = 0; assessmentMetadataIndex < assessmentMetadataJsonList.GetLength(); ++assessmentMetadataIndex)
    {
      m_assessmentMetadata.push_back(assessmentMetadataJsonList[assessmentMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
