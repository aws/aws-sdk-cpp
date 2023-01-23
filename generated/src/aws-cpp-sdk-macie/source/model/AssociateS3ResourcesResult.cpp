/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/AssociateS3ResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateS3ResourcesResult::AssociateS3ResourcesResult()
{
}

AssociateS3ResourcesResult::AssociateS3ResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateS3ResourcesResult& AssociateS3ResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("failedS3Resources"))
  {
    Aws::Utils::Array<JsonView> failedS3ResourcesJsonList = jsonValue.GetArray("failedS3Resources");
    for(unsigned failedS3ResourcesIndex = 0; failedS3ResourcesIndex < failedS3ResourcesJsonList.GetLength(); ++failedS3ResourcesIndex)
    {
      m_failedS3Resources.push_back(failedS3ResourcesJsonList[failedS3ResourcesIndex].AsObject());
    }
  }



  return *this;
}
