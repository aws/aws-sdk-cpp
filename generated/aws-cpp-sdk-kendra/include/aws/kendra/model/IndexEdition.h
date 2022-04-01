/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class IndexEdition
  {
    NOT_SET,
    DEVELOPER_EDITION,
    ENTERPRISE_EDITION
  };

namespace IndexEditionMapper
{
AWS_KENDRA_API IndexEdition GetIndexEditionForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForIndexEdition(IndexEdition value);
} // namespace IndexEditionMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
