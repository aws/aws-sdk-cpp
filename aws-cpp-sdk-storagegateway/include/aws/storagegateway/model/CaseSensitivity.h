/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class CaseSensitivity
  {
    NOT_SET,
    ClientSpecified,
    CaseSensitive
  };

namespace CaseSensitivityMapper
{
AWS_STORAGEGATEWAY_API CaseSensitivity GetCaseSensitivityForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForCaseSensitivity(CaseSensitivity value);
} // namespace CaseSensitivityMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
