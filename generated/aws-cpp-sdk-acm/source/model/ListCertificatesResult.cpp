﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ListCertificatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCertificatesResult::ListCertificatesResult()
{
}

ListCertificatesResult::ListCertificatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCertificatesResult& ListCertificatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("CertificateSummaryList"))
  {
    Array<JsonView> certificateSummaryListJsonList = jsonValue.GetArray("CertificateSummaryList");
    for(unsigned certificateSummaryListIndex = 0; certificateSummaryListIndex < certificateSummaryListJsonList.GetLength(); ++certificateSummaryListIndex)
    {
      m_certificateSummaryList.push_back(certificateSummaryListJsonList[certificateSummaryListIndex].AsObject());
    }
  }



  return *this;
}
