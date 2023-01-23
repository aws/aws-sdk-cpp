/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeCertificatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCertificatesResult::DescribeCertificatesResult()
{
}

DescribeCertificatesResult::DescribeCertificatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCertificatesResult& DescribeCertificatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("Certificates"))
  {
    Aws::Utils::Array<JsonView> certificatesJsonList = jsonValue.GetArray("Certificates");
    for(unsigned certificatesIndex = 0; certificatesIndex < certificatesJsonList.GetLength(); ++certificatesIndex)
    {
      m_certificates.push_back(certificatesJsonList[certificatesIndex].AsObject());
    }
  }



  return *this;
}
