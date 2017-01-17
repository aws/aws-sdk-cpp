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
  enum class BackupType
  {
    NOT_SET,
    AUTOMATED,
    MANUAL
  };

namespace BackupTypeMapper
{
AWS_OPSWORKSCM_API BackupType GetBackupTypeForName(const Aws::String& name);

AWS_OPSWORKSCM_API Aws::String GetNameForBackupType(BackupType value);
} // namespace BackupTypeMapper
} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
