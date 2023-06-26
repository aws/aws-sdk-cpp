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
    AWS_ATHENA_API CapacityReservation();
    AWS_ATHENA_API CapacityReservation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CapacityReservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline CapacityReservation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline CapacityReservation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline CapacityReservation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the capacity reservation.</p>
     */
    inline const CapacityReservationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the capacity reservation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the capacity reservation.</p>
     */
    inline void SetStatus(const CapacityReservationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the capacity reservation.</p>
     */
    inline void SetStatus(CapacityReservationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the capacity reservation.</p>
     */
    inline CapacityReservation& WithStatus(const CapacityReservationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the capacity reservation.</p>
     */
    inline CapacityReservation& WithStatus(CapacityReservationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The number of data processing units requested.</p>
     */
    inline int GetTargetDpus() const{ return m_targetDpus; }

    /**
     * <p>The number of data processing units requested.</p>
     */
    inline bool TargetDpusHasBeenSet() const { return m_targetDpusHasBeenSet; }

    /**
     * <p>The number of data processing units requested.</p>
     */
    inline void SetTargetDpus(int value) { m_targetDpusHasBeenSet = true; m_targetDpus = value; }

    /**
     * <p>The number of data processing units requested.</p>
     */
    inline CapacityReservation& WithTargetDpus(int value) { SetTargetDpus(value); return *this;}


    /**
     * <p>The number of data processing units currently allocated.</p>
     */
    inline int GetAllocatedDpus() const{ return m_allocatedDpus; }

    /**
     * <p>The number of data processing units currently allocated.</p>
     */
    inline bool AllocatedDpusHasBeenSet() const { return m_allocatedDpusHasBeenSet; }

    /**
     * <p>The number of data processing units currently allocated.</p>
     */
    inline void SetAllocatedDpus(int value) { m_allocatedDpusHasBeenSet = true; m_allocatedDpus = value; }

    /**
     * <p>The number of data processing units currently allocated.</p>
     */
    inline CapacityReservation& WithAllocatedDpus(int value) { SetAllocatedDpus(value); return *this;}


    
    inline const CapacityAllocation& GetLastAllocation() const{ return m_lastAllocation; }

    
    inline bool LastAllocationHasBeenSet() const { return m_lastAllocationHasBeenSet; }

    
    inline void SetLastAllocation(const CapacityAllocation& value) { m_lastAllocationHasBeenSet = true; m_lastAllocation = value; }

    
    inline void SetLastAllocation(CapacityAllocation&& value) { m_lastAllocationHasBeenSet = true; m_lastAllocation = std::move(value); }

    
    inline CapacityReservation& WithLastAllocation(const CapacityAllocation& value) { SetLastAllocation(value); return *this;}

    
    inline CapacityReservation& WithLastAllocation(CapacityAllocation&& value) { SetLastAllocation(std::move(value)); return *this;}


    /**
     * <p>The time of the most recent capacity allocation that succeeded.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulAllocationTime() const{ return m_lastSuccessfulAllocationTime; }

    /**
     * <p>The time of the most recent capacity allocation that succeeded.</p>
     */
    inline bool LastSuccessfulAllocationTimeHasBeenSet() const { return m_lastSuccessfulAllocationTimeHasBeenSet; }

    /**
     * <p>The time of the most recent capacity allocation that succeeded.</p>
     */
    inline void SetLastSuccessfulAllocationTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulAllocationTimeHasBeenSet = true; m_lastSuccessfulAllocationTime = value; }

    /**
     * <p>The time of the most recent capacity allocation that succeeded.</p>
     */
    inline void SetLastSuccessfulAllocationTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulAllocationTimeHasBeenSet = true; m_lastSuccessfulAllocationTime = std::move(value); }

    /**
     * <p>The time of the most recent capacity allocation that succeeded.</p>
     */
    inline CapacityReservation& WithLastSuccessfulAllocationTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulAllocationTime(value); return *this;}

    /**
     * <p>The time of the most recent capacity allocation that succeeded.</p>
     */
    inline CapacityReservation& WithLastSuccessfulAllocationTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulAllocationTime(std::move(value)); return *this;}


    /**
     * <p>The time in UTC epoch millis when the capacity reservation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time in UTC epoch millis when the capacity reservation was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time in UTC epoch millis when the capacity reservation was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time in UTC epoch millis when the capacity reservation was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time in UTC epoch millis when the capacity reservation was created.</p>
     */
    inline CapacityReservation& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time in UTC epoch millis when the capacity reservation was created.</p>
     */
    inline CapacityReservation& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CapacityReservationStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_targetDpus;
    bool m_targetDpusHasBeenSet = false;

    int m_allocatedDpus;
    bool m_allocatedDpusHasBeenSet = false;

    CapacityAllocation m_lastAllocation;
    bool m_lastAllocationHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulAllocationTime;
    bool m_lastSuccessfulAllocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
