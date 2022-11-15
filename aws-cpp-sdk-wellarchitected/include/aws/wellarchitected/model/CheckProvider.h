/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class CheckProvider
  {
    NOT_SET,
    TRUSTED_ADVISOR
  };

namespace CheckProviderMapper
{
AWS_WELLARCHITECTED_API CheckProvider GetCheckProviderForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForCheckProvider(CheckProvider value);
} // namespace CheckProviderMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
