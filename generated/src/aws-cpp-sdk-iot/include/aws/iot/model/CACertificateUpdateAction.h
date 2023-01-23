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
  enum class CACertificateUpdateAction
  {
    NOT_SET,
    DEACTIVATE
  };

namespace CACertificateUpdateActionMapper
{
AWS_IOT_API CACertificateUpdateAction GetCACertificateUpdateActionForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForCACertificateUpdateAction(CACertificateUpdateAction value);
} // namespace CACertificateUpdateActionMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
