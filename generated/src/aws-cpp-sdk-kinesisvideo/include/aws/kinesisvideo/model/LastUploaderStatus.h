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
    AWS_KINESISVIDEO_API LastUploaderStatus();
    AWS_KINESISVIDEO_API LastUploaderStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API LastUploaderStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of an uploader job’s latest status.</p>
     */
    inline const Aws::String& GetJobStatusDetails() const{ return m_jobStatusDetails; }
    inline bool JobStatusDetailsHasBeenSet() const { return m_jobStatusDetailsHasBeenSet; }
    inline void SetJobStatusDetails(const Aws::String& value) { m_jobStatusDetailsHasBeenSet = true; m_jobStatusDetails = value; }
    inline void SetJobStatusDetails(Aws::String&& value) { m_jobStatusDetailsHasBeenSet = true; m_jobStatusDetails = std::move(value); }
    inline void SetJobStatusDetails(const char* value) { m_jobStatusDetailsHasBeenSet = true; m_jobStatusDetails.assign(value); }
    inline LastUploaderStatus& WithJobStatusDetails(const Aws::String& value) { SetJobStatusDetails(value); return *this;}
    inline LastUploaderStatus& WithJobStatusDetails(Aws::String&& value) { SetJobStatusDetails(std::move(value)); return *this;}
    inline LastUploaderStatus& WithJobStatusDetails(const char* value) { SetJobStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the uploader job was last executed and media collected
     * to the cloud.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCollectedTime() const{ return m_lastCollectedTime; }
    inline bool LastCollectedTimeHasBeenSet() const { return m_lastCollectedTimeHasBeenSet; }
    inline void SetLastCollectedTime(const Aws::Utils::DateTime& value) { m_lastCollectedTimeHasBeenSet = true; m_lastCollectedTime = value; }
    inline void SetLastCollectedTime(Aws::Utils::DateTime&& value) { m_lastCollectedTimeHasBeenSet = true; m_lastCollectedTime = std::move(value); }
    inline LastUploaderStatus& WithLastCollectedTime(const Aws::Utils::DateTime& value) { SetLastCollectedTime(value); return *this;}
    inline LastUploaderStatus& WithLastCollectedTime(Aws::Utils::DateTime&& value) { SetLastCollectedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the uploader status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline LastUploaderStatus& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline LastUploaderStatus& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the latest uploader job.</p>
     */
    inline const UploaderStatus& GetUploaderStatus() const{ return m_uploaderStatus; }
    inline bool UploaderStatusHasBeenSet() const { return m_uploaderStatusHasBeenSet; }
    inline void SetUploaderStatus(const UploaderStatus& value) { m_uploaderStatusHasBeenSet = true; m_uploaderStatus = value; }
    inline void SetUploaderStatus(UploaderStatus&& value) { m_uploaderStatusHasBeenSet = true; m_uploaderStatus = std::move(value); }
    inline LastUploaderStatus& WithUploaderStatus(const UploaderStatus& value) { SetUploaderStatus(value); return *this;}
    inline LastUploaderStatus& WithUploaderStatus(UploaderStatus&& value) { SetUploaderStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobStatusDetails;
    bool m_jobStatusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastCollectedTime;
    bool m_lastCollectedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    UploaderStatus m_uploaderStatus;
    bool m_uploaderStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
