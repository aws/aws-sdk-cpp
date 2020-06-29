/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/DisableOrganizationAdminAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisableOrganizationAdminAccountResult::DisableOrganizationAdminAccountResult()
{
}

DisableOrganizationAdminAccountResult::DisableOrganizationAdminAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisableOrganizationAdminAccountResult& DisableOrganizationAdminAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  return *this;
}
