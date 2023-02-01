/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/ListS3ResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListS3ResourcesResult::ListS3ResourcesResult()
{
}

ListS3ResourcesResult::ListS3ResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListS3ResourcesResult& ListS3ResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("s3Resources"))
  {
    Aws::Utils::Array<JsonView> s3ResourcesJsonList = jsonValue.GetArray("s3Resources");
    for(unsigned s3ResourcesIndex = 0; s3ResourcesIndex < s3ResourcesJsonList.GetLength(); ++s3ResourcesIndex)
    {
      m_s3Resources.push_back(s3ResourcesJsonList[s3ResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
