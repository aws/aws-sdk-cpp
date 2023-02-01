/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ListLFTagsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLFTagsResult::ListLFTagsResult()
{
}

ListLFTagsResult::ListLFTagsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLFTagsResult& ListLFTagsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LFTags"))
  {
    Aws::Utils::Array<JsonView> lFTagsJsonList = jsonValue.GetArray("LFTags");
    for(unsigned lFTagsIndex = 0; lFTagsIndex < lFTagsJsonList.GetLength(); ++lFTagsIndex)
    {
      m_lFTags.push_back(lFTagsJsonList[lFTagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
