/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppConfig
{
namespace Model
{
  enum class ReplicateTo
  {
    NOT_SET,
    NONE,
    SSM_DOCUMENT
  };

namespace ReplicateToMapper
{
AWS_APPCONFIG_API ReplicateTo GetReplicateToForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForReplicateTo(ReplicateTo value);
} // namespace ReplicateToMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
