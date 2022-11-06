/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListModelMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelMetadataResult::ListModelMetadataResult()
{
}

ListModelMetadataResult::ListModelMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelMetadataResult& ListModelMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelMetadataSummaries"))
  {
    Aws::Utils::Array<JsonView> modelMetadataSummariesJsonList = jsonValue.GetArray("ModelMetadataSummaries");
    for(unsigned modelMetadataSummariesIndex = 0; modelMetadataSummariesIndex < modelMetadataSummariesJsonList.GetLength(); ++modelMetadataSummariesIndex)
    {
      m_modelMetadataSummaries.push_back(modelMetadataSummariesJsonList[modelMetadataSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
