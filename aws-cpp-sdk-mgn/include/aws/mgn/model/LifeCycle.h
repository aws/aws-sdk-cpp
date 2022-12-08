/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/LifeCycleLastCutover.h>
#include <aws/mgn/model/LifeCycleLastTest.h>
#include <aws/mgn/model/LifeCycleState.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Lifecycle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LifeCycle">AWS API
   * Reference</a></p>
   */
  class LifeCycle
  {
  public:
    AWS_MGN_API LifeCycle();
    AWS_MGN_API LifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lifecycle added to service data and time.</p>
     */
    inline const Aws::String& GetAddedToServiceDateTime() const{ return m_addedToServiceDateTime; }

    /**
     * <p>Lifecycle added to service data and time.</p>
     */
    inline bool AddedToServiceDateTimeHasBeenSet() const { return m_addedToServiceDateTimeHasBeenSet; }

    /**
     * <p>Lifecycle added to service data and time.</p>
     */
    inline void SetAddedToServiceDateTime(const Aws::String& value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime = value; }

    /**
     * <p>Lifecycle added to service data and time.</p>
     */
    inline void SetAddedToServiceDateTime(Aws::String&& value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime = std::move(value); }

    /**
     * <p>Lifecycle added to service data and time.</p>
     */
    inline void SetAddedToServiceDateTime(const char* value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime.assign(value); }

    /**
     * <p>Lifecycle added to service data and time.</p>
     */
    inline LifeCycle& WithAddedToServiceDateTime(const Aws::String& value) { SetAddedToServiceDateTime(value); return *this;}

    /**
     * <p>Lifecycle added to service data and time.</p>
     */
    inline LifeCycle& WithAddedToServiceDateTime(Aws::String&& value) { SetAddedToServiceDateTime(std::move(value)); return *this;}

    /**
     * <p>Lifecycle added to service data and time.</p>
     */
    inline LifeCycle& WithAddedToServiceDateTime(const char* value) { SetAddedToServiceDateTime(value); return *this;}


    /**
     * <p>Lifecycle elapsed time and duration.</p>
     */
    inline const Aws::String& GetElapsedReplicationDuration() const{ return m_elapsedReplicationDuration; }

    /**
     * <p>Lifecycle elapsed time and duration.</p>
     */
    inline bool ElapsedReplicationDurationHasBeenSet() const { return m_elapsedReplicationDurationHasBeenSet; }

    /**
     * <p>Lifecycle elapsed time and duration.</p>
     */
    inline void SetElapsedReplicationDuration(const Aws::String& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = value; }

    /**
     * <p>Lifecycle elapsed time and duration.</p>
     */
    inline void SetElapsedReplicationDuration(Aws::String&& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = std::move(value); }

    /**
     * <p>Lifecycle elapsed time and duration.</p>
     */
    inline void SetElapsedReplicationDuration(const char* value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration.assign(value); }

    /**
     * <p>Lifecycle elapsed time and duration.</p>
     */
    inline LifeCycle& WithElapsedReplicationDuration(const Aws::String& value) { SetElapsedReplicationDuration(value); return *this;}

    /**
     * <p>Lifecycle elapsed time and duration.</p>
     */
    inline LifeCycle& WithElapsedReplicationDuration(Aws::String&& value) { SetElapsedReplicationDuration(std::move(value)); return *this;}

    /**
     * <p>Lifecycle elapsed time and duration.</p>
     */
    inline LifeCycle& WithElapsedReplicationDuration(const char* value) { SetElapsedReplicationDuration(value); return *this;}


    /**
     * <p>Lifecycle replication initiation date and time.</p>
     */
    inline const Aws::String& GetFirstByteDateTime() const{ return m_firstByteDateTime; }

    /**
     * <p>Lifecycle replication initiation date and time.</p>
     */
    inline bool FirstByteDateTimeHasBeenSet() const { return m_firstByteDateTimeHasBeenSet; }

    /**
     * <p>Lifecycle replication initiation date and time.</p>
     */
    inline void SetFirstByteDateTime(const Aws::String& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = value; }

    /**
     * <p>Lifecycle replication initiation date and time.</p>
     */
    inline void SetFirstByteDateTime(Aws::String&& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = std::move(value); }

    /**
     * <p>Lifecycle replication initiation date and time.</p>
     */
    inline void SetFirstByteDateTime(const char* value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime.assign(value); }

    /**
     * <p>Lifecycle replication initiation date and time.</p>
     */
    inline LifeCycle& WithFirstByteDateTime(const Aws::String& value) { SetFirstByteDateTime(value); return *this;}

    /**
     * <p>Lifecycle replication initiation date and time.</p>
     */
    inline LifeCycle& WithFirstByteDateTime(Aws::String&& value) { SetFirstByteDateTime(std::move(value)); return *this;}

    /**
     * <p>Lifecycle replication initiation date and time.</p>
     */
    inline LifeCycle& WithFirstByteDateTime(const char* value) { SetFirstByteDateTime(value); return *this;}


    /**
     * <p>Lifecycle last Cutover.</p>
     */
    inline const LifeCycleLastCutover& GetLastCutover() const{ return m_lastCutover; }

    /**
     * <p>Lifecycle last Cutover.</p>
     */
    inline bool LastCutoverHasBeenSet() const { return m_lastCutoverHasBeenSet; }

    /**
     * <p>Lifecycle last Cutover.</p>
     */
    inline void SetLastCutover(const LifeCycleLastCutover& value) { m_lastCutoverHasBeenSet = true; m_lastCutover = value; }

    /**
     * <p>Lifecycle last Cutover.</p>
     */
    inline void SetLastCutover(LifeCycleLastCutover&& value) { m_lastCutoverHasBeenSet = true; m_lastCutover = std::move(value); }

    /**
     * <p>Lifecycle last Cutover.</p>
     */
    inline LifeCycle& WithLastCutover(const LifeCycleLastCutover& value) { SetLastCutover(value); return *this;}

    /**
     * <p>Lifecycle last Cutover.</p>
     */
    inline LifeCycle& WithLastCutover(LifeCycleLastCutover&& value) { SetLastCutover(std::move(value)); return *this;}


    /**
     * <p>Lifecycle last seen date and time.</p>
     */
    inline const Aws::String& GetLastSeenByServiceDateTime() const{ return m_lastSeenByServiceDateTime; }

    /**
     * <p>Lifecycle last seen date and time.</p>
     */
    inline bool LastSeenByServiceDateTimeHasBeenSet() const { return m_lastSeenByServiceDateTimeHasBeenSet; }

    /**
     * <p>Lifecycle last seen date and time.</p>
     */
    inline void SetLastSeenByServiceDateTime(const Aws::String& value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime = value; }

    /**
     * <p>Lifecycle last seen date and time.</p>
     */
    inline void SetLastSeenByServiceDateTime(Aws::String&& value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime = std::move(value); }

    /**
     * <p>Lifecycle last seen date and time.</p>
     */
    inline void SetLastSeenByServiceDateTime(const char* value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime.assign(value); }

    /**
     * <p>Lifecycle last seen date and time.</p>
     */
    inline LifeCycle& WithLastSeenByServiceDateTime(const Aws::String& value) { SetLastSeenByServiceDateTime(value); return *this;}

    /**
     * <p>Lifecycle last seen date and time.</p>
     */
    inline LifeCycle& WithLastSeenByServiceDateTime(Aws::String&& value) { SetLastSeenByServiceDateTime(std::move(value)); return *this;}

    /**
     * <p>Lifecycle last seen date and time.</p>
     */
    inline LifeCycle& WithLastSeenByServiceDateTime(const char* value) { SetLastSeenByServiceDateTime(value); return *this;}


    /**
     * <p>Lifecycle last Test.</p>
     */
    inline const LifeCycleLastTest& GetLastTest() const{ return m_lastTest; }

    /**
     * <p>Lifecycle last Test.</p>
     */
    inline bool LastTestHasBeenSet() const { return m_lastTestHasBeenSet; }

    /**
     * <p>Lifecycle last Test.</p>
     */
    inline void SetLastTest(const LifeCycleLastTest& value) { m_lastTestHasBeenSet = true; m_lastTest = value; }

    /**
     * <p>Lifecycle last Test.</p>
     */
    inline void SetLastTest(LifeCycleLastTest&& value) { m_lastTestHasBeenSet = true; m_lastTest = std::move(value); }

    /**
     * <p>Lifecycle last Test.</p>
     */
    inline LifeCycle& WithLastTest(const LifeCycleLastTest& value) { SetLastTest(value); return *this;}

    /**
     * <p>Lifecycle last Test.</p>
     */
    inline LifeCycle& WithLastTest(LifeCycleLastTest&& value) { SetLastTest(std::move(value)); return *this;}


    /**
     * <p>Lifecycle state.</p>
     */
    inline const LifeCycleState& GetState() const{ return m_state; }

    /**
     * <p>Lifecycle state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Lifecycle state.</p>
     */
    inline void SetState(const LifeCycleState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Lifecycle state.</p>
     */
    inline void SetState(LifeCycleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Lifecycle state.</p>
     */
    inline LifeCycle& WithState(const LifeCycleState& value) { SetState(value); return *this;}

    /**
     * <p>Lifecycle state.</p>
     */
    inline LifeCycle& WithState(LifeCycleState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_addedToServiceDateTime;
    bool m_addedToServiceDateTimeHasBeenSet = false;

    Aws::String m_elapsedReplicationDuration;
    bool m_elapsedReplicationDurationHasBeenSet = false;

    Aws::String m_firstByteDateTime;
    bool m_firstByteDateTimeHasBeenSet = false;

    LifeCycleLastCutover m_lastCutover;
    bool m_lastCutoverHasBeenSet = false;

    Aws::String m_lastSeenByServiceDateTime;
    bool m_lastSeenByServiceDateTimeHasBeenSet = false;

    LifeCycleLastTest m_lastTest;
    bool m_lastTestHasBeenSet = false;

    LifeCycleState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
