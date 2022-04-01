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
  enum class FindingType
  {
    NOT_SET,
    SensitiveData_S3Object_Multiple,
    SensitiveData_S3Object_Financial,
    SensitiveData_S3Object_Personal,
    SensitiveData_S3Object_Credentials,
    SensitiveData_S3Object_CustomIdentifier,
    Policy_IAMUser_S3BucketPublic,
    Policy_IAMUser_S3BucketSharedExternally,
    Policy_IAMUser_S3BucketReplicatedExternally,
    Policy_IAMUser_S3BucketEncryptionDisabled,
    Policy_IAMUser_S3BlockPublicAccessDisabled
  };

namespace FindingTypeMapper
{
AWS_MACIE2_API FindingType GetFindingTypeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForFindingType(FindingType value);
} // namespace FindingTypeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
