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
  enum class FileCacheType
  {
    NOT_SET,
    LUSTRE
  };

namespace FileCacheTypeMapper
{
AWS_FSX_API FileCacheType GetFileCacheTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForFileCacheType(FileCacheType value);
} // namespace FileCacheTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
