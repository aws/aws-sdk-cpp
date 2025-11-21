/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ecr/model/DescribeImageSigningStatusResult.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeImageSigningStatusResult::DescribeImageSigningStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeImageSigningStatusResult& DescribeImageSigningStatusResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("repositoryName")) {
    m_repositoryName = jsonValue.GetString("repositoryName");
    m_repositoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageId")) {
    m_imageId = jsonValue.GetObject("imageId");
    m_imageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registryId")) {
    m_registryId = jsonValue.GetString("registryId");
    m_registryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signingStatuses")) {
    Aws::Utils::Array<JsonView> signingStatusesJsonList = jsonValue.GetArray("signingStatuses");
    for (unsigned signingStatusesIndex = 0; signingStatusesIndex < signingStatusesJsonList.GetLength(); ++signingStatusesIndex) {
      m_signingStatuses.push_back(signingStatusesJsonList[signingStatusesIndex].AsObject());
    }
    m_signingStatusesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
