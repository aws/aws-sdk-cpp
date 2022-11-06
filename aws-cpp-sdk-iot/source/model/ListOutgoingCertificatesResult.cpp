/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListOutgoingCertificatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOutgoingCertificatesResult::ListOutgoingCertificatesResult()
{
}

ListOutgoingCertificatesResult::ListOutgoingCertificatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOutgoingCertificatesResult& ListOutgoingCertificatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("outgoingCertificates"))
  {
    Aws::Utils::Array<JsonView> outgoingCertificatesJsonList = jsonValue.GetArray("outgoingCertificates");
    for(unsigned outgoingCertificatesIndex = 0; outgoingCertificatesIndex < outgoingCertificatesJsonList.GetLength(); ++outgoingCertificatesIndex)
    {
      m_outgoingCertificates.push_back(outgoingCertificatesJsonList[outgoingCertificatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextMarker"))
  {
    m_nextMarker = jsonValue.GetString("nextMarker");

  }



  return *this;
}
