/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class ShareStatusType
  {
    NOT_SET,
    SUCCESS,
    FAILURE
  };

namespace ShareStatusTypeMapper
{
AWS_WORKDOCS_API ShareStatusType GetShareStatusTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForShareStatusType(ShareStatusType value);
} // namespace ShareStatusTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
