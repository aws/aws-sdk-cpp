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
   * <p> The connector-specific profile properties required by Google Analytics.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/GoogleAnalyticsConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class GoogleAnalyticsConnectorProfileProperties
  {
  public:
    AWS_APPFLOW_API GoogleAnalyticsConnectorProfileProperties() = default;
    AWS_APPFLOW_API GoogleAnalyticsConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API GoogleAnalyticsConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
