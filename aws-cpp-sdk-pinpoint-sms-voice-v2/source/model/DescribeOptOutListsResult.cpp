/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeOptOutListsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOptOutListsResult::DescribeOptOutListsResult()
{
}

DescribeOptOutListsResult::DescribeOptOutListsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOptOutListsResult& DescribeOptOutListsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OptOutLists"))
  {
    Aws::Utils::Array<JsonView> optOutListsJsonList = jsonValue.GetArray("OptOutLists");
    for(unsigned optOutListsIndex = 0; optOutListsIndex < optOutListsJsonList.GetLength(); ++optOutListsIndex)
    {
      m_optOutLists.push_back(optOutListsJsonList[optOutListsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
