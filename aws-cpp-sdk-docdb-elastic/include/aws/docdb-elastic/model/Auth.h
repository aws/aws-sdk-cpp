/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{
  enum class Auth
  {
    NOT_SET,
    PLAIN_TEXT,
    SECRET_ARN
  };

namespace AuthMapper
{
AWS_DOCDBELASTIC_API Auth GetAuthForName(const Aws::String& name);

AWS_DOCDBELASTIC_API Aws::String GetNameForAuth(Auth value);
} // namespace AuthMapper
} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
