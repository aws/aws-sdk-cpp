/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Information about provisioning resources for an DMS serverless
   * replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ProvisionData">AWS
   * API Reference</a></p>
   */
  class ProvisionData
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ProvisionData();
    AWS_DATABASEMIGRATIONSERVICE_API ProvisionData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ProvisionData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current provisioning state </p>
     */
    inline const Aws::String& GetProvisionState() const{ return m_provisionState; }

    /**
     * <p>The current provisioning state </p>
     */
    inline bool ProvisionStateHasBeenSet() const { return m_provisionStateHasBeenSet; }

    /**
     * <p>The current provisioning state </p>
     */
    inline void SetProvisionState(const Aws::String& value) { m_provisionStateHasBeenSet = true; m_provisionState = value; }

    /**
     * <p>The current provisioning state </p>
     */
    inline void SetProvisionState(Aws::String&& value) { m_provisionStateHasBeenSet = true; m_provisionState = std::move(value); }

    /**
     * <p>The current provisioning state </p>
     */
    inline void SetProvisionState(const char* value) { m_provisionStateHasBeenSet = true; m_provisionState.assign(value); }

    /**
     * <p>The current provisioning state </p>
     */
    inline ProvisionData& WithProvisionState(const Aws::String& value) { SetProvisionState(value); return *this;}

    /**
     * <p>The current provisioning state </p>
     */
    inline ProvisionData& WithProvisionState(Aws::String&& value) { SetProvisionState(std::move(value)); return *this;}

    /**
     * <p>The current provisioning state </p>
     */
    inline ProvisionData& WithProvisionState(const char* value) { SetProvisionState(value); return *this;}


    /**
     * <p>The number of capacity units the replication is using.</p>
     */
    inline int GetProvisionedCapacityUnits() const{ return m_provisionedCapacityUnits; }

    /**
     * <p>The number of capacity units the replication is using.</p>
     */
    inline bool ProvisionedCapacityUnitsHasBeenSet() const { return m_provisionedCapacityUnitsHasBeenSet; }

    /**
     * <p>The number of capacity units the replication is using.</p>
     */
    inline void SetProvisionedCapacityUnits(int value) { m_provisionedCapacityUnitsHasBeenSet = true; m_provisionedCapacityUnits = value; }

    /**
     * <p>The number of capacity units the replication is using.</p>
     */
    inline ProvisionData& WithProvisionedCapacityUnits(int value) { SetProvisionedCapacityUnits(value); return *this;}


    /**
     * <p>The timestamp when DMS provisioned replication resources.</p>
     */
    inline const Aws::Utils::DateTime& GetDateProvisioned() const{ return m_dateProvisioned; }

    /**
     * <p>The timestamp when DMS provisioned replication resources.</p>
     */
    inline bool DateProvisionedHasBeenSet() const { return m_dateProvisionedHasBeenSet; }

    /**
     * <p>The timestamp when DMS provisioned replication resources.</p>
     */
    inline void SetDateProvisioned(const Aws::Utils::DateTime& value) { m_dateProvisionedHasBeenSet = true; m_dateProvisioned = value; }

    /**
     * <p>The timestamp when DMS provisioned replication resources.</p>
     */
    inline void SetDateProvisioned(Aws::Utils::DateTime&& value) { m_dateProvisionedHasBeenSet = true; m_dateProvisioned = std::move(value); }

    /**
     * <p>The timestamp when DMS provisioned replication resources.</p>
     */
    inline ProvisionData& WithDateProvisioned(const Aws::Utils::DateTime& value) { SetDateProvisioned(value); return *this;}

    /**
     * <p>The timestamp when DMS provisioned replication resources.</p>
     */
    inline ProvisionData& WithDateProvisioned(Aws::Utils::DateTime&& value) { SetDateProvisioned(std::move(value)); return *this;}


    /**
     * <p>Whether the new provisioning is available to the replication.</p>
     */
    inline bool GetIsNewProvisioningAvailable() const{ return m_isNewProvisioningAvailable; }

    /**
     * <p>Whether the new provisioning is available to the replication.</p>
     */
    inline bool IsNewProvisioningAvailableHasBeenSet() const { return m_isNewProvisioningAvailableHasBeenSet; }

    /**
     * <p>Whether the new provisioning is available to the replication.</p>
     */
    inline void SetIsNewProvisioningAvailable(bool value) { m_isNewProvisioningAvailableHasBeenSet = true; m_isNewProvisioningAvailable = value; }

    /**
     * <p>Whether the new provisioning is available to the replication.</p>
     */
    inline ProvisionData& WithIsNewProvisioningAvailable(bool value) { SetIsNewProvisioningAvailable(value); return *this;}


    /**
     * <p>The timestamp when provisioning became available.</p>
     */
    inline const Aws::Utils::DateTime& GetDateNewProvisioningDataAvailable() const{ return m_dateNewProvisioningDataAvailable; }

    /**
     * <p>The timestamp when provisioning became available.</p>
     */
    inline bool DateNewProvisioningDataAvailableHasBeenSet() const { return m_dateNewProvisioningDataAvailableHasBeenSet; }

    /**
     * <p>The timestamp when provisioning became available.</p>
     */
    inline void SetDateNewProvisioningDataAvailable(const Aws::Utils::DateTime& value) { m_dateNewProvisioningDataAvailableHasBeenSet = true; m_dateNewProvisioningDataAvailable = value; }

    /**
     * <p>The timestamp when provisioning became available.</p>
     */
    inline void SetDateNewProvisioningDataAvailable(Aws::Utils::DateTime&& value) { m_dateNewProvisioningDataAvailableHasBeenSet = true; m_dateNewProvisioningDataAvailable = std::move(value); }

    /**
     * <p>The timestamp when provisioning became available.</p>
     */
    inline ProvisionData& WithDateNewProvisioningDataAvailable(const Aws::Utils::DateTime& value) { SetDateNewProvisioningDataAvailable(value); return *this;}

    /**
     * <p>The timestamp when provisioning became available.</p>
     */
    inline ProvisionData& WithDateNewProvisioningDataAvailable(Aws::Utils::DateTime&& value) { SetDateNewProvisioningDataAvailable(std::move(value)); return *this;}


    /**
     * <p>A message describing the reason that DMS provisioned new resources for the
     * serverless replication.</p>
     */
    inline const Aws::String& GetReasonForNewProvisioningData() const{ return m_reasonForNewProvisioningData; }

    /**
     * <p>A message describing the reason that DMS provisioned new resources for the
     * serverless replication.</p>
     */
    inline bool ReasonForNewProvisioningDataHasBeenSet() const { return m_reasonForNewProvisioningDataHasBeenSet; }

    /**
     * <p>A message describing the reason that DMS provisioned new resources for the
     * serverless replication.</p>
     */
    inline void SetReasonForNewProvisioningData(const Aws::String& value) { m_reasonForNewProvisioningDataHasBeenSet = true; m_reasonForNewProvisioningData = value; }

    /**
     * <p>A message describing the reason that DMS provisioned new resources for the
     * serverless replication.</p>
     */
    inline void SetReasonForNewProvisioningData(Aws::String&& value) { m_reasonForNewProvisioningDataHasBeenSet = true; m_reasonForNewProvisioningData = std::move(value); }

    /**
     * <p>A message describing the reason that DMS provisioned new resources for the
     * serverless replication.</p>
     */
    inline void SetReasonForNewProvisioningData(const char* value) { m_reasonForNewProvisioningDataHasBeenSet = true; m_reasonForNewProvisioningData.assign(value); }

    /**
     * <p>A message describing the reason that DMS provisioned new resources for the
     * serverless replication.</p>
     */
    inline ProvisionData& WithReasonForNewProvisioningData(const Aws::String& value) { SetReasonForNewProvisioningData(value); return *this;}

    /**
     * <p>A message describing the reason that DMS provisioned new resources for the
     * serverless replication.</p>
     */
    inline ProvisionData& WithReasonForNewProvisioningData(Aws::String&& value) { SetReasonForNewProvisioningData(std::move(value)); return *this;}

    /**
     * <p>A message describing the reason that DMS provisioned new resources for the
     * serverless replication.</p>
     */
    inline ProvisionData& WithReasonForNewProvisioningData(const char* value) { SetReasonForNewProvisioningData(value); return *this;}

  private:

    Aws::String m_provisionState;
    bool m_provisionStateHasBeenSet = false;

    int m_provisionedCapacityUnits;
    bool m_provisionedCapacityUnitsHasBeenSet = false;

    Aws::Utils::DateTime m_dateProvisioned;
    bool m_dateProvisionedHasBeenSet = false;

    bool m_isNewProvisioningAvailable;
    bool m_isNewProvisioningAvailableHasBeenSet = false;

    Aws::Utils::DateTime m_dateNewProvisioningDataAvailable;
    bool m_dateNewProvisioningDataAvailableHasBeenSet = false;

    Aws::String m_reasonForNewProvisioningData;
    bool m_reasonForNewProvisioningDataHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
