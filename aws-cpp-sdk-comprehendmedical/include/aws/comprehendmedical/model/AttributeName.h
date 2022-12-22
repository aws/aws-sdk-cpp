/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{
  enum class AttributeName
  {
    NOT_SET,
    SIGN,
    SYMPTOM,
    DIAGNOSIS,
    NEGATION,
    PERTAINS_TO_FAMILY,
    HYPOTHETICAL,
    LOW_CONFIDENCE,
    PAST_HISTORY,
    FUTURE
  };

namespace AttributeNameMapper
{
AWS_COMPREHENDMEDICAL_API AttributeName GetAttributeNameForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForAttributeName(AttributeName value);
} // namespace AttributeNameMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
