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
    AWS_ATHENA_API CapacityAssignmentConfiguration();
    AWS_ATHENA_API CapacityAssignmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CapacityAssignmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the reservation that the capacity assignment configuration is
     * for.</p>
     */
    inline const Aws::String& GetCapacityReservationName() const{ return m_capacityReservationName; }

    /**
     * <p>The name of the reservation that the capacity assignment configuration is
     * for.</p>
     */
    inline bool CapacityReservationNameHasBeenSet() const { return m_capacityReservationNameHasBeenSet; }

    /**
     * <p>The name of the reservation that the capacity assignment configuration is
     * for.</p>
     */
    inline void SetCapacityReservationName(const Aws::String& value) { m_capacityReservationNameHasBeenSet = true; m_capacityReservationName = value; }

    /**
     * <p>The name of the reservation that the capacity assignment configuration is
     * for.</p>
     */
    inline void SetCapacityReservationName(Aws::String&& value) { m_capacityReservationNameHasBeenSet = true; m_capacityReservationName = std::move(value); }

    /**
     * <p>The name of the reservation that the capacity assignment configuration is
     * for.</p>
     */
    inline void SetCapacityReservationName(const char* value) { m_capacityReservationNameHasBeenSet = true; m_capacityReservationName.assign(value); }

    /**
     * <p>The name of the reservation that the capacity assignment configuration is
     * for.</p>
     */
    inline CapacityAssignmentConfiguration& WithCapacityReservationName(const Aws::String& value) { SetCapacityReservationName(value); return *this;}

    /**
     * <p>The name of the reservation that the capacity assignment configuration is
     * for.</p>
     */
    inline CapacityAssignmentConfiguration& WithCapacityReservationName(Aws::String&& value) { SetCapacityReservationName(std::move(value)); return *this;}

    /**
     * <p>The name of the reservation that the capacity assignment configuration is
     * for.</p>
     */
    inline CapacityAssignmentConfiguration& WithCapacityReservationName(const char* value) { SetCapacityReservationName(value); return *this;}


    /**
     * <p>The list of assignments that make up the capacity assignment
     * configuration.</p>
     */
    inline const Aws::Vector<CapacityAssignment>& GetCapacityAssignments() const{ return m_capacityAssignments; }

    /**
     * <p>The list of assignments that make up the capacity assignment
     * configuration.</p>
     */
    inline bool CapacityAssignmentsHasBeenSet() const { return m_capacityAssignmentsHasBeenSet; }

    /**
     * <p>The list of assignments that make up the capacity assignment
     * configuration.</p>
     */
    inline void SetCapacityAssignments(const Aws::Vector<CapacityAssignment>& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments = value; }

    /**
     * <p>The list of assignments that make up the capacity assignment
     * configuration.</p>
     */
    inline void SetCapacityAssignments(Aws::Vector<CapacityAssignment>&& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments = std::move(value); }

    /**
     * <p>The list of assignments that make up the capacity assignment
     * configuration.</p>
     */
    inline CapacityAssignmentConfiguration& WithCapacityAssignments(const Aws::Vector<CapacityAssignment>& value) { SetCapacityAssignments(value); return *this;}

    /**
     * <p>The list of assignments that make up the capacity assignment
     * configuration.</p>
     */
    inline CapacityAssignmentConfiguration& WithCapacityAssignments(Aws::Vector<CapacityAssignment>&& value) { SetCapacityAssignments(std::move(value)); return *this;}

    /**
     * <p>The list of assignments that make up the capacity assignment
     * configuration.</p>
     */
    inline CapacityAssignmentConfiguration& AddCapacityAssignments(const CapacityAssignment& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments.push_back(value); return *this; }

    /**
     * <p>The list of assignments that make up the capacity assignment
     * configuration.</p>
     */
    inline CapacityAssignmentConfiguration& AddCapacityAssignments(CapacityAssignment&& value) { m_capacityAssignmentsHasBeenSet = true; m_capacityAssignments.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_capacityReservationName;
    bool m_capacityReservationNameHasBeenSet = false;

    Aws::Vector<CapacityAssignment> m_capacityAssignments;
    bool m_capacityAssignmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
