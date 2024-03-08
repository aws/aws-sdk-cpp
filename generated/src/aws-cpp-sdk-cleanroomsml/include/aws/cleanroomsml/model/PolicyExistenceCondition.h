/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class PolicyExistenceCondition
  {
    NOT_SET,
    POLICY_MUST_EXIST,
    POLICY_MUST_NOT_EXIST
  };

namespace PolicyExistenceConditionMapper
{
AWS_CLEANROOMSML_API PolicyExistenceCondition GetPolicyExistenceConditionForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForPolicyExistenceCondition(PolicyExistenceCondition value);
} // namespace PolicyExistenceConditionMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
