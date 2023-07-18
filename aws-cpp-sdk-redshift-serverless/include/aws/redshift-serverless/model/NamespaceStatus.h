/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{
  enum class NamespaceStatus
  {
    NOT_SET,
    AVAILABLE,
    MODIFYING,
    DELETING
  };

namespace NamespaceStatusMapper
{
AWS_REDSHIFTSERVERLESS_API NamespaceStatus GetNamespaceStatusForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForNamespaceStatus(NamespaceStatus value);
} // namespace NamespaceStatusMapper
} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
