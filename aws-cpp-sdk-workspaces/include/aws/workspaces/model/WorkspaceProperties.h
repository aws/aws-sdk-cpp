/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/RunningMode.h>
#include <aws/workspaces/model/Compute.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a WorkSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceProperties">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API WorkspaceProperties
  {
  public:
    WorkspaceProperties();
    WorkspaceProperties(Aws::Utils::Json::JsonView jsonValue);
    WorkspaceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>
     */
    inline const RunningMode& GetRunningMode() const{ return m_runningMode; }

    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>
     */
    inline bool RunningModeHasBeenSet() const { return m_runningModeHasBeenSet; }

    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>
     */
    inline void SetRunningMode(const RunningMode& value) { m_runningModeHasBeenSet = true; m_runningMode = value; }

    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>
     */
    inline void SetRunningMode(RunningMode&& value) { m_runningModeHasBeenSet = true; m_runningMode = std::move(value); }

    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>
     */
    inline WorkspaceProperties& WithRunningMode(const RunningMode& value) { SetRunningMode(value); return *this;}

    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>
     */
    inline WorkspaceProperties& WithRunningMode(RunningMode&& value) { SetRunningMode(std::move(value)); return *this;}


    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60 minute intervals.</p>
     */
    inline int GetRunningModeAutoStopTimeoutInMinutes() const{ return m_runningModeAutoStopTimeoutInMinutes; }

    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60 minute intervals.</p>
     */
    inline bool RunningModeAutoStopTimeoutInMinutesHasBeenSet() const { return m_runningModeAutoStopTimeoutInMinutesHasBeenSet; }

    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60 minute intervals.</p>
     */
    inline void SetRunningModeAutoStopTimeoutInMinutes(int value) { m_runningModeAutoStopTimeoutInMinutesHasBeenSet = true; m_runningModeAutoStopTimeoutInMinutes = value; }

    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60 minute intervals.</p>
     */
    inline WorkspaceProperties& WithRunningModeAutoStopTimeoutInMinutes(int value) { SetRunningModeAutoStopTimeoutInMinutes(value); return *this;}


    /**
     * <p>The size of the root volume.</p>
     */
    inline int GetRootVolumeSizeGib() const{ return m_rootVolumeSizeGib; }

    /**
     * <p>The size of the root volume.</p>
     */
    inline bool RootVolumeSizeGibHasBeenSet() const { return m_rootVolumeSizeGibHasBeenSet; }

    /**
     * <p>The size of the root volume.</p>
     */
    inline void SetRootVolumeSizeGib(int value) { m_rootVolumeSizeGibHasBeenSet = true; m_rootVolumeSizeGib = value; }

    /**
     * <p>The size of the root volume.</p>
     */
    inline WorkspaceProperties& WithRootVolumeSizeGib(int value) { SetRootVolumeSizeGib(value); return *this;}


    /**
     * <p>The size of the user storage.</p>
     */
    inline int GetUserVolumeSizeGib() const{ return m_userVolumeSizeGib; }

    /**
     * <p>The size of the user storage.</p>
     */
    inline bool UserVolumeSizeGibHasBeenSet() const { return m_userVolumeSizeGibHasBeenSet; }

    /**
     * <p>The size of the user storage.</p>
     */
    inline void SetUserVolumeSizeGib(int value) { m_userVolumeSizeGibHasBeenSet = true; m_userVolumeSizeGib = value; }

    /**
     * <p>The size of the user storage.</p>
     */
    inline WorkspaceProperties& WithUserVolumeSizeGib(int value) { SetUserVolumeSizeGib(value); return *this;}


    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline const Compute& GetComputeTypeName() const{ return m_computeTypeName; }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline bool ComputeTypeNameHasBeenSet() const { return m_computeTypeNameHasBeenSet; }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline void SetComputeTypeName(const Compute& value) { m_computeTypeNameHasBeenSet = true; m_computeTypeName = value; }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline void SetComputeTypeName(Compute&& value) { m_computeTypeNameHasBeenSet = true; m_computeTypeName = std::move(value); }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline WorkspaceProperties& WithComputeTypeName(const Compute& value) { SetComputeTypeName(value); return *this;}

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline WorkspaceProperties& WithComputeTypeName(Compute&& value) { SetComputeTypeName(std::move(value)); return *this;}

  private:

    RunningMode m_runningMode;
    bool m_runningModeHasBeenSet;

    int m_runningModeAutoStopTimeoutInMinutes;
    bool m_runningModeAutoStopTimeoutInMinutesHasBeenSet;

    int m_rootVolumeSizeGib;
    bool m_rootVolumeSizeGibHasBeenSet;

    int m_userVolumeSizeGib;
    bool m_userVolumeSizeGibHasBeenSet;

    Compute m_computeTypeName;
    bool m_computeTypeNameHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
