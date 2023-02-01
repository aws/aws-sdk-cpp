/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ListSourceCredentialsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSourceCredentialsResult::ListSourceCredentialsResult()
{
}

ListSourceCredentialsResult::ListSourceCredentialsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSourceCredentialsResult& ListSourceCredentialsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sourceCredentialsInfos"))
  {
    Aws::Utils::Array<JsonView> sourceCredentialsInfosJsonList = jsonValue.GetArray("sourceCredentialsInfos");
    for(unsigned sourceCredentialsInfosIndex = 0; sourceCredentialsInfosIndex < sourceCredentialsInfosJsonList.GetLength(); ++sourceCredentialsInfosIndex)
    {
      m_sourceCredentialsInfos.push_back(sourceCredentialsInfosJsonList[sourceCredentialsInfosIndex].AsObject());
    }
  }



  return *this;
}
