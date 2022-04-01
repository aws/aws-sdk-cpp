/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class AgreementStatusType
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace AgreementStatusTypeMapper
{
AWS_TRANSFER_API AgreementStatusType GetAgreementStatusTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForAgreementStatusType(AgreementStatusType value);
} // namespace AgreementStatusTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
