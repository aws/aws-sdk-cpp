﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListCertificateProvidersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCertificateProvidersResult::ListCertificateProvidersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCertificateProvidersResult& ListCertificateProvidersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("certificateProviders"))
  {
    Aws::Utils::Array<JsonView> certificateProvidersJsonList = jsonValue.GetArray("certificateProviders");
    for(unsigned certificateProvidersIndex = 0; certificateProvidersIndex < certificateProvidersJsonList.GetLength(); ++certificateProvidersIndex)
    {
      m_certificateProviders.push_back(certificateProvidersJsonList[certificateProvidersIndex].AsObject());
    }
    m_certificateProvidersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
