/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/AssociateResourceSharePermissionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateResourceSharePermissionResult::AssociateResourceSharePermissionResult() : 
    m_returnValue(false)
{
}

AssociateResourceSharePermissionResult::AssociateResourceSharePermissionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_returnValue(false)
{
  *this = result;
}

AssociateResourceSharePermissionResult& AssociateResourceSharePermissionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("returnValue"))
  {
    m_returnValue = jsonValue.GetBool("returnValue");

  }

  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");

  }



  return *this;
}
