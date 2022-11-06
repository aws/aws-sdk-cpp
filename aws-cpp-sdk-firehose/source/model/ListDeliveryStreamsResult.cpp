/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ListDeliveryStreamsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeliveryStreamsResult::ListDeliveryStreamsResult() : 
    m_hasMoreDeliveryStreams(false)
{
}

ListDeliveryStreamsResult::ListDeliveryStreamsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hasMoreDeliveryStreams(false)
{
  *this = result;
}

ListDeliveryStreamsResult& ListDeliveryStreamsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeliveryStreamNames"))
  {
    Aws::Utils::Array<JsonView> deliveryStreamNamesJsonList = jsonValue.GetArray("DeliveryStreamNames");
    for(unsigned deliveryStreamNamesIndex = 0; deliveryStreamNamesIndex < deliveryStreamNamesJsonList.GetLength(); ++deliveryStreamNamesIndex)
    {
      m_deliveryStreamNames.push_back(deliveryStreamNamesJsonList[deliveryStreamNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("HasMoreDeliveryStreams"))
  {
    m_hasMoreDeliveryStreams = jsonValue.GetBool("HasMoreDeliveryStreams");

  }



  return *this;
}
