/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LifeCycleLastLaunch.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>An object representing the Source Server Lifecycle.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/LifeCycle">AWS
   * API Reference</a></p>
   */
  class LifeCycle
  {
  public:
    AWS_DRS_API LifeCycle();
    AWS_DRS_API LifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time of when the Source Server was added to the service.</p>
     */
    inline const Aws::String& GetAddedToServiceDateTime() const{ return m_addedToServiceDateTime; }

    /**
     * <p>The date and time of when the Source Server was added to the service.</p>
     */
    inline bool AddedToServiceDateTimeHasBeenSet() const { return m_addedToServiceDateTimeHasBeenSet; }

    /**
     * <p>The date and time of when the Source Server was added to the service.</p>
     */
    inline void SetAddedToServiceDateTime(const Aws::String& value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime = value; }

    /**
     * <p>The date and time of when the Source Server was added to the service.</p>
     */
    inline void SetAddedToServiceDateTime(Aws::String&& value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime = std::move(value); }

    /**
     * <p>The date and time of when the Source Server was added to the service.</p>
     */
    inline void SetAddedToServiceDateTime(const char* value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime.assign(value); }

    /**
     * <p>The date and time of when the Source Server was added to the service.</p>
     */
    inline LifeCycle& WithAddedToServiceDateTime(const Aws::String& value) { SetAddedToServiceDateTime(value); return *this;}

    /**
     * <p>The date and time of when the Source Server was added to the service.</p>
     */
    inline LifeCycle& WithAddedToServiceDateTime(Aws::String&& value) { SetAddedToServiceDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time of when the Source Server was added to the service.</p>
     */
    inline LifeCycle& WithAddedToServiceDateTime(const char* value) { SetAddedToServiceDateTime(value); return *this;}


    /**
     * <p>The amount of time that the Source Server has been replicating for.</p>
     */
    inline const Aws::String& GetElapsedReplicationDuration() const{ return m_elapsedReplicationDuration; }

    /**
     * <p>The amount of time that the Source Server has been replicating for.</p>
     */
    inline bool ElapsedReplicationDurationHasBeenSet() const { return m_elapsedReplicationDurationHasBeenSet; }

    /**
     * <p>The amount of time that the Source Server has been replicating for.</p>
     */
    inline void SetElapsedReplicationDuration(const Aws::String& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = value; }

    /**
     * <p>The amount of time that the Source Server has been replicating for.</p>
     */
    inline void SetElapsedReplicationDuration(Aws::String&& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = std::move(value); }

    /**
     * <p>The amount of time that the Source Server has been replicating for.</p>
     */
    inline void SetElapsedReplicationDuration(const char* value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration.assign(value); }

    /**
     * <p>The amount of time that the Source Server has been replicating for.</p>
     */
    inline LifeCycle& WithElapsedReplicationDuration(const Aws::String& value) { SetElapsedReplicationDuration(value); return *this;}

    /**
     * <p>The amount of time that the Source Server has been replicating for.</p>
     */
    inline LifeCycle& WithElapsedReplicationDuration(Aws::String&& value) { SetElapsedReplicationDuration(std::move(value)); return *this;}

    /**
     * <p>The amount of time that the Source Server has been replicating for.</p>
     */
    inline LifeCycle& WithElapsedReplicationDuration(const char* value) { SetElapsedReplicationDuration(value); return *this;}


    /**
     * <p>The date and time of the first byte that was replicated from the Source
     * Server.</p>
     */
    inline const Aws::String& GetFirstByteDateTime() const{ return m_firstByteDateTime; }

    /**
     * <p>The date and time of the first byte that was replicated from the Source
     * Server.</p>
     */
    inline bool FirstByteDateTimeHasBeenSet() const { return m_firstByteDateTimeHasBeenSet; }

    /**
     * <p>The date and time of the first byte that was replicated from the Source
     * Server.</p>
     */
    inline void SetFirstByteDateTime(const Aws::String& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = value; }

    /**
     * <p>The date and time of the first byte that was replicated from the Source
     * Server.</p>
     */
    inline void SetFirstByteDateTime(Aws::String&& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = std::move(value); }

    /**
     * <p>The date and time of the first byte that was replicated from the Source
     * Server.</p>
     */
    inline void SetFirstByteDateTime(const char* value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime.assign(value); }

    /**
     * <p>The date and time of the first byte that was replicated from the Source
     * Server.</p>
     */
    inline LifeCycle& WithFirstByteDateTime(const Aws::String& value) { SetFirstByteDateTime(value); return *this;}

    /**
     * <p>The date and time of the first byte that was replicated from the Source
     * Server.</p>
     */
    inline LifeCycle& WithFirstByteDateTime(Aws::String&& value) { SetFirstByteDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time of the first byte that was replicated from the Source
     * Server.</p>
     */
    inline LifeCycle& WithFirstByteDateTime(const char* value) { SetFirstByteDateTime(value); return *this;}


    /**
     * <p>An object containing information regarding the last launch of the Source
     * Server.</p>
     */
    inline const LifeCycleLastLaunch& GetLastLaunch() const{ return m_lastLaunch; }

    /**
     * <p>An object containing information regarding the last launch of the Source
     * Server.</p>
     */
    inline bool LastLaunchHasBeenSet() const { return m_lastLaunchHasBeenSet; }

    /**
     * <p>An object containing information regarding the last launch of the Source
     * Server.</p>
     */
    inline void SetLastLaunch(const LifeCycleLastLaunch& value) { m_lastLaunchHasBeenSet = true; m_lastLaunch = value; }

    /**
     * <p>An object containing information regarding the last launch of the Source
     * Server.</p>
     */
    inline void SetLastLaunch(LifeCycleLastLaunch&& value) { m_lastLaunchHasBeenSet = true; m_lastLaunch = std::move(value); }

    /**
     * <p>An object containing information regarding the last launch of the Source
     * Server.</p>
     */
    inline LifeCycle& WithLastLaunch(const LifeCycleLastLaunch& value) { SetLastLaunch(value); return *this;}

    /**
     * <p>An object containing information regarding the last launch of the Source
     * Server.</p>
     */
    inline LifeCycle& WithLastLaunch(LifeCycleLastLaunch&& value) { SetLastLaunch(std::move(value)); return *this;}


    /**
     * <p>The date and time this Source Server was last seen by the service.</p>
     */
    inline const Aws::String& GetLastSeenByServiceDateTime() const{ return m_lastSeenByServiceDateTime; }

    /**
     * <p>The date and time this Source Server was last seen by the service.</p>
     */
    inline bool LastSeenByServiceDateTimeHasBeenSet() const { return m_lastSeenByServiceDateTimeHasBeenSet; }

    /**
     * <p>The date and time this Source Server was last seen by the service.</p>
     */
    inline void SetLastSeenByServiceDateTime(const Aws::String& value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime = value; }

    /**
     * <p>The date and time this Source Server was last seen by the service.</p>
     */
    inline void SetLastSeenByServiceDateTime(Aws::String&& value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime = std::move(value); }

    /**
     * <p>The date and time this Source Server was last seen by the service.</p>
     */
    inline void SetLastSeenByServiceDateTime(const char* value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime.assign(value); }

    /**
     * <p>The date and time this Source Server was last seen by the service.</p>
     */
    inline LifeCycle& WithLastSeenByServiceDateTime(const Aws::String& value) { SetLastSeenByServiceDateTime(value); return *this;}

    /**
     * <p>The date and time this Source Server was last seen by the service.</p>
     */
    inline LifeCycle& WithLastSeenByServiceDateTime(Aws::String&& value) { SetLastSeenByServiceDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time this Source Server was last seen by the service.</p>
     */
    inline LifeCycle& WithLastSeenByServiceDateTime(const char* value) { SetLastSeenByServiceDateTime(value); return *this;}

  private:

    Aws::String m_addedToServiceDateTime;
    bool m_addedToServiceDateTimeHasBeenSet = false;

    Aws::String m_elapsedReplicationDuration;
    bool m_elapsedReplicationDurationHasBeenSet = false;

    Aws::String m_firstByteDateTime;
    bool m_firstByteDateTimeHasBeenSet = false;

    LifeCycleLastLaunch m_lastLaunch;
    bool m_lastLaunchHasBeenSet = false;

    Aws::String m_lastSeenByServiceDateTime;
    bool m_lastSeenByServiceDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
