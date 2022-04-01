/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class ExtensionStatus
  {
    NOT_SET,
    EXTENDED,
    EXTENSION_ERROR,
    NOT_EXTENDED
  };

namespace ExtensionStatusMapper
{
AWS_DRS_API ExtensionStatus GetExtensionStatusForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForExtensionStatus(ExtensionStatus value);
} // namespace ExtensionStatusMapper
} // namespace Model
} // namespace drs
} // namespace Aws
