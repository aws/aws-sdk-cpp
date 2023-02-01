/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/DescribeCodeCoveragesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCodeCoveragesResult::DescribeCodeCoveragesResult()
{
}

DescribeCodeCoveragesResult::DescribeCodeCoveragesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCodeCoveragesResult& DescribeCodeCoveragesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("codeCoverages"))
  {
    Aws::Utils::Array<JsonView> codeCoveragesJsonList = jsonValue.GetArray("codeCoverages");
    for(unsigned codeCoveragesIndex = 0; codeCoveragesIndex < codeCoveragesJsonList.GetLength(); ++codeCoveragesIndex)
    {
      m_codeCoverages.push_back(codeCoveragesJsonList[codeCoveragesIndex].AsObject());
    }
  }



  return *this;
}
