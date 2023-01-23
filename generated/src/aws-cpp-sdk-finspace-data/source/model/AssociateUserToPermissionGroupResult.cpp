/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/AssociateUserToPermissionGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateUserToPermissionGroupResult::AssociateUserToPermissionGroupResult() : 
    m_statusCode(0)
{
}

AssociateUserToPermissionGroupResult::AssociateUserToPermissionGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_statusCode(0)
{
  *this = result;
}

AssociateUserToPermissionGroupResult& AssociateUserToPermissionGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  m_statusCode = static_cast<int>(result.GetResponseCode());

  return *this;
}
