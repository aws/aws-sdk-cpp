/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> failedS3ResourcesJsonList = jsonValue.GetArray("failedS3Resources");
    for(unsigned failedS3ResourcesIndex = 0; failedS3ResourcesIndex < failedS3ResourcesJsonList.GetLength(); ++failedS3ResourcesIndex)
    {
      m_failedS3Resources.push_back(failedS3ResourcesJsonList[failedS3ResourcesIndex].AsObject());
    }
  }



  return *this;
}
