/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/HandlerBehavior.h>
#include <aws/appsync/model/Integration.h>
#include <utility>

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
namespace AppSync
{
namespace Model
{

  /**
   * <p>The configuration for a handler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/HandlerConfig">AWS
   * API Reference</a></p>
   */
  class HandlerConfig
  {
  public:
    AWS_APPSYNC_API HandlerConfig() = default;
    AWS_APPSYNC_API HandlerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API HandlerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The behavior for the handler.</p>
     */
    inline HandlerBehavior GetBehavior() const { return m_behavior; }
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
    inline void SetBehavior(HandlerBehavior value) { m_behaviorHasBeenSet = true; m_behavior = value; }
    inline HandlerConfig& WithBehavior(HandlerBehavior value) { SetBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration data source configuration for the handler.</p>
     */
    inline const Integration& GetIntegration() const { return m_integration; }
    inline bool IntegrationHasBeenSet() const { return m_integrationHasBeenSet; }
    template<typename IntegrationT = Integration>
    void SetIntegration(IntegrationT&& value) { m_integrationHasBeenSet = true; m_integration = std::forward<IntegrationT>(value); }
    template<typename IntegrationT = Integration>
    HandlerConfig& WithIntegration(IntegrationT&& value) { SetIntegration(std::forward<IntegrationT>(value)); return *this;}
    ///@}
  private:

    HandlerBehavior m_behavior{HandlerBehavior::NOT_SET};
    bool m_behaviorHasBeenSet = false;

    Integration m_integration;
    bool m_integrationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
