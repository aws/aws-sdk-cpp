/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/PurchaseProvisionedCapacityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PurchaseProvisionedCapacityResult::PurchaseProvisionedCapacityResult()
{
}

PurchaseProvisionedCapacityResult::PurchaseProvisionedCapacityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PurchaseProvisionedCapacityResult& PurchaseProvisionedCapacityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& capacityIdIter = headers.find("x-amz-capacity-id");
  if(capacityIdIter != headers.end())
  {
    m_capacityId = capacityIdIter->second;
  }


  return *this;
}
