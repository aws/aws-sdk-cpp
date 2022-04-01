/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/LaunchStatus.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Server participating in Job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ParticipatingServer">AWS
   * API Reference</a></p>
   */
  class AWS_MGN_API ParticipatingServer
  {
  public:
    ParticipatingServer();
    ParticipatingServer(Aws::Utils::Json::JsonView jsonValue);
    ParticipatingServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_launchStatusHasBeenSet;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
