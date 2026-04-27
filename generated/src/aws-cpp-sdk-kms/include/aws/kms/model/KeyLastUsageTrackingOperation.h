/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/KMS_EXPORTS.h>

namespace Aws {
namespace KMS {
namespace Model {
enum class KeyLastUsageTrackingOperation {
  NOT_SET,
  Decrypt,
  DeriveSharedSecret,
  Encrypt,
  GenerateDataKey,
  GenerateDataKeyPair,
  GenerateDataKeyPairWithoutPlaintext,
  GenerateDataKeyWithoutPlaintext,
  GenerateMac,
  ReEncrypt,
  Sign,
  Verify,
  VerifyMac
};

namespace KeyLastUsageTrackingOperationMapper {
AWS_KMS_API KeyLastUsageTrackingOperation GetKeyLastUsageTrackingOperationForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForKeyLastUsageTrackingOperation(KeyLastUsageTrackingOperation value);
}  // namespace KeyLastUsageTrackingOperationMapper
}  // namespace Model
}  // namespace KMS
}  // namespace Aws
