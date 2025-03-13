/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/CapacityAssignment.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Assigns Athena workgroups (and hence their queries) to capacity reservations.
   * A capacity reservation can have only one capacity assignment configuration, but
   * the capacity assignment configuration can be made up of multiple individual
   * assignments. Each assignment specifies how Athena queries can consume capacity
   * from the capacity reservation that their workgroup is mapped to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CapacityAssignmentConfiguration">AWS
   * API Reference</a></p>
   */
  class CapacityAssignmentConfiguration
  {
  public:
    AWS_ATHENA_API CapacityAssignmentConfiguration() = default;
    AWS_ATHENA_API CapacityAssignmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CapacityAssignmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the reservation that the capacity assignment configuration is
     * for.</p>
     */
    inline const Aws::String& GetCapacityReservationName() const { return m_capacityReservationName; }
    inline bool CapacityReservationNameHasBeenSet() const { return m_capacityReservationNameHasBeenSet; }
    template<typename CapacityReservationNameT = Aws::String>
    void SetCapacityReservationName(CapacityReservationNameT&& value) { m_capacityReservationNameHasBeenSet = true; m_capacityReservationName = std::forward<CapacityReservationNameT>(value); }
    template<typename CapacityReservationNameT = Aws::String>
    CapacityAssignmentConfiguration& WithCapacityReservationName(CapacityReservationNameT&& value) { SetCapacityReservationName(std::forward<CapacityReservationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of assignments that make up the capacity assignment
     * configuration.</p>
     */
    inline const Aws::Vector<CapacityAssignment>& GetCapacityAssignments() const { return m_capacityAssignments; }
    inline bool CapacityAssignmentsHasBeenSet() const { return m_capacityAssignmentsHasBeenSet; }
    template<typename CapacityAssignmentsT = Aws::Vector<CapacityAssignment>>
    void SetCapacityAssignments(CapacityAssignmentsT&& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments = std::forward<CapacityAssignmentsT>(value); }
    template<typename CapacityAssignmentsT = Aws::Vector<CapacityAssignment>>
    CapacityAssignmentConfiguration& WithCapacityAssignments(CapacityAssignmentsT&& value) { SetCapacityAssignments(std::forward<CapacityAssignmentsT>(value)); return *this;}
    template<typename CapacityAssignmentsT = CapacityAssignment>
    CapacityAssignmentConfiguration& AddCapacityAssignments(CapacityAssignmentsT&& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments.emplace_back(std::forward<CapacityAssignmentsT>(value)); return *this; }
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
