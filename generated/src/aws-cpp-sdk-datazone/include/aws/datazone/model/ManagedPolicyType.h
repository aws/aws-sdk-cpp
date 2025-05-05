/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class ManagedPolicyType
  {
    NOT_SET,
    CREATE_DOMAIN_UNIT,
    OVERRIDE_DOMAIN_UNIT_OWNERS,
    ADD_TO_PROJECT_MEMBER_POOL,
    OVERRIDE_PROJECT_OWNERS,
    CREATE_GLOSSARY,
    CREATE_FORM_TYPE,
    CREATE_ASSET_TYPE,
    CREATE_PROJECT,
    CREATE_ENVIRONMENT_PROFILE,
    DELEGATE_CREATE_ENVIRONMENT_PROFILE,
    CREATE_ENVIRONMENT,
    CREATE_ENVIRONMENT_FROM_BLUEPRINT,
    CREATE_PROJECT_FROM_PROJECT_PROFILE,
    USE_ASSET_TYPE
  };

namespace ManagedPolicyTypeMapper
{
AWS_DATAZONE_API ManagedPolicyType GetManagedPolicyTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForManagedPolicyType(ManagedPolicyType value);
} // namespace ManagedPolicyTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
