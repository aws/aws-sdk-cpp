/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class PrefixType
  {
    NOT_SET,
    FILENAME,
    PATH,
    PATH_AND_FILENAME
  };

namespace PrefixTypeMapper
{
AWS_APPFLOW_API PrefixType GetPrefixTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForPrefixType(PrefixType value);
} // namespace PrefixTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
