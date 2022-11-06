/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetDefaultRetentionPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDefaultRetentionPolicyResult::GetDefaultRetentionPolicyResult()
{
}

GetDefaultRetentionPolicyResult::GetDefaultRetentionPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDefaultRetentionPolicyResult& GetDefaultRetentionPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("FolderConfigurations"))
  {
    Aws::Utils::Array<JsonView> folderConfigurationsJsonList = jsonValue.GetArray("FolderConfigurations");
    for(unsigned folderConfigurationsIndex = 0; folderConfigurationsIndex < folderConfigurationsJsonList.GetLength(); ++folderConfigurationsIndex)
    {
      m_folderConfigurations.push_back(folderConfigurationsJsonList[folderConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
