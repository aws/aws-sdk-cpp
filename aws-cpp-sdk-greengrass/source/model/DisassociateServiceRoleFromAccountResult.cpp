/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/DisassociateServiceRoleFromAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateServiceRoleFromAccountResult::DisassociateServiceRoleFromAccountResult()
{
}

DisassociateServiceRoleFromAccountResult::DisassociateServiceRoleFromAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisassociateServiceRoleFromAccountResult& DisassociateServiceRoleFromAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DisassociatedAt"))
  {
    m_disassociatedAt = jsonValue.GetString("DisassociatedAt");

  }



  return *this;
}
