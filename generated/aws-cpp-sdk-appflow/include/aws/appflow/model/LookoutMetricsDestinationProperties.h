﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when Amazon Lookout for Metrics is used as a
   * destination. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/LookoutMetricsDestinationProperties">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API LookoutMetricsDestinationProperties
  {
  public:
    LookoutMetricsDestinationProperties();
    LookoutMetricsDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    LookoutMetricsDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
