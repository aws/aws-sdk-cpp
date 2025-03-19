/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/LaunchActionsStatus.h>
#include <aws/drs/model/LaunchStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents a server participating in an asynchronous Job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ParticipatingServer">AWS
   * API Reference</a></p>
   */
  class ParticipatingServer
  {
  public:
    AWS_DRS_API ParticipatingServer() = default;
    AWS_DRS_API ParticipatingServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API ParticipatingServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The post-launch action runs of a participating server.</p>
     */
    inline const LaunchActionsStatus& GetLaunchActionsStatus() const { return m_launchActionsStatus; }
    inline bool LaunchActionsStatusHasBeenSet() const { return m_launchActionsStatusHasBeenSet; }
    template<typename LaunchActionsStatusT = LaunchActionsStatus>
    void SetLaunchActionsStatus(LaunchActionsStatusT&& value) { m_launchActionsStatusHasBeenSet = true; m_launchActionsStatus = std::forward<LaunchActionsStatusT>(value); }
    template<typename LaunchActionsStatusT = LaunchActionsStatus>
    ParticipatingServer& WithLaunchActionsStatus(LaunchActionsStatusT&& value) { SetLaunchActionsStatus(std::forward<LaunchActionsStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch status of a participating server.</p>
     */
    inline LaunchStatus GetLaunchStatus() const { return m_launchStatus; }
    inline bool LaunchStatusHasBeenSet() const { return m_launchStatusHasBeenSet; }
    inline void SetLaunchStatus(LaunchStatus value) { m_launchStatusHasBeenSet = true; m_launchStatus = value; }
    inline ParticipatingServer& WithLaunchStatus(LaunchStatus value) { SetLaunchStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Recovery Instance ID of a participating server.</p>
     */
    inline const Aws::String& GetRecoveryInstanceID() const { return m_recoveryInstanceID; }
    inline bool RecoveryInstanceIDHasBeenSet() const { return m_recoveryInstanceIDHasBeenSet; }
    template<typename RecoveryInstanceIDT = Aws::String>
    void SetRecoveryInstanceID(RecoveryInstanceIDT&& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = std::forward<RecoveryInstanceIDT>(value); }
    template<typename RecoveryInstanceIDT = Aws::String>
    ParticipatingServer& WithRecoveryInstanceID(RecoveryInstanceIDT&& value) { SetRecoveryInstanceID(std::forward<RecoveryInstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Source Server ID of a participating server.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    ParticipatingServer& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}
  private:

    LaunchActionsStatus m_launchActionsStatus;
    bool m_launchActionsStatusHasBeenSet = false;

    LaunchStatus m_launchStatus{LaunchStatus::NOT_SET};
    bool m_launchStatusHasBeenSet = false;

    Aws::String m_recoveryInstanceID;
    bool m_recoveryInstanceIDHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
