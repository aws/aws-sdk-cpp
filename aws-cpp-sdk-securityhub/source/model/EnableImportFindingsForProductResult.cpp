/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/EnableImportFindingsForProductResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EnableImportFindingsForProductResult::EnableImportFindingsForProductResult()
{
}

EnableImportFindingsForProductResult::EnableImportFindingsForProductResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

EnableImportFindingsForProductResult& EnableImportFindingsForProductResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProductSubscriptionArn"))
  {
    m_productSubscriptionArn = jsonValue.GetString("ProductSubscriptionArn");

  }



  return *this;
}
