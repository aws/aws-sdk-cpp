/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{
  enum class UpdateAction
  {
    NOT_SET,
    ADD,
    REVOKE
  };

namespace UpdateActionMapper
{
AWS_MANAGEDGRAFANA_API UpdateAction GetUpdateActionForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForUpdateAction(UpdateAction value);
} // namespace UpdateActionMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
