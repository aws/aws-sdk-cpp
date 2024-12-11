/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Artifact
{
namespace Model
{
  enum class CustomerAgreementState
  {
    NOT_SET,
    ACTIVE,
    CUSTOMER_TERMINATED,
    AWS_TERMINATED
  };

namespace CustomerAgreementStateMapper
{
AWS_ARTIFACT_API CustomerAgreementState GetCustomerAgreementStateForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForCustomerAgreementState(CustomerAgreementState value);
} // namespace CustomerAgreementStateMapper
} // namespace Model
} // namespace Artifact
} // namespace Aws
