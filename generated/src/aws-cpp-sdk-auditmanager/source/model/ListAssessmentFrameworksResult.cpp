/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListAssessmentFrameworksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssessmentFrameworksResult::ListAssessmentFrameworksResult()
{
}

ListAssessmentFrameworksResult::ListAssessmentFrameworksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssessmentFrameworksResult& ListAssessmentFrameworksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("frameworkMetadataList"))
  {
    Aws::Utils::Array<JsonView> frameworkMetadataListJsonList = jsonValue.GetArray("frameworkMetadataList");
    for(unsigned frameworkMetadataListIndex = 0; frameworkMetadataListIndex < frameworkMetadataListJsonList.GetLength(); ++frameworkMetadataListIndex)
    {
      m_frameworkMetadataList.push_back(frameworkMetadataListJsonList[frameworkMetadataListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
