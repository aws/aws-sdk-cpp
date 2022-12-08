/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
    AWS_DRS_API ParticipatingServer();
    AWS_DRS_API ParticipatingServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API ParticipatingServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The launch status of a participating server.</p>
     */
    inline const LaunchStatus& GetLaunchStatus() const{ return m_launchStatus; }

    /**
     * <p>The launch status of a participating server.</p>
     */
    inline bool LaunchStatusHasBeenSet() const { return m_launchStatusHasBeenSet; }

    /**
     * <p>The launch status of a participating server.</p>
     */
    inline void SetLaunchStatus(const LaunchStatus& value) { m_launchStatusHasBeenSet = true; m_launchStatus = value; }

    /**
     * <p>The launch status of a participating server.</p>
     */
    inline void SetLaunchStatus(LaunchStatus&& value) { m_launchStatusHasBeenSet = true; m_launchStatus = std::move(value); }

    /**
     * <p>The launch status of a participating server.</p>
     */
    inline ParticipatingServer& WithLaunchStatus(const LaunchStatus& value) { SetLaunchStatus(value); return *this;}

    /**
     * <p>The launch status of a participating server.</p>
     */
    inline ParticipatingServer& WithLaunchStatus(LaunchStatus&& value) { SetLaunchStatus(std::move(value)); return *this;}


    /**
     * <p>The Recovery Instance ID of a participating server.</p>
     */
    inline const Aws::String& GetRecoveryInstanceID() const{ return m_recoveryInstanceID; }

    /**
     * <p>The Recovery Instance ID of a participating server.</p>
     */
    inline bool RecoveryInstanceIDHasBeenSet() const { return m_recoveryInstanceIDHasBeenSet; }

    /**
     * <p>The Recovery Instance ID of a participating server.</p>
     */
    inline void SetRecoveryInstanceID(const Aws::String& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = value; }

    /**
     * <p>The Recovery Instance ID of a participating server.</p>
     */
    inline void SetRecoveryInstanceID(Aws::String&& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = std::move(value); }

    /**
     * <p>The Recovery Instance ID of a participating server.</p>
     */
    inline void SetRecoveryInstanceID(const char* value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID.assign(value); }

    /**
     * <p>The Recovery Instance ID of a participating server.</p>
     */
    inline ParticipatingServer& WithRecoveryInstanceID(const Aws::String& value) { SetRecoveryInstanceID(value); return *this;}

    /**
     * <p>The Recovery Instance ID of a participating server.</p>
     */
    inline ParticipatingServer& WithRecoveryInstanceID(Aws::String&& value) { SetRecoveryInstanceID(std::move(value)); return *this;}

    /**
     * <p>The Recovery Instance ID of a participating server.</p>
     */
    inline ParticipatingServer& WithRecoveryInstanceID(const char* value) { SetRecoveryInstanceID(value); return *this;}


    /**
     * <p>The Source Server ID of a participating server.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>The Source Server ID of a participating server.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>The Source Server ID of a participating server.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>The Source Server ID of a participating server.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>The Source Server ID of a participating server.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>The Source Server ID of a participating server.</p>
     */
    inline ParticipatingServer& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>The Source Server ID of a participating server.</p>
     */
    inline ParticipatingServer& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>The Source Server ID of a participating server.</p>
     */
    inline ParticipatingServer& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}

  private:

    LaunchStatus m_launchStatus;
    bool m_launchStatusHasBeenSet = false;

    Aws::String m_recoveryInstanceID;
    bool m_recoveryInstanceIDHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
