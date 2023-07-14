﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ImportExport
{
namespace Model
{
  enum class JobType
  {
    NOT_SET,
    Import,
    Export
  };

namespace JobTypeMapper
{
AWS_IMPORTEXPORT_API JobType GetJobTypeForName(const Aws::String& name);

AWS_IMPORTEXPORT_API Aws::String GetNameForJobType(JobType value);
} // namespace JobTypeMapper
} // namespace Model
} // namespace ImportExport
} // namespace Aws
