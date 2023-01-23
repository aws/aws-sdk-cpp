/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/MergeBranchesByThreeWayResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

MergeBranchesByThreeWayResult::MergeBranchesByThreeWayResult()
{
}

MergeBranchesByThreeWayResult::MergeBranchesByThreeWayResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

MergeBranchesByThreeWayResult& MergeBranchesByThreeWayResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");

  }

  if(jsonValue.ValueExists("treeId"))
  {
    m_treeId = jsonValue.GetString("treeId");

  }



  return *this;
}
