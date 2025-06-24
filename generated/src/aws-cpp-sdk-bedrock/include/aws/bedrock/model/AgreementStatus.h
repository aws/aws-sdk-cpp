/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class AgreementStatus
  {
    NOT_SET,
    AVAILABLE,
    PENDING,
    NOT_AVAILABLE,
    ERROR_
  };

namespace AgreementStatusMapper
{
AWS_BEDROCK_API AgreementStatus GetAgreementStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAgreementStatus(AgreementStatus value);
} // namespace AgreementStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
