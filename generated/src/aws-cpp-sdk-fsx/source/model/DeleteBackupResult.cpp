/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteBackupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteBackupResult::DeleteBackupResult() : 
    m_lifecycle(BackupLifecycle::NOT_SET)
{
}

DeleteBackupResult::DeleteBackupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lifecycle(BackupLifecycle::NOT_SET)
{
  *this = result;
}

DeleteBackupResult& DeleteBackupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupId"))
  {
    m_backupId = jsonValue.GetString("BackupId");

  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = BackupLifecycleMapper::GetBackupLifecycleForName(jsonValue.GetString("Lifecycle"));

  }



  return *this;
}
