/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class TransitionStorageClass
  {
    NOT_SET,
    GLACIER,
    STANDARD_IA,
    ONEZONE_IA,
    INTELLIGENT_TIERING,
    DEEP_ARCHIVE
  };

namespace TransitionStorageClassMapper
{
AWS_S3CONTROL_API TransitionStorageClass GetTransitionStorageClassForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForTransitionStorageClass(TransitionStorageClass value);
} // namespace TransitionStorageClassMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
