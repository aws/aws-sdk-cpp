/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ListDecoderManifestSignalsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDecoderManifestSignalsResult::ListDecoderManifestSignalsResult()
{
}

ListDecoderManifestSignalsResult::ListDecoderManifestSignalsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDecoderManifestSignalsResult& ListDecoderManifestSignalsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("signalDecoders"))
  {
    Aws::Utils::Array<JsonView> signalDecodersJsonList = jsonValue.GetArray("signalDecoders");
    for(unsigned signalDecodersIndex = 0; signalDecodersIndex < signalDecodersJsonList.GetLength(); ++signalDecodersIndex)
    {
      m_signalDecoders.push_back(signalDecodersJsonList[signalDecodersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
