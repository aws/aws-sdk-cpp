/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AutoScalingMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/CustomerManagedWorkerCapabilities.h>
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
    AWS_DEADLINE_API CustomerManagedFleetConfiguration();
    AWS_DEADLINE_API CustomerManagedFleetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API CustomerManagedFleetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Auto Scaling mode for the customer managed fleet configuration.</p>
     */
    inline const AutoScalingMode& GetMode() const{ return m_mode; }

    /**
     * <p>The Auto Scaling mode for the customer managed fleet configuration.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The Auto Scaling mode for the customer managed fleet configuration.</p>
     */
    inline void SetMode(const AutoScalingMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The Auto Scaling mode for the customer managed fleet configuration.</p>
     */
    inline void SetMode(AutoScalingMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The Auto Scaling mode for the customer managed fleet configuration.</p>
     */
    inline CustomerManagedFleetConfiguration& WithMode(const AutoScalingMode& value) { SetMode(value); return *this;}

    /**
     * <p>The Auto Scaling mode for the customer managed fleet configuration.</p>
     */
    inline CustomerManagedFleetConfiguration& WithMode(AutoScalingMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The storage profile ID.</p>
     */
    inline const Aws::String& GetStorageProfileId() const{ return m_storageProfileId; }

    /**
     * <p>The storage profile ID.</p>
     */
    inline bool StorageProfileIdHasBeenSet() const { return m_storageProfileIdHasBeenSet; }

    /**
     * <p>The storage profile ID.</p>
     */
    inline void SetStorageProfileId(const Aws::String& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = value; }

    /**
     * <p>The storage profile ID.</p>
     */
    inline void SetStorageProfileId(Aws::String&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::move(value); }

    /**
     * <p>The storage profile ID.</p>
     */
    inline void SetStorageProfileId(const char* value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId.assign(value); }

    /**
     * <p>The storage profile ID.</p>
     */
    inline CustomerManagedFleetConfiguration& WithStorageProfileId(const Aws::String& value) { SetStorageProfileId(value); return *this;}

    /**
     * <p>The storage profile ID.</p>
     */
    inline CustomerManagedFleetConfiguration& WithStorageProfileId(Aws::String&& value) { SetStorageProfileId(std::move(value)); return *this;}

    /**
     * <p>The storage profile ID.</p>
     */
    inline CustomerManagedFleetConfiguration& WithStorageProfileId(const char* value) { SetStorageProfileId(value); return *this;}


    /**
     * <p>The worker capabilities for a customer managed fleet configuration.</p>
     */
    inline const CustomerManagedWorkerCapabilities& GetWorkerCapabilities() const{ return m_workerCapabilities; }

    /**
     * <p>The worker capabilities for a customer managed fleet configuration.</p>
     */
    inline bool WorkerCapabilitiesHasBeenSet() const { return m_workerCapabilitiesHasBeenSet; }

    /**
     * <p>The worker capabilities for a customer managed fleet configuration.</p>
     */
    inline void SetWorkerCapabilities(const CustomerManagedWorkerCapabilities& value) { m_workerCapabilitiesHasBeenSet = true; m_workerCapabilities = value; }

    /**
     * <p>The worker capabilities for a customer managed fleet configuration.</p>
     */
    inline void SetWorkerCapabilities(CustomerManagedWorkerCapabilities&& value) { m_workerCapabilitiesHasBeenSet = true; m_workerCapabilities = std::move(value); }

    /**
     * <p>The worker capabilities for a customer managed fleet configuration.</p>
     */
    inline CustomerManagedFleetConfiguration& WithWorkerCapabilities(const CustomerManagedWorkerCapabilities& value) { SetWorkerCapabilities(value); return *this;}

    /**
     * <p>The worker capabilities for a customer managed fleet configuration.</p>
     */
    inline CustomerManagedFleetConfiguration& WithWorkerCapabilities(CustomerManagedWorkerCapabilities&& value) { SetWorkerCapabilities(std::move(value)); return *this;}

  private:

    AutoScalingMode m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;

    CustomerManagedWorkerCapabilities m_workerCapabilities;
    bool m_workerCapabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
