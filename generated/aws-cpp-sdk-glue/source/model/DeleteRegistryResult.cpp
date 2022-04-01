/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DeleteRegistryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteRegistryResult::DeleteRegistryResult() : 
    m_status(RegistryStatus::NOT_SET)
{
}

DeleteRegistryResult::DeleteRegistryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(RegistryStatus::NOT_SET)
{
  *this = result;
}

DeleteRegistryResult& DeleteRegistryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");

  }

  if(jsonValue.ValueExists("RegistryArn"))
  {
    m_registryArn = jsonValue.GetString("RegistryArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RegistryStatusMapper::GetRegistryStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
