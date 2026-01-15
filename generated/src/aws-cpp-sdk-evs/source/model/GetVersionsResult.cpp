/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/evs/model/GetVersionsResult.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetVersionsResult::GetVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetVersionsResult& GetVersionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("vcfVersions")) {
    Aws::Utils::Array<JsonView> vcfVersionsJsonList = jsonValue.GetArray("vcfVersions");
    for (unsigned vcfVersionsIndex = 0; vcfVersionsIndex < vcfVersionsJsonList.GetLength(); ++vcfVersionsIndex) {
      m_vcfVersions.push_back(vcfVersionsJsonList[vcfVersionsIndex].AsObject());
    }
    m_vcfVersionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceTypeEsxVersions")) {
    Aws::Utils::Array<JsonView> instanceTypeEsxVersionsJsonList = jsonValue.GetArray("instanceTypeEsxVersions");
    for (unsigned instanceTypeEsxVersionsIndex = 0; instanceTypeEsxVersionsIndex < instanceTypeEsxVersionsJsonList.GetLength();
         ++instanceTypeEsxVersionsIndex) {
      m_instanceTypeEsxVersions.push_back(instanceTypeEsxVersionsJsonList[instanceTypeEsxVersionsIndex].AsObject());
    }
    m_instanceTypeEsxVersionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
