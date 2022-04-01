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
  enum class SMBSecurityStrategy
  {
    NOT_SET,
    ClientSpecified,
    MandatorySigning,
    MandatoryEncryption
  };

namespace SMBSecurityStrategyMapper
{
AWS_STORAGEGATEWAY_API SMBSecurityStrategy GetSMBSecurityStrategyForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForSMBSecurityStrategy(SMBSecurityStrategy value);
} // namespace SMBSecurityStrategyMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
