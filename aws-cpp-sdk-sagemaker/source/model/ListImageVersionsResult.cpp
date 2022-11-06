/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListImageVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImageVersionsResult::ListImageVersionsResult()
{
}

ListImageVersionsResult::ListImageVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImageVersionsResult& ListImageVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ImageVersions"))
  {
    Aws::Utils::Array<JsonView> imageVersionsJsonList = jsonValue.GetArray("ImageVersions");
    for(unsigned imageVersionsIndex = 0; imageVersionsIndex < imageVersionsJsonList.GetLength(); ++imageVersionsIndex)
    {
      m_imageVersions.push_back(imageVersionsJsonList[imageVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
