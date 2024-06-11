/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesisvideo/model/RecorderStatus.h>
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
   * <p>The latest status of a stream's edge recording job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/LastRecorderStatus">AWS
   * API Reference</a></p>
   */
  class LastRecorderStatus
  {
  public:
    AWS_KINESISVIDEO_API LastRecorderStatus();
    AWS_KINESISVIDEO_API LastRecorderStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API LastRecorderStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of a recorder job’s latest status.</p>
     */
    inline const Aws::String& GetJobStatusDetails() const{ return m_jobStatusDetails; }
    inline bool JobStatusDetailsHasBeenSet() const { return m_jobStatusDetailsHasBeenSet; }
    inline void SetJobStatusDetails(const Aws::String& value) { m_jobStatusDetailsHasBeenSet = true; m_jobStatusDetails = value; }
    inline void SetJobStatusDetails(Aws::String&& value) { m_jobStatusDetailsHasBeenSet = true; m_jobStatusDetails = std::move(value); }
    inline void SetJobStatusDetails(const char* value) { m_jobStatusDetailsHasBeenSet = true; m_jobStatusDetails.assign(value); }
    inline LastRecorderStatus& WithJobStatusDetails(const Aws::String& value) { SetJobStatusDetails(value); return *this;}
    inline LastRecorderStatus& WithJobStatusDetails(Aws::String&& value) { SetJobStatusDetails(std::move(value)); return *this;}
    inline LastRecorderStatus& WithJobStatusDetails(const char* value) { SetJobStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the recorder job was last executed and media stored to
     * local disk.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCollectedTime() const{ return m_lastCollectedTime; }
    inline bool LastCollectedTimeHasBeenSet() const { return m_lastCollectedTimeHasBeenSet; }
    inline void SetLastCollectedTime(const Aws::Utils::DateTime& value) { m_lastCollectedTimeHasBeenSet = true; m_lastCollectedTime = value; }
    inline void SetLastCollectedTime(Aws::Utils::DateTime&& value) { m_lastCollectedTimeHasBeenSet = true; m_lastCollectedTime = std::move(value); }
    inline LastRecorderStatus& WithLastCollectedTime(const Aws::Utils::DateTime& value) { SetLastCollectedTime(value); return *this;}
    inline LastRecorderStatus& WithLastCollectedTime(Aws::Utils::DateTime&& value) { SetLastCollectedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the recorder status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline LastRecorderStatus& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline LastRecorderStatus& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the latest recorder job.</p>
     */
    inline const RecorderStatus& GetRecorderStatus() const{ return m_recorderStatus; }
    inline bool RecorderStatusHasBeenSet() const { return m_recorderStatusHasBeenSet; }
    inline void SetRecorderStatus(const RecorderStatus& value) { m_recorderStatusHasBeenSet = true; m_recorderStatus = value; }
    inline void SetRecorderStatus(RecorderStatus&& value) { m_recorderStatusHasBeenSet = true; m_recorderStatus = std::move(value); }
    inline LastRecorderStatus& WithRecorderStatus(const RecorderStatus& value) { SetRecorderStatus(value); return *this;}
    inline LastRecorderStatus& WithRecorderStatus(RecorderStatus&& value) { SetRecorderStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobStatusDetails;
    bool m_jobStatusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastCollectedTime;
    bool m_lastCollectedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    RecorderStatus m_recorderStatus;
    bool m_recorderStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
