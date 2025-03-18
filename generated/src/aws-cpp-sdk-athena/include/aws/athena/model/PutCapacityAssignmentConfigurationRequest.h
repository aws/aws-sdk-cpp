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
    AWS_ATHENA_API PutCapacityAssignmentConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutCapacityAssignmentConfiguration"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the capacity reservation to put a capacity assignment
     * configuration for.</p>
     */
    inline const Aws::String& GetCapacityReservationName() const { return m_capacityReservationName; }
    inline bool CapacityReservationNameHasBeenSet() const { return m_capacityReservationNameHasBeenSet; }
    template<typename CapacityReservationNameT = Aws::String>
    void SetCapacityReservationName(CapacityReservationNameT&& value) { m_capacityReservationNameHasBeenSet = true; m_capacityReservationName = std::forward<CapacityReservationNameT>(value); }
    template<typename CapacityReservationNameT = Aws::String>
    PutCapacityAssignmentConfigurationRequest& WithCapacityReservationName(CapacityReservationNameT&& value) { SetCapacityReservationName(std::forward<CapacityReservationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of assignments for the capacity assignment configuration.</p>
     */
    inline const Aws::Vector<CapacityAssignment>& GetCapacityAssignments() const { return m_capacityAssignments; }
    inline bool CapacityAssignmentsHasBeenSet() const { return m_capacityAssignmentsHasBeenSet; }
    template<typename CapacityAssignmentsT = Aws::Vector<CapacityAssignment>>
    void SetCapacityAssignments(CapacityAssignmentsT&& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments = std::forward<CapacityAssignmentsT>(value); }
    template<typename CapacityAssignmentsT = Aws::Vector<CapacityAssignment>>
    PutCapacityAssignmentConfigurationRequest& WithCapacityAssignments(CapacityAssignmentsT&& value) { SetCapacityAssignments(std::forward<CapacityAssignmentsT>(value)); return *this;}
    template<typename CapacityAssignmentsT = CapacityAssignment>
    PutCapacityAssignmentConfigurationRequest& AddCapacityAssignments(CapacityAssignmentsT&& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments.emplace_back(std::forward<CapacityAssignmentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_capacityReservationName;
    bool m_capacityReservationNameHasBeenSet = false;

    Aws::Vector<CapacityAssignment> m_capacityAssignments;
    bool m_capacityAssignmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
