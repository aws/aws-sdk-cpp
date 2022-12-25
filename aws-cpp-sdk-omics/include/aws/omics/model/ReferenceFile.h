/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class ReferenceFile
  {
    NOT_SET,
    SOURCE,
    INDEX
  };

namespace ReferenceFileMapper
{
AWS_OMICS_API ReferenceFile GetReferenceFileForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReferenceFile(ReferenceFile value);
} // namespace ReferenceFileMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
