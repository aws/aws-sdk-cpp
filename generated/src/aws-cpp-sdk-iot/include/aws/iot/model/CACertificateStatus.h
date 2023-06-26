/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class CACertificateStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace CACertificateStatusMapper
{
AWS_IOT_API CACertificateStatus GetCACertificateStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForCACertificateStatus(CACertificateStatus value);
} // namespace CACertificateStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
