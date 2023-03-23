/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{
  enum class ExpirationCriterion
  {
    NOT_SET,
    CREATED_TIMESTAMP
  };

namespace ExpirationCriterionMapper
{
AWS_CHIMESDKIDENTITY_API ExpirationCriterion GetExpirationCriterionForName(const Aws::String& name);

AWS_CHIMESDKIDENTITY_API Aws::String GetNameForExpirationCriterion(ExpirationCriterion value);
} // namespace ExpirationCriterionMapper
} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
