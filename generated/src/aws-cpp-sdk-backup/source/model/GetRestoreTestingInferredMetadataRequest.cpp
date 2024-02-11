/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/GetRestoreTestingInferredMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetRestoreTestingInferredMetadataRequest::GetRestoreTestingInferredMetadataRequest() : 
    m_backupVaultAccountIdHasBeenSet(false),
    m_backupVaultNameHasBeenSet(false),
    m_recoveryPointArnHasBeenSet(false)
{
}

Aws::String GetRestoreTestingInferredMetadataRequest::SerializePayload() const
{
  return {};
}

void GetRestoreTestingInferredMetadataRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_backupVaultAccountIdHasBeenSet)
    {
      ss << m_backupVaultAccountId;
      uri.AddQueryStringParameter("BackupVaultAccountId", ss.str());
      ss.str("");
    }

    if(m_backupVaultNameHasBeenSet)
    {
      ss << m_backupVaultName;
      uri.AddQueryStringParameter("BackupVaultName", ss.str());
      ss.str("");
    }

    if(m_recoveryPointArnHasBeenSet)
    {
      ss << m_recoveryPointArn;
      uri.AddQueryStringParameter("RecoveryPointArn", ss.str());
      ss.str("");
    }

}



