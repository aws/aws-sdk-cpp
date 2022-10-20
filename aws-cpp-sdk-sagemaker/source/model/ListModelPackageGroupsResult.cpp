/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListModelPackageGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelPackageGroupsResult::ListModelPackageGroupsResult()
{
}

ListModelPackageGroupsResult::ListModelPackageGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelPackageGroupsResult& ListModelPackageGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelPackageGroupSummaryList"))
  {
    Aws::Utils::Array<JsonView> modelPackageGroupSummaryListJsonList = jsonValue.GetArray("ModelPackageGroupSummaryList");
    for(unsigned modelPackageGroupSummaryListIndex = 0; modelPackageGroupSummaryListIndex < modelPackageGroupSummaryListJsonList.GetLength(); ++modelPackageGroupSummaryListIndex)
    {
      m_modelPackageGroupSummaryList.push_back(modelPackageGroupSummaryListJsonList[modelPackageGroupSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
