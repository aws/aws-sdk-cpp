/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/CreateCoreDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCoreDefinitionResult::CreateCoreDefinitionResult()
{
}

CreateCoreDefinitionResult::CreateCoreDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateCoreDefinitionResult& CreateCoreDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetString("CreationTimestamp");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetString("LastUpdatedTimestamp");

  }

  if(jsonValue.ValueExists("LatestVersion"))
  {
    m_latestVersion = jsonValue.GetString("LatestVersion");

  }

  if(jsonValue.ValueExists("LatestVersionArn"))
  {
    m_latestVersionArn = jsonValue.GetString("LatestVersionArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }



  return *this;
}
