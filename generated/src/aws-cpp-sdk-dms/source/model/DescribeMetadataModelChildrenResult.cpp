/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dms/model/DescribeMetadataModelChildrenResult.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMetadataModelChildrenResult::DescribeMetadataModelChildrenResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DescribeMetadataModelChildrenResult& DescribeMetadataModelChildrenResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Marker")) {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MetadataModelChildren")) {
    Aws::Utils::Array<JsonView> metadataModelChildrenJsonList = jsonValue.GetArray("MetadataModelChildren");
    for (unsigned metadataModelChildrenIndex = 0; metadataModelChildrenIndex < metadataModelChildrenJsonList.GetLength();
         ++metadataModelChildrenIndex) {
      m_metadataModelChildren.push_back(metadataModelChildrenJsonList[metadataModelChildrenIndex].AsObject());
    }
    m_metadataModelChildrenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
