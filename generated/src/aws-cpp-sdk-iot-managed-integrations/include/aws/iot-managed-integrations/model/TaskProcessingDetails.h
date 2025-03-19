/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Details about the over-the-air (OTA) task process.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/TaskProcessingDetails">AWS
   * API Reference</a></p>
   */
  class TaskProcessingDetails
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API TaskProcessingDetails() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API TaskProcessingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API TaskProcessingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of canceled things in an over-the-air (OTA) task.</p>
     */
    inline int GetNumberOfCanceledThings() const { return m_numberOfCanceledThings; }
    inline bool NumberOfCanceledThingsHasBeenSet() const { return m_numberOfCanceledThingsHasBeenSet; }
    inline void SetNumberOfCanceledThings(int value) { m_numberOfCanceledThingsHasBeenSet = true; m_numberOfCanceledThings = value; }
    inline TaskProcessingDetails& WithNumberOfCanceledThings(int value) { SetNumberOfCanceledThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of failed things in an over-the-air (OTA) task.</p>
     */
    inline int GetNumberOfFailedThings() const { return m_numberOfFailedThings; }
    inline bool NumberOfFailedThingsHasBeenSet() const { return m_numberOfFailedThingsHasBeenSet; }
    inline void SetNumberOfFailedThings(int value) { m_numberOfFailedThingsHasBeenSet = true; m_numberOfFailedThings = value; }
    inline TaskProcessingDetails& WithNumberOfFailedThings(int value) { SetNumberOfFailedThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of in progress things in an over-the-air (OTA) task.</p>
     */
    inline int GetNumberOfInProgressThings() const { return m_numberOfInProgressThings; }
    inline bool NumberOfInProgressThingsHasBeenSet() const { return m_numberOfInProgressThingsHasBeenSet; }
    inline void SetNumberOfInProgressThings(int value) { m_numberOfInProgressThingsHasBeenSet = true; m_numberOfInProgressThings = value; }
    inline TaskProcessingDetails& WithNumberOfInProgressThings(int value) { SetNumberOfInProgressThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of queued things in an over-the-air (OTA) task.</p>
     */
    inline int GetNumberOfQueuedThings() const { return m_numberOfQueuedThings; }
    inline bool NumberOfQueuedThingsHasBeenSet() const { return m_numberOfQueuedThingsHasBeenSet; }
    inline void SetNumberOfQueuedThings(int value) { m_numberOfQueuedThingsHasBeenSet = true; m_numberOfQueuedThings = value; }
    inline TaskProcessingDetails& WithNumberOfQueuedThings(int value) { SetNumberOfQueuedThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rejected things in an over-the-air (OTA) task.</p>
     */
    inline int GetNumberOfRejectedThings() const { return m_numberOfRejectedThings; }
    inline bool NumberOfRejectedThingsHasBeenSet() const { return m_numberOfRejectedThingsHasBeenSet; }
    inline void SetNumberOfRejectedThings(int value) { m_numberOfRejectedThingsHasBeenSet = true; m_numberOfRejectedThings = value; }
    inline TaskProcessingDetails& WithNumberOfRejectedThings(int value) { SetNumberOfRejectedThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of removed things in an over-the-air (OTA) task.</p>
     */
    inline int GetNumberOfRemovedThings() const { return m_numberOfRemovedThings; }
    inline bool NumberOfRemovedThingsHasBeenSet() const { return m_numberOfRemovedThingsHasBeenSet; }
    inline void SetNumberOfRemovedThings(int value) { m_numberOfRemovedThingsHasBeenSet = true; m_numberOfRemovedThings = value; }
    inline TaskProcessingDetails& WithNumberOfRemovedThings(int value) { SetNumberOfRemovedThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of succeeded things in an over-the-air (OTA) task.</p>
     */
    inline int GetNumberOfSucceededThings() const { return m_numberOfSucceededThings; }
    inline bool NumberOfSucceededThingsHasBeenSet() const { return m_numberOfSucceededThingsHasBeenSet; }
    inline void SetNumberOfSucceededThings(int value) { m_numberOfSucceededThingsHasBeenSet = true; m_numberOfSucceededThings = value; }
    inline TaskProcessingDetails& WithNumberOfSucceededThings(int value) { SetNumberOfSucceededThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of timed out things in an over-the-air (OTA) task.</p>
     */
    inline int GetNumberOfTimedOutThings() const { return m_numberOfTimedOutThings; }
    inline bool NumberOfTimedOutThingsHasBeenSet() const { return m_numberOfTimedOutThingsHasBeenSet; }
    inline void SetNumberOfTimedOutThings(int value) { m_numberOfTimedOutThingsHasBeenSet = true; m_numberOfTimedOutThings = value; }
    inline TaskProcessingDetails& WithNumberOfTimedOutThings(int value) { SetNumberOfTimedOutThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets of the over-the-air (OTA) task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProcessingTargets() const { return m_processingTargets; }
    inline bool ProcessingTargetsHasBeenSet() const { return m_processingTargetsHasBeenSet; }
    template<typename ProcessingTargetsT = Aws::Vector<Aws::String>>
    void SetProcessingTargets(ProcessingTargetsT&& value) { m_processingTargetsHasBeenSet = true; m_processingTargets = std::forward<ProcessingTargetsT>(value); }
    template<typename ProcessingTargetsT = Aws::Vector<Aws::String>>
    TaskProcessingDetails& WithProcessingTargets(ProcessingTargetsT&& value) { SetProcessingTargets(std::forward<ProcessingTargetsT>(value)); return *this;}
    template<typename ProcessingTargetsT = Aws::String>
    TaskProcessingDetails& AddProcessingTargets(ProcessingTargetsT&& value) { m_processingTargetsHasBeenSet = true; m_processingTargets.emplace_back(std::forward<ProcessingTargetsT>(value)); return *this; }
    ///@}
  private:

    int m_numberOfCanceledThings{0};
    bool m_numberOfCanceledThingsHasBeenSet = false;

    int m_numberOfFailedThings{0};
    bool m_numberOfFailedThingsHasBeenSet = false;

    int m_numberOfInProgressThings{0};
    bool m_numberOfInProgressThingsHasBeenSet = false;

    int m_numberOfQueuedThings{0};
    bool m_numberOfQueuedThingsHasBeenSet = false;

    int m_numberOfRejectedThings{0};
    bool m_numberOfRejectedThingsHasBeenSet = false;

    int m_numberOfRemovedThings{0};
    bool m_numberOfRemovedThingsHasBeenSet = false;

    int m_numberOfSucceededThings{0};
    bool m_numberOfSucceededThingsHasBeenSet = false;

    int m_numberOfTimedOutThings{0};
    bool m_numberOfTimedOutThingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_processingTargets;
    bool m_processingTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
