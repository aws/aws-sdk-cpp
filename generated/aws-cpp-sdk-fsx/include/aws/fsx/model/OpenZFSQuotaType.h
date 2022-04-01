/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class OpenZFSQuotaType
  {
    NOT_SET,
    USER,
    GROUP
  };

namespace OpenZFSQuotaTypeMapper
{
AWS_FSX_API OpenZFSQuotaType GetOpenZFSQuotaTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForOpenZFSQuotaType(OpenZFSQuotaType value);
} // namespace OpenZFSQuotaTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
