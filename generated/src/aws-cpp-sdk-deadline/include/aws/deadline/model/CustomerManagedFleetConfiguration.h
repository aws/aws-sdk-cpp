/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AutoScalingMode.h>
#include <aws/deadline/model/CustomerManagedWorkerCapabilities.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a customer managed fleet configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CustomerManagedFleetConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomerManagedFleetConfiguration
  {
  public:
    AWS_DEADLINE_API CustomerManagedFleetConfiguration() = default;
    AWS_DEADLINE_API CustomerManagedFleetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API CustomerManagedFleetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Auto Scaling mode for the customer managed fleet configuration.</p>
     */
    inline AutoScalingMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(AutoScalingMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline CustomerManagedFleetConfiguration& WithMode(AutoScalingMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker capabilities for a customer managed fleet configuration.</p>
     */
    inline const CustomerManagedWorkerCapabilities& GetWorkerCapabilities() const { return m_workerCapabilities; }
    inline bool WorkerCapabilitiesHasBeenSet() const { return m_workerCapabilitiesHasBeenSet; }
    template<typename WorkerCapabilitiesT = CustomerManagedWorkerCapabilities>
    void SetWorkerCapabilities(WorkerCapabilitiesT&& value) { m_workerCapabilitiesHasBeenSet = true; m_workerCapabilities = std::forward<WorkerCapabilitiesT>(value); }
    template<typename WorkerCapabilitiesT = CustomerManagedWorkerCapabilities>
    CustomerManagedFleetConfiguration& WithWorkerCapabilities(WorkerCapabilitiesT&& value) { SetWorkerCapabilities(std::forward<WorkerCapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage profile ID.</p>
     */
    inline const Aws::String& GetStorageProfileId() const { return m_storageProfileId; }
    inline bool StorageProfileIdHasBeenSet() const { return m_storageProfileIdHasBeenSet; }
    template<typename StorageProfileIdT = Aws::String>
    void SetStorageProfileId(StorageProfileIdT&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::forward<StorageProfileIdT>(value); }
    template<typename StorageProfileIdT = Aws::String>
    CustomerManagedFleetConfiguration& WithStorageProfileId(StorageProfileIdT&& value) { SetStorageProfileId(std::forward<StorageProfileIdT>(value)); return *this;}
    ///@}
  private:

    AutoScalingMode m_mode{AutoScalingMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    CustomerManagedWorkerCapabilities m_workerCapabilities;
    bool m_workerCapabilitiesHasBeenSet = false;

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
