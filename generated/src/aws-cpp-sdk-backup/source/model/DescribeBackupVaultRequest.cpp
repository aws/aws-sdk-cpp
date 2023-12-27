/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeBackupVaultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeBackupVaultRequest::DescribeBackupVaultRequest() : 
    m_backupVaultNameHasBeenSet(false),
    m_backupVaultAccountIdHasBeenSet(false)
{
}

Aws::String DescribeBackupVaultRequest::SerializePayload() const
{
  return {};
}

void DescribeBackupVaultRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_backupVaultAccountIdHasBeenSet)
    {
      ss << m_backupVaultAccountId;
      uri.AddQueryStringParameter("backupVaultAccountId", ss.str());
      ss.str("");
    }

}



