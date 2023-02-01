/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{
  enum class OptionState
  {
    NOT_SET,
    RequiresIndexDocuments,
    Processing,
    Active,
    FailedToValidate
  };

namespace OptionStateMapper
{
AWS_CLOUDSEARCH_API OptionState GetOptionStateForName(const Aws::String& name);

AWS_CLOUDSEARCH_API Aws::String GetNameForOptionState(OptionState value);
} // namespace OptionStateMapper
} // namespace Model
} // namespace CloudSearch
} // namespace Aws
