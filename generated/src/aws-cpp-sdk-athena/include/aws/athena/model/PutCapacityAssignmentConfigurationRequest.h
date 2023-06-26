/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/CapacityAssignment.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class PutCapacityAssignmentConfigurationRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API PutCapacityAssignmentConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutCapacityAssignmentConfiguration"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the capacity reservation to put a capacity assignment
     * configuration for.</p>
     */
    inline const Aws::String& GetCapacityReservationName() const{ return m_capacityReservationName; }

    /**
     * <p>The name of the capacity reservation to put a capacity assignment
     * configuration for.</p>
     */
    inline bool CapacityReservationNameHasBeenSet() const { return m_capacityReservationNameHasBeenSet; }

    /**
     * <p>The name of the capacity reservation to put a capacity assignment
     * configuration for.</p>
     */
    inline void SetCapacityReservationName(const Aws::String& value) { m_capacityReservationNameHasBeenSet = true; m_capacityReservationName = value; }

    /**
     * <p>The name of the capacity reservation to put a capacity assignment
     * configuration for.</p>
     */
    inline void SetCapacityReservationName(Aws::String&& value) { m_capacityReservationNameHasBeenSet = true; m_capacityReservationName = std::move(value); }

    /**
     * <p>The name of the capacity reservation to put a capacity assignment
     * configuration for.</p>
     */
    inline void SetCapacityReservationName(const char* value) { m_capacityReservationNameHasBeenSet = true; m_capacityReservationName.assign(value); }

    /**
     * <p>The name of the capacity reservation to put a capacity assignment
     * configuration for.</p>
     */
    inline PutCapacityAssignmentConfigurationRequest& WithCapacityReservationName(const Aws::String& value) { SetCapacityReservationName(value); return *this;}

    /**
     * <p>The name of the capacity reservation to put a capacity assignment
     * configuration for.</p>
     */
    inline PutCapacityAssignmentConfigurationRequest& WithCapacityReservationName(Aws::String&& value) { SetCapacityReservationName(std::move(value)); return *this;}

    /**
     * <p>The name of the capacity reservation to put a capacity assignment
     * configuration for.</p>
     */
    inline PutCapacityAssignmentConfigurationRequest& WithCapacityReservationName(const char* value) { SetCapacityReservationName(value); return *this;}


    /**
     * <p>The list of assignments for the capacity assignment configuration.</p>
     */
    inline const Aws::Vector<CapacityAssignment>& GetCapacityAssignments() const{ return m_capacityAssignments; }

    /**
     * <p>The list of assignments for the capacity assignment configuration.</p>
     */
    inline bool CapacityAssignmentsHasBeenSet() const { return m_capacityAssignmentsHasBeenSet; }

    /**
     * <p>The list of assignments for the capacity assignment configuration.</p>
     */
    inline void SetCapacityAssignments(const Aws::Vector<CapacityAssignment>& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments = value; }

    /**
     * <p>The list of assignments for the capacity assignment configuration.</p>
     */
    inline void SetCapacityAssignments(Aws::Vector<CapacityAssignment>&& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments = std::move(value); }

    /**
     * <p>The list of assignments for the capacity assignment configuration.</p>
     */
    inline PutCapacityAssignmentConfigurationRequest& WithCapacityAssignments(const Aws::Vector<CapacityAssignment>& value) { SetCapacityAssignments(value); return *this;}

    /**
     * <p>The list of assignments for the capacity assignment configuration.</p>
     */
    inline PutCapacityAssignmentConfigurationRequest& WithCapacityAssignments(Aws::Vector<CapacityAssignment>&& value) { SetCapacityAssignments(std::move(value)); return *this;}

    /**
     * <p>The list of assignments for the capacity assignment configuration.</p>
     */
    inline PutCapacityAssignmentConfigurationRequest& AddCapacityAssignments(const CapacityAssignment& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments.push_back(value); return *this; }

    /**
     * <p>The list of assignments for the capacity assignment configuration.</p>
     */
    inline PutCapacityAssignmentConfigurationRequest& AddCapacityAssignments(CapacityAssignment&& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_capacityReservationName;
    bool m_capacityReservationNameHasBeenSet = false;

    Aws::Vector<CapacityAssignment> m_capacityAssignments;
    bool m_capacityAssignmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
