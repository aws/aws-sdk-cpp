/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListCandidatesForAutoMLJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCandidatesForAutoMLJobResult::ListCandidatesForAutoMLJobResult()
{
}

ListCandidatesForAutoMLJobResult::ListCandidatesForAutoMLJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCandidatesForAutoMLJobResult& ListCandidatesForAutoMLJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Candidates"))
  {
    Aws::Utils::Array<JsonView> candidatesJsonList = jsonValue.GetArray("Candidates");
    for(unsigned candidatesIndex = 0; candidatesIndex < candidatesJsonList.GetLength(); ++candidatesIndex)
    {
      m_candidates.push_back(candidatesJsonList[candidatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
