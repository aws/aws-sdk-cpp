/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/customer-profiles/model/GetStreamForSegmentsResult.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStreamForSegmentsResult::GetStreamForSegmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetStreamForSegmentsResult& GetStreamForSegmentsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AssociatedAt")) {
    m_associatedAt = jsonValue.GetDouble("AssociatedAt");
    m_associatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedSegments")) {
    Aws::Utils::Array<JsonView> associatedSegmentsJsonList = jsonValue.GetArray("AssociatedSegments");
    for (unsigned associatedSegmentsIndex = 0; associatedSegmentsIndex < associatedSegmentsJsonList.GetLength();
         ++associatedSegmentsIndex) {
      m_associatedSegments.push_back(associatedSegmentsJsonList[associatedSegmentsIndex].AsObject());
    }
    m_associatedSegmentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DomainName")) {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationArn")) {
    m_destinationArn = jsonValue.GetString("DestinationArn");
    m_destinationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationRoleArn")) {
    m_destinationRoleArn = jsonValue.GetString("DestinationRoleArn");
    m_destinationRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = EventSubscriptionStateMapper::GetEventSubscriptionStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisassociatedAt")) {
    m_disassociatedAt = jsonValue.GetDouble("DisassociatedAt");
    m_disassociatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
