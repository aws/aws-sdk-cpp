/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ListSegmentReferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSegmentReferencesResult::ListSegmentReferencesResult()
{
}

ListSegmentReferencesResult::ListSegmentReferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSegmentReferencesResult& ListSegmentReferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("referencedBy"))
  {
    Aws::Utils::Array<JsonView> referencedByJsonList = jsonValue.GetArray("referencedBy");
    for(unsigned referencedByIndex = 0; referencedByIndex < referencedByJsonList.GetLength(); ++referencedByIndex)
    {
      m_referencedBy.push_back(referencedByJsonList[referencedByIndex].AsObject());
    }
  }



  return *this;
}
