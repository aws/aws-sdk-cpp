/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{
  enum class VendorName
  {
    NOT_SET,
    GitHub,
    GitLab,
    NativeS3
  };

namespace VendorNameMapper
{
AWS_CODEGURUREVIEWER_API VendorName GetVendorNameForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForVendorName(VendorName value);
} // namespace VendorNameMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
