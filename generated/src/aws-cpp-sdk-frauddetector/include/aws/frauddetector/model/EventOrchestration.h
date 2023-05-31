/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>

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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The event orchestration status. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/EventOrchestration">AWS
   * API Reference</a></p>
   */
  class EventOrchestration
  {
  public:
    AWS_FRAUDDETECTOR_API EventOrchestration();
    AWS_FRAUDDETECTOR_API EventOrchestration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EventOrchestration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies if event orchestration is enabled through Amazon EventBridge.</p>
     */
    inline bool GetEventBridgeEnabled() const{ return m_eventBridgeEnabled; }

    /**
     * <p>Specifies if event orchestration is enabled through Amazon EventBridge.</p>
     */
    inline bool EventBridgeEnabledHasBeenSet() const { return m_eventBridgeEnabledHasBeenSet; }

    /**
     * <p>Specifies if event orchestration is enabled through Amazon EventBridge.</p>
     */
    inline void SetEventBridgeEnabled(bool value) { m_eventBridgeEnabledHasBeenSet = true; m_eventBridgeEnabled = value; }

    /**
     * <p>Specifies if event orchestration is enabled through Amazon EventBridge.</p>
     */
    inline EventOrchestration& WithEventBridgeEnabled(bool value) { SetEventBridgeEnabled(value); return *this;}

  private:

    bool m_eventBridgeEnabled;
    bool m_eventBridgeEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
