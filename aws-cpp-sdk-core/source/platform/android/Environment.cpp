/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/platform/Environment.h>

namespace Aws
{
namespace Environment
{

Aws::String GetEnv(const char* name)
{
   auto value = getenv(name);
   return Aws::String( value ? value : "" );
}

} // namespace Environment
} // namespace Aws
