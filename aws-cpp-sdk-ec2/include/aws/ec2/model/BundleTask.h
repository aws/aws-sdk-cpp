/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/BundleTaskState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/Storage.h>
#include <aws/ec2/model/BundleTaskError.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a bundle task.</p>
   */
  class AWS_EC2_API BundleTask
  {
  public:
    BundleTask();
    BundleTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    BundleTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the instance associated with this bundle task.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance associated with this bundle task.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance associated with this bundle task.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance associated with this bundle task.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance associated with this bundle task.</p>
     */
    inline BundleTask& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance associated with this bundle task.</p>
     */
    inline BundleTask& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance associated with this bundle task.</p>
     */
    inline BundleTask& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the bundle task.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The ID of the bundle task.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The ID of the bundle task.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The ID of the bundle task.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The ID of the bundle task.</p>
     */
    inline BundleTask& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The ID of the bundle task.</p>
     */
    inline BundleTask& WithBundleId(Aws::String&& value) { SetBundleId(value); return *this;}

    /**
     * <p>The ID of the bundle task.</p>
     */
    inline BundleTask& WithBundleId(const char* value) { SetBundleId(value); return *this;}

    /**
     * <p>The state of the task.</p>
     */
    inline const BundleTaskState& GetState() const{ return m_state; }

    /**
     * <p>The state of the task.</p>
     */
    inline void SetState(const BundleTaskState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the task.</p>
     */
    inline void SetState(BundleTaskState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the task.</p>
     */
    inline BundleTask& WithState(const BundleTaskState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the task.</p>
     */
    inline BundleTask& WithState(BundleTaskState&& value) { SetState(value); return *this;}

    /**
     * <p>The time this task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time this task started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time this task started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time this task started.</p>
     */
    inline BundleTask& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time this task started.</p>
     */
    inline BundleTask& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time of the most recent update for the task.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time of the most recent update for the task.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time of the most recent update for the task.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time of the most recent update for the task.</p>
     */
    inline BundleTask& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time of the most recent update for the task.</p>
     */
    inline BundleTask& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The Amazon S3 storage locations.</p>
     */
    inline const Storage& GetStorage() const{ return m_storage; }

    /**
     * <p>The Amazon S3 storage locations.</p>
     */
    inline void SetStorage(const Storage& value) { m_storageHasBeenSet = true; m_storage = value; }

    /**
     * <p>The Amazon S3 storage locations.</p>
     */
    inline void SetStorage(Storage&& value) { m_storageHasBeenSet = true; m_storage = value; }

    /**
     * <p>The Amazon S3 storage locations.</p>
     */
    inline BundleTask& WithStorage(const Storage& value) { SetStorage(value); return *this;}

    /**
     * <p>The Amazon S3 storage locations.</p>
     */
    inline BundleTask& WithStorage(Storage&& value) { SetStorage(value); return *this;}

    /**
     * <p>The level of task completion, as a percent (for example, 20%).</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The level of task completion, as a percent (for example, 20%).</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The level of task completion, as a percent (for example, 20%).</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The level of task completion, as a percent (for example, 20%).</p>
     */
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }

    /**
     * <p>The level of task completion, as a percent (for example, 20%).</p>
     */
    inline BundleTask& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The level of task completion, as a percent (for example, 20%).</p>
     */
    inline BundleTask& WithProgress(Aws::String&& value) { SetProgress(value); return *this;}

    /**
     * <p>The level of task completion, as a percent (for example, 20%).</p>
     */
    inline BundleTask& WithProgress(const char* value) { SetProgress(value); return *this;}

    /**
     * <p>If the task fails, a description of the error.</p>
     */
    inline const BundleTaskError& GetBundleTaskError() const{ return m_bundleTaskError; }

    /**
     * <p>If the task fails, a description of the error.</p>
     */
    inline void SetBundleTaskError(const BundleTaskError& value) { m_bundleTaskErrorHasBeenSet = true; m_bundleTaskError = value; }

    /**
     * <p>If the task fails, a description of the error.</p>
     */
    inline void SetBundleTaskError(BundleTaskError&& value) { m_bundleTaskErrorHasBeenSet = true; m_bundleTaskError = value; }

    /**
     * <p>If the task fails, a description of the error.</p>
     */
    inline BundleTask& WithBundleTaskError(const BundleTaskError& value) { SetBundleTaskError(value); return *this;}

    /**
     * <p>If the task fails, a description of the error.</p>
     */
    inline BundleTask& WithBundleTaskError(BundleTaskError&& value) { SetBundleTaskError(value); return *this;}

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;
    BundleTaskState m_state;
    bool m_stateHasBeenSet;
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet;
    Storage m_storage;
    bool m_storageHasBeenSet;
    Aws::String m_progress;
    bool m_progressHasBeenSet;
    BundleTaskError m_bundleTaskError;
    bool m_bundleTaskErrorHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
