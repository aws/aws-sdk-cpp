/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class AllowsUnencryptedObjectUploads
  {
    NOT_SET,
    TRUE,
    FALSE,
    UNKNOWN
  };

namespace AllowsUnencryptedObjectUploadsMapper
{
AWS_MACIE2_API AllowsUnencryptedObjectUploads GetAllowsUnencryptedObjectUploadsForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForAllowsUnencryptedObjectUploads(AllowsUnencryptedObjectUploads value);
} // namespace AllowsUnencryptedObjectUploadsMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
