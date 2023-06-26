/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{
  enum class PersistentAppUI
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace PersistentAppUIMapper
{
AWS_EMRCONTAINERS_API PersistentAppUI GetPersistentAppUIForName(const Aws::String& name);

AWS_EMRCONTAINERS_API Aws::String GetNameForPersistentAppUI(PersistentAppUI value);
} // namespace PersistentAppUIMapper
} // namespace Model
} // namespace EMRContainers
} // namespace Aws
