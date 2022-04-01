/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{
  enum class VariableType
  {
    NOT_SET,
    INCIDENT_RECORD_ARN,
    INVOLVED_RESOURCES
  };

namespace VariableTypeMapper
{
AWS_SSMINCIDENTS_API VariableType GetVariableTypeForName(const Aws::String& name);

AWS_SSMINCIDENTS_API Aws::String GetNameForVariableType(VariableType value);
} // namespace VariableTypeMapper
} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
