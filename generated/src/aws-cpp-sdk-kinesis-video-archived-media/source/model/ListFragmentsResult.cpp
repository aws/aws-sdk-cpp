/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/ListFragmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFragmentsResult::ListFragmentsResult()
{
}

ListFragmentsResult::ListFragmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFragmentsResult& ListFragmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Fragments"))
  {
    Aws::Utils::Array<JsonView> fragmentsJsonList = jsonValue.GetArray("Fragments");
    for(unsigned fragmentsIndex = 0; fragmentsIndex < fragmentsJsonList.GetLength(); ++fragmentsIndex)
    {
      m_fragments.push_back(fragmentsJsonList[fragmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
