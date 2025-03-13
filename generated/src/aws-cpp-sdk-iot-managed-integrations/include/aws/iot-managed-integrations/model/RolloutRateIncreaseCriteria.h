/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure representing rollout config criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/RolloutRateIncreaseCriteria">AWS
   * API Reference</a></p>
   */
  class RolloutRateIncreaseCriteria
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API RolloutRateIncreaseCriteria() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API RolloutRateIncreaseCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API RolloutRateIncreaseCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The threshold for number of notified things that will initiate the increase
     * in rate of rollout.</p>
     */
    inline int GetNumberOfNotifiedThings() const { return m_numberOfNotifiedThings; }
    inline bool NumberOfNotifiedThingsHasBeenSet() const { return m_numberOfNotifiedThingsHasBeenSet; }
    inline void SetNumberOfNotifiedThings(int value) { m_numberOfNotifiedThingsHasBeenSet = true; m_numberOfNotifiedThings = value; }
    inline RolloutRateIncreaseCriteria& WithNumberOfNotifiedThings(int value) { SetNumberOfNotifiedThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold for number of succeeded things that will initiate the increase
     * in rate of rollout.</p>
     */
    inline int GetNumberOfSucceededThings() const { return m_numberOfSucceededThings; }
    inline bool NumberOfSucceededThingsHasBeenSet() const { return m_numberOfSucceededThingsHasBeenSet; }
    inline void SetNumberOfSucceededThings(int value) { m_numberOfSucceededThingsHasBeenSet = true; m_numberOfSucceededThings = value; }
    inline RolloutRateIncreaseCriteria& WithNumberOfSucceededThings(int value) { SetNumberOfSucceededThings(value); return *this;}
    ///@}
  private:

    int m_numberOfNotifiedThings{0};
    bool m_numberOfNotifiedThingsHasBeenSet = false;

    int m_numberOfSucceededThings{0};
    bool m_numberOfSucceededThingsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
