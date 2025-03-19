/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/BundleTaskState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/Storage.h>
#include <aws/ec2/model/BundleTaskError.h>
#include <utility>

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
   * <p>Describes a bundle task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/BundleTask">AWS API
   * Reference</a></p>
   */
  class BundleTask
  {
  public:
    AWS_EC2_API BundleTask() = default;
    AWS_EC2_API BundleTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API BundleTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the instance associated with this bundle task.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    BundleTask& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the bundle task.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    BundleTask& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the task.</p>
     */
    inline BundleTaskState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(BundleTaskState value) { m_stateHasBeenSet = true; m_state = value; }
    inline BundleTask& WithState(BundleTaskState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time this task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    BundleTask& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent update for the task.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    BundleTask& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 storage locations.</p>
     */
    inline const Storage& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = Storage>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = Storage>
    BundleTask& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of task completion, as a percent (for example, 20%).</p>
     */
    inline const Aws::String& GetProgress() const { return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    template<typename ProgressT = Aws::String>
    void SetProgress(ProgressT&& value) { m_progressHasBeenSet = true; m_progress = std::forward<ProgressT>(value); }
    template<typename ProgressT = Aws::String>
    BundleTask& WithProgress(ProgressT&& value) { SetProgress(std::forward<ProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the task fails, a description of the error.</p>
     */
    inline const BundleTaskError& GetBundleTaskError() const { return m_bundleTaskError; }
    inline bool BundleTaskErrorHasBeenSet() const { return m_bundleTaskErrorHasBeenSet; }
    template<typename BundleTaskErrorT = BundleTaskError>
    void SetBundleTaskError(BundleTaskErrorT&& value) { m_bundleTaskErrorHasBeenSet = true; m_bundleTaskError = std::forward<BundleTaskErrorT>(value); }
    template<typename BundleTaskErrorT = BundleTaskError>
    BundleTask& WithBundleTaskError(BundleTaskErrorT&& value) { SetBundleTaskError(std::forward<BundleTaskErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    BundleTaskState m_state{BundleTaskState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Storage m_storage;
    bool m_storageHasBeenSet = false;

    Aws::String m_progress;
    bool m_progressHasBeenSet = false;

    BundleTaskError m_bundleTaskError;
    bool m_bundleTaskErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
