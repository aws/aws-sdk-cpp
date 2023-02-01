/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/PutHypervisorPropertyMappingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutHypervisorPropertyMappingsResult::PutHypervisorPropertyMappingsResult()
{
}

PutHypervisorPropertyMappingsResult::PutHypervisorPropertyMappingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutHypervisorPropertyMappingsResult& PutHypervisorPropertyMappingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HypervisorArn"))
  {
    m_hypervisorArn = jsonValue.GetString("HypervisorArn");

  }



  return *this;
}
