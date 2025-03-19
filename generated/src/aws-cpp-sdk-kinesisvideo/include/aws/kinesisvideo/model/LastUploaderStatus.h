/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesisvideo/model/UploaderStatus.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>The latest status of a stream’s edge to cloud uploader job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/LastUploaderStatus">AWS
   * API Reference</a></p>
   */
  class LastUploaderStatus
  {
  public:
    AWS_KINESISVIDEO_API LastUploaderStatus() = default;
    AWS_KINESISVIDEO_API LastUploaderStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API LastUploaderStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of an uploader job’s latest status.</p>
     */
    inline const Aws::String& GetJobStatusDetails() const { return m_jobStatusDetails; }
    inline bool JobStatusDetailsHasBeenSet() const { return m_jobStatusDetailsHasBeenSet; }
    template<typename JobStatusDetailsT = Aws::String>
    void SetJobStatusDetails(JobStatusDetailsT&& value) { m_jobStatusDetailsHasBeenSet = true; m_jobStatusDetails = std::forward<JobStatusDetailsT>(value); }
    template<typename JobStatusDetailsT = Aws::String>
    LastUploaderStatus& WithJobStatusDetails(JobStatusDetailsT&& value) { SetJobStatusDetails(std::forward<JobStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the uploader job was last executed and media collected
     * to the cloud.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCollectedTime() const { return m_lastCollectedTime; }
    inline bool LastCollectedTimeHasBeenSet() const { return m_lastCollectedTimeHasBeenSet; }
    template<typename LastCollectedTimeT = Aws::Utils::DateTime>
    void SetLastCollectedTime(LastCollectedTimeT&& value) { m_lastCollectedTimeHasBeenSet = true; m_lastCollectedTime = std::forward<LastCollectedTimeT>(value); }
    template<typename LastCollectedTimeT = Aws::Utils::DateTime>
    LastUploaderStatus& WithLastCollectedTime(LastCollectedTimeT&& value) { SetLastCollectedTime(std::forward<LastCollectedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the uploader status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    LastUploaderStatus& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the latest uploader job.</p>
     */
    inline UploaderStatus GetUploaderStatus() const { return m_uploaderStatus; }
    inline bool UploaderStatusHasBeenSet() const { return m_uploaderStatusHasBeenSet; }
    inline void SetUploaderStatus(UploaderStatus value) { m_uploaderStatusHasBeenSet = true; m_uploaderStatus = value; }
    inline LastUploaderStatus& WithUploaderStatus(UploaderStatus value) { SetUploaderStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_jobStatusDetails;
    bool m_jobStatusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastCollectedTime{};
    bool m_lastCollectedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    UploaderStatus m_uploaderStatus{UploaderStatus::NOT_SET};
    bool m_uploaderStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
