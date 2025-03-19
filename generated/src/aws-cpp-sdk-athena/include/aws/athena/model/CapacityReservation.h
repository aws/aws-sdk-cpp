/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/CapacityReservationStatus.h>
#include <aws/athena/model/CapacityAllocation.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>A reservation for a specified number of data processing units (DPUs). When a
   * reservation is initially created, it has no DPUs. Athena allocates DPUs until
   * the allocated amount equals the requested amount.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CapacityReservation">AWS
   * API Reference</a></p>
   */
  class CapacityReservation
  {
  public:
    AWS_ATHENA_API CapacityReservation() = default;
    AWS_ATHENA_API CapacityReservation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CapacityReservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CapacityReservation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the capacity reservation.</p>
     */
    inline CapacityReservationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CapacityReservationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CapacityReservation& WithStatus(CapacityReservationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data processing units requested.</p>
     */
    inline int GetTargetDpus() const { return m_targetDpus; }
    inline bool TargetDpusHasBeenSet() const { return m_targetDpusHasBeenSet; }
    inline void SetTargetDpus(int value) { m_targetDpusHasBeenSet = true; m_targetDpus = value; }
    inline CapacityReservation& WithTargetDpus(int value) { SetTargetDpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data processing units currently allocated.</p>
     */
    inline int GetAllocatedDpus() const { return m_allocatedDpus; }
    inline bool AllocatedDpusHasBeenSet() const { return m_allocatedDpusHasBeenSet; }
    inline void SetAllocatedDpus(int value) { m_allocatedDpusHasBeenSet = true; m_allocatedDpus = value; }
    inline CapacityReservation& WithAllocatedDpus(int value) { SetAllocatedDpus(value); return *this;}
    ///@}

    ///@{
    
    inline const CapacityAllocation& GetLastAllocation() const { return m_lastAllocation; }
    inline bool LastAllocationHasBeenSet() const { return m_lastAllocationHasBeenSet; }
    template<typename LastAllocationT = CapacityAllocation>
    void SetLastAllocation(LastAllocationT&& value) { m_lastAllocationHasBeenSet = true; m_lastAllocation = std::forward<LastAllocationT>(value); }
    template<typename LastAllocationT = CapacityAllocation>
    CapacityReservation& WithLastAllocation(LastAllocationT&& value) { SetLastAllocation(std::forward<LastAllocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent capacity allocation that succeeded.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulAllocationTime() const { return m_lastSuccessfulAllocationTime; }
    inline bool LastSuccessfulAllocationTimeHasBeenSet() const { return m_lastSuccessfulAllocationTimeHasBeenSet; }
    template<typename LastSuccessfulAllocationTimeT = Aws::Utils::DateTime>
    void SetLastSuccessfulAllocationTime(LastSuccessfulAllocationTimeT&& value) { m_lastSuccessfulAllocationTimeHasBeenSet = true; m_lastSuccessfulAllocationTime = std::forward<LastSuccessfulAllocationTimeT>(value); }
    template<typename LastSuccessfulAllocationTimeT = Aws::Utils::DateTime>
    CapacityReservation& WithLastSuccessfulAllocationTime(LastSuccessfulAllocationTimeT&& value) { SetLastSuccessfulAllocationTime(std::forward<LastSuccessfulAllocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in UTC epoch millis when the capacity reservation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CapacityReservation& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CapacityReservationStatus m_status{CapacityReservationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_targetDpus{0};
    bool m_targetDpusHasBeenSet = false;

    int m_allocatedDpus{0};
    bool m_allocatedDpusHasBeenSet = false;

    CapacityAllocation m_lastAllocation;
    bool m_lastAllocationHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulAllocationTime{};
    bool m_lastSuccessfulAllocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
