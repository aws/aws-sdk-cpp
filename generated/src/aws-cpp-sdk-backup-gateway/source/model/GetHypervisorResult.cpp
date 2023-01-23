/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/GetHypervisorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetHypervisorResult::GetHypervisorResult()
{
}

GetHypervisorResult::GetHypervisorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetHypervisorResult& GetHypervisorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Hypervisor"))
  {
    m_hypervisor = jsonValue.GetObject("Hypervisor");

  }



  return *this;
}
