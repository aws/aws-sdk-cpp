/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class AmplitudeConnectorOperator
  {
    NOT_SET,
    BETWEEN
  };

namespace AmplitudeConnectorOperatorMapper
{
AWS_APPFLOW_API AmplitudeConnectorOperator GetAmplitudeConnectorOperatorForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForAmplitudeConnectorOperator(AmplitudeConnectorOperator value);
} // namespace AmplitudeConnectorOperatorMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
