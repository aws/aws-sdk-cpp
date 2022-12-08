/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/LaunchStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/PostLaunchActionsStatus.h>
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
   * <p>Server participating in Job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ParticipatingServer">AWS
   * API Reference</a></p>
   */
  class ParticipatingServer
  {
  public:
    AWS_MGN_API ParticipatingServer();
    AWS_MGN_API ParticipatingServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ParticipatingServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Participating server launch status.</p>
     */
    inline const LaunchStatus& GetLaunchStatus() const{ return m_launchStatus; }

    /**
     * <p>Participating server launch status.</p>
     */
    inline bool LaunchStatusHasBeenSet() const { return m_launchStatusHasBeenSet; }

    /**
     * <p>Participating server launch status.</p>
     */
    inline void SetLaunchStatus(const LaunchStatus& value) { m_launchStatusHasBeenSet = true; m_launchStatus = value; }

    /**
     * <p>Participating server launch status.</p>
     */
    inline void SetLaunchStatus(LaunchStatus&& value) { m_launchStatusHasBeenSet = true; m_launchStatus = std::move(value); }

    /**
     * <p>Participating server launch status.</p>
     */
    inline ParticipatingServer& WithLaunchStatus(const LaunchStatus& value) { SetLaunchStatus(value); return *this;}

    /**
     * <p>Participating server launch status.</p>
     */
    inline ParticipatingServer& WithLaunchStatus(LaunchStatus&& value) { SetLaunchStatus(std::move(value)); return *this;}


    /**
     * <p>Participating server's launched ec2 instance ID.</p>
     */
    inline const Aws::String& GetLaunchedEc2InstanceID() const{ return m_launchedEc2InstanceID; }

    /**
     * <p>Participating server's launched ec2 instance ID.</p>
     */
    inline bool LaunchedEc2InstanceIDHasBeenSet() const { return m_launchedEc2InstanceIDHasBeenSet; }

    /**
     * <p>Participating server's launched ec2 instance ID.</p>
     */
    inline void SetLaunchedEc2InstanceID(const Aws::String& value) { m_launchedEc2InstanceIDHasBeenSet = true; m_launchedEc2InstanceID = value; }

    /**
     * <p>Participating server's launched ec2 instance ID.</p>
     */
    inline void SetLaunchedEc2InstanceID(Aws::String&& value) { m_launchedEc2InstanceIDHasBeenSet = true; m_launchedEc2InstanceID = std::move(value); }

    /**
     * <p>Participating server's launched ec2 instance ID.</p>
     */
    inline void SetLaunchedEc2InstanceID(const char* value) { m_launchedEc2InstanceIDHasBeenSet = true; m_launchedEc2InstanceID.assign(value); }

    /**
     * <p>Participating server's launched ec2 instance ID.</p>
     */
    inline ParticipatingServer& WithLaunchedEc2InstanceID(const Aws::String& value) { SetLaunchedEc2InstanceID(value); return *this;}

    /**
     * <p>Participating server's launched ec2 instance ID.</p>
     */
    inline ParticipatingServer& WithLaunchedEc2InstanceID(Aws::String&& value) { SetLaunchedEc2InstanceID(std::move(value)); return *this;}

    /**
     * <p>Participating server's launched ec2 instance ID.</p>
     */
    inline ParticipatingServer& WithLaunchedEc2InstanceID(const char* value) { SetLaunchedEc2InstanceID(value); return *this;}


    /**
     * <p>Participating server's Post Launch Actions Status.</p>
     */
    inline const PostLaunchActionsStatus& GetPostLaunchActionsStatus() const{ return m_postLaunchActionsStatus; }

    /**
     * <p>Participating server's Post Launch Actions Status.</p>
     */
    inline bool PostLaunchActionsStatusHasBeenSet() const { return m_postLaunchActionsStatusHasBeenSet; }

    /**
     * <p>Participating server's Post Launch Actions Status.</p>
     */
    inline void SetPostLaunchActionsStatus(const PostLaunchActionsStatus& value) { m_postLaunchActionsStatusHasBeenSet = true; m_postLaunchActionsStatus = value; }

    /**
     * <p>Participating server's Post Launch Actions Status.</p>
     */
    inline void SetPostLaunchActionsStatus(PostLaunchActionsStatus&& value) { m_postLaunchActionsStatusHasBeenSet = true; m_postLaunchActionsStatus = std::move(value); }

    /**
     * <p>Participating server's Post Launch Actions Status.</p>
     */
    inline ParticipatingServer& WithPostLaunchActionsStatus(const PostLaunchActionsStatus& value) { SetPostLaunchActionsStatus(value); return *this;}

    /**
     * <p>Participating server's Post Launch Actions Status.</p>
     */
    inline ParticipatingServer& WithPostLaunchActionsStatus(PostLaunchActionsStatus&& value) { SetPostLaunchActionsStatus(std::move(value)); return *this;}


    /**
     * <p>Participating server Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Participating server Source Server ID.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>Participating server Source Server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>Participating server Source Server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>Participating server Source Server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>Participating server Source Server ID.</p>
     */
    inline ParticipatingServer& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Participating server Source Server ID.</p>
     */
    inline ParticipatingServer& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Participating server Source Server ID.</p>
     */
    inline ParticipatingServer& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}

  private:

    LaunchStatus m_launchStatus;
    bool m_launchStatusHasBeenSet = false;

    Aws::String m_launchedEc2InstanceID;
    bool m_launchedEc2InstanceIDHasBeenSet = false;

    PostLaunchActionsStatus m_postLaunchActionsStatus;
    bool m_postLaunchActionsStatusHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
