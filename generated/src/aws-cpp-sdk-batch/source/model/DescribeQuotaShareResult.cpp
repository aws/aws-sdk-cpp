/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DescribeQuotaShareResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeQuotaShareResult::DescribeQuotaShareResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeQuotaShareResult& DescribeQuotaShareResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("quotaShareName")) {
    m_quotaShareName = jsonValue.GetString("quotaShareName");
    m_quotaShareNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quotaShareArn")) {
    m_quotaShareArn = jsonValue.GetString("quotaShareArn");
    m_quotaShareArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobQueueArn")) {
    m_jobQueueArn = jsonValue.GetString("jobQueueArn");
    m_jobQueueArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityLimits")) {
    Aws::Utils::Array<JsonView> capacityLimitsJsonList = jsonValue.GetArray("capacityLimits");
    for (unsigned capacityLimitsIndex = 0; capacityLimitsIndex < capacityLimitsJsonList.GetLength(); ++capacityLimitsIndex) {
      m_capacityLimits.push_back(capacityLimitsJsonList[capacityLimitsIndex].AsObject());
    }
    m_capacityLimitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceSharingConfiguration")) {
    m_resourceSharingConfiguration = jsonValue.GetObject("resourceSharingConfiguration");
    m_resourceSharingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("preemptionConfiguration")) {
    m_preemptionConfiguration = jsonValue.GetObject("preemptionConfiguration");
    m_preemptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = QuotaShareStateMapper::GetQuotaShareStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = QuotaShareStatusMapper::GetQuotaShareStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
