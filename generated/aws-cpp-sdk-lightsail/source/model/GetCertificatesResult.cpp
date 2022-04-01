﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetCertificatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCertificatesResult::GetCertificatesResult()
{
}

GetCertificatesResult::GetCertificatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCertificatesResult& GetCertificatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("certificates"))
  {
    Array<JsonView> certificatesJsonList = jsonValue.GetArray("certificates");
    for(unsigned certificatesIndex = 0; certificatesIndex < certificatesJsonList.GetLength(); ++certificatesIndex)
    {
      m_certificates.push_back(certificatesJsonList[certificatesIndex].AsObject());
    }
  }



  return *this;
}
