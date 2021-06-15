/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class KmsGrantOperation
  {
    NOT_SET,
    CreateGrant,
    Decrypt,
    DescribeKey,
    Encrypt,
    GenerateDataKey,
    GenerateDataKeyPair,
    GenerateDataKeyPairWithoutPlaintext,
    GenerateDataKeyWithoutPlaintext,
    GetPublicKey,
    ReEncryptFrom,
    ReEncryptTo,
    RetireGrant,
    Sign,
    Verify
  };

namespace KmsGrantOperationMapper
{
AWS_ACCESSANALYZER_API KmsGrantOperation GetKmsGrantOperationForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForKmsGrantOperation(KmsGrantOperation value);
} // namespace KmsGrantOperationMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
