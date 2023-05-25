/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class FederationMode
  {
    NOT_SET,
    FEDERATED,
    LOCAL
  };

namespace FederationModeMapper
{
AWS_FINSPACE_API FederationMode GetFederationModeForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForFederationMode(FederationMode value);
} // namespace FederationModeMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
