﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ListCertificatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CertificateSummaryList"))
  {
    Aws::Utils::Array<JsonView> certificateSummaryListJsonList = jsonValue.GetArray("CertificateSummaryList");
    for(unsigned certificateSummaryListIndex = 0; certificateSummaryListIndex < certificateSummaryListJsonList.GetLength(); ++certificateSummaryListIndex)
    {
      m_certificateSummaryList.push_back(certificateSummaryListJsonList[certificateSummaryListIndex].AsObject());
    }
    m_certificateSummaryListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
