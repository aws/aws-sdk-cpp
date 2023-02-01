/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/GetHypervisorPropertyMappingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetHypervisorPropertyMappingsResult::GetHypervisorPropertyMappingsResult()
{
}

GetHypervisorPropertyMappingsResult::GetHypervisorPropertyMappingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetHypervisorPropertyMappingsResult& GetHypervisorPropertyMappingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HypervisorArn"))
  {
    m_hypervisorArn = jsonValue.GetString("HypervisorArn");

  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

  }

  if(jsonValue.ValueExists("VmwareToAwsTagMappings"))
  {
    Aws::Utils::Array<JsonView> vmwareToAwsTagMappingsJsonList = jsonValue.GetArray("VmwareToAwsTagMappings");
    for(unsigned vmwareToAwsTagMappingsIndex = 0; vmwareToAwsTagMappingsIndex < vmwareToAwsTagMappingsJsonList.GetLength(); ++vmwareToAwsTagMappingsIndex)
    {
      m_vmwareToAwsTagMappings.push_back(vmwareToAwsTagMappingsJsonList[vmwareToAwsTagMappingsIndex].AsObject());
    }
  }



  return *this;
}
