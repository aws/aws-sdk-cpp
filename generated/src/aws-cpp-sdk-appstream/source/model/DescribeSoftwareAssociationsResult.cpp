/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeSoftwareAssociationsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSoftwareAssociationsResult::DescribeSoftwareAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DescribeSoftwareAssociationsResult& DescribeSoftwareAssociationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AssociatedResource")) {
    m_associatedResource = jsonValue.GetString("AssociatedResource");
    m_associatedResourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SoftwareAssociations")) {
    Aws::Utils::Array<JsonView> softwareAssociationsJsonList = jsonValue.GetArray("SoftwareAssociations");
    for (unsigned softwareAssociationsIndex = 0; softwareAssociationsIndex < softwareAssociationsJsonList.GetLength();
         ++softwareAssociationsIndex) {
      m_softwareAssociations.push_back(softwareAssociationsJsonList[softwareAssociationsIndex].AsObject());
    }
    m_softwareAssociationsHasBeenSet = true;
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
