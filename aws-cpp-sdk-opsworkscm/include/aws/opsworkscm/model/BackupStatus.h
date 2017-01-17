﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{
  enum class BackupStatus
  {
    NOT_SET,
    IN_PROGRESS,
    OK,
    FAILED,
    DELETING
  };

namespace BackupStatusMapper
{
AWS_OPSWORKSCM_API BackupStatus GetBackupStatusForName(const Aws::String& name);

AWS_OPSWORKSCM_API Aws::String GetNameForBackupStatus(BackupStatus value);
} // namespace BackupStatusMapper
} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
