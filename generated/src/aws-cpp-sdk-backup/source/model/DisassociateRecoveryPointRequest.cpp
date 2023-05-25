/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DisassociateRecoveryPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateRecoveryPointRequest::DisassociateRecoveryPointRequest() : 
    m_backupVaultNameHasBeenSet(false),
    m_recoveryPointArnHasBeenSet(false)
{
}

Aws::String DisassociateRecoveryPointRequest::SerializePayload() const
{
  return {};
}




