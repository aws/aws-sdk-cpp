/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/invoicing/model/ListProcurementPortalSuppliersResult.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProcurementPortalSuppliersResult::ListProcurementPortalSuppliersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListProcurementPortalSuppliersResult& ListProcurementPortalSuppliersResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ProcurementPortalSuppliers")) {
    Aws::Utils::Array<JsonView> procurementPortalSuppliersJsonList = jsonValue.GetArray("ProcurementPortalSuppliers");
    for (unsigned procurementPortalSuppliersIndex = 0; procurementPortalSuppliersIndex < procurementPortalSuppliersJsonList.GetLength();
         ++procurementPortalSuppliersIndex) {
      m_procurementPortalSuppliers.push_back(procurementPortalSuppliersJsonList[procurementPortalSuppliersIndex].AsObject());
    }
    m_procurementPortalSuppliersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
