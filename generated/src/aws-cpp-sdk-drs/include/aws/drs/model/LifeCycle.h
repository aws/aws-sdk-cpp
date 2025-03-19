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
    AWS_DRS_API LifeCycle() = default;
    AWS_DRS_API LifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time of when the Source Server was added to the service.</p>
     */
    inline const Aws::String& GetAddedToServiceDateTime() const { return m_addedToServiceDateTime; }
    inline bool AddedToServiceDateTimeHasBeenSet() const { return m_addedToServiceDateTimeHasBeenSet; }
    template<typename AddedToServiceDateTimeT = Aws::String>
    void SetAddedToServiceDateTime(AddedToServiceDateTimeT&& value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime = std::forward<AddedToServiceDateTimeT>(value); }
    template<typename AddedToServiceDateTimeT = Aws::String>
    LifeCycle& WithAddedToServiceDateTime(AddedToServiceDateTimeT&& value) { SetAddedToServiceDateTime(std::forward<AddedToServiceDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that the Source Server has been replicating for.</p>
     */
    inline const Aws::String& GetElapsedReplicationDuration() const { return m_elapsedReplicationDuration; }
    inline bool ElapsedReplicationDurationHasBeenSet() const { return m_elapsedReplicationDurationHasBeenSet; }
    template<typename ElapsedReplicationDurationT = Aws::String>
    void SetElapsedReplicationDuration(ElapsedReplicationDurationT&& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = std::forward<ElapsedReplicationDurationT>(value); }
    template<typename ElapsedReplicationDurationT = Aws::String>
    LifeCycle& WithElapsedReplicationDuration(ElapsedReplicationDurationT&& value) { SetElapsedReplicationDuration(std::forward<ElapsedReplicationDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the first byte that was replicated from the Source
     * Server.</p>
     */
    inline const Aws::String& GetFirstByteDateTime() const { return m_firstByteDateTime; }
    inline bool FirstByteDateTimeHasBeenSet() const { return m_firstByteDateTimeHasBeenSet; }
    template<typename FirstByteDateTimeT = Aws::String>
    void SetFirstByteDateTime(FirstByteDateTimeT&& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = std::forward<FirstByteDateTimeT>(value); }
    template<typename FirstByteDateTimeT = Aws::String>
    LifeCycle& WithFirstByteDateTime(FirstByteDateTimeT&& value) { SetFirstByteDateTime(std::forward<FirstByteDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information regarding the last launch of the Source
     * Server.</p>
     */
    inline const LifeCycleLastLaunch& GetLastLaunch() const { return m_lastLaunch; }
    inline bool LastLaunchHasBeenSet() const { return m_lastLaunchHasBeenSet; }
    template<typename LastLaunchT = LifeCycleLastLaunch>
    void SetLastLaunch(LastLaunchT&& value) { m_lastLaunchHasBeenSet = true; m_lastLaunch = std::forward<LastLaunchT>(value); }
    template<typename LastLaunchT = LifeCycleLastLaunch>
    LifeCycle& WithLastLaunch(LastLaunchT&& value) { SetLastLaunch(std::forward<LastLaunchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this Source Server was last seen by the service.</p>
     */
    inline const Aws::String& GetLastSeenByServiceDateTime() const { return m_lastSeenByServiceDateTime; }
    inline bool LastSeenByServiceDateTimeHasBeenSet() const { return m_lastSeenByServiceDateTimeHasBeenSet; }
    template<typename LastSeenByServiceDateTimeT = Aws::String>
    void SetLastSeenByServiceDateTime(LastSeenByServiceDateTimeT&& value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime = std::forward<LastSeenByServiceDateTimeT>(value); }
    template<typename LastSeenByServiceDateTimeT = Aws::String>
    LifeCycle& WithLastSeenByServiceDateTime(LastSeenByServiceDateTimeT&& value) { SetLastSeenByServiceDateTime(std::forward<LastSeenByServiceDateTimeT>(value)); return *this;}
    ///@}
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
