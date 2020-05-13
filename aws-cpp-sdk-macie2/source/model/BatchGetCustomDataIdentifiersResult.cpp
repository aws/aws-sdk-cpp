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

#include <aws/macie2/model/BatchGetCustomDataIdentifiersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetCustomDataIdentifiersResult::BatchGetCustomDataIdentifiersResult()
{
}

BatchGetCustomDataIdentifiersResult::BatchGetCustomDataIdentifiersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetCustomDataIdentifiersResult& BatchGetCustomDataIdentifiersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("customDataIdentifiers"))
  {
    Array<JsonView> customDataIdentifiersJsonList = jsonValue.GetArray("customDataIdentifiers");
    for(unsigned customDataIdentifiersIndex = 0; customDataIdentifiersIndex < customDataIdentifiersJsonList.GetLength(); ++customDataIdentifiersIndex)
    {
      m_customDataIdentifiers.push_back(customDataIdentifiersJsonList[customDataIdentifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("notFoundIdentifierIds"))
  {
    Array<JsonView> notFoundIdentifierIdsJsonList = jsonValue.GetArray("notFoundIdentifierIds");
    for(unsigned notFoundIdentifierIdsIndex = 0; notFoundIdentifierIdsIndex < notFoundIdentifierIdsJsonList.GetLength(); ++notFoundIdentifierIdsIndex)
    {
      m_notFoundIdentifierIds.push_back(notFoundIdentifierIdsJsonList[notFoundIdentifierIdsIndex].AsString());
    }
  }



  return *this;
}
