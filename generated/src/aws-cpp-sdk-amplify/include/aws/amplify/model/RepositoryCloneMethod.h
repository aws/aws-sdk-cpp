/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class RepositoryCloneMethod
  {
    NOT_SET,
    SSH,
    TOKEN,
    SIGV4
  };

namespace RepositoryCloneMethodMapper
{
AWS_AMPLIFY_API RepositoryCloneMethod GetRepositoryCloneMethodForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForRepositoryCloneMethod(RepositoryCloneMethod value);
} // namespace RepositoryCloneMethodMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
