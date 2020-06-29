/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class RepoUpgradeOnBoot
  {
    NOT_SET,
    SECURITY,
    NONE
  };

namespace RepoUpgradeOnBootMapper
{
AWS_EMR_API RepoUpgradeOnBoot GetRepoUpgradeOnBootForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForRepoUpgradeOnBoot(RepoUpgradeOnBoot value);
} // namespace RepoUpgradeOnBootMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
