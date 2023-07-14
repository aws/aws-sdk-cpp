/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/UpgradeAppliedSchemaResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpgradeAppliedSchemaResult::UpgradeAppliedSchemaResult()
{
}

UpgradeAppliedSchemaResult::UpgradeAppliedSchemaResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpgradeAppliedSchemaResult& UpgradeAppliedSchemaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UpgradedSchemaArn"))
  {
    m_upgradedSchemaArn = jsonValue.GetString("UpgradedSchemaArn");

  }

  if(jsonValue.ValueExists("DirectoryArn"))
  {
    m_directoryArn = jsonValue.GetString("DirectoryArn");

  }



  return *this;
}
