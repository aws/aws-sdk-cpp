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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/BackendConnectionErrors.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/TelemetryRecord">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API TelemetryRecord
  {
  public:
    TelemetryRecord();
    TelemetryRecord(const Aws::Utils::Json::JsonValue& jsonValue);
    TelemetryRecord& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p></p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p></p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p></p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p></p>
     */
    inline TelemetryRecord& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p></p>
     */
    inline TelemetryRecord& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

    /**
     * <p></p>
     */
    inline int GetSegmentsReceivedCount() const{ return m_segmentsReceivedCount; }

    /**
     * <p></p>
     */
    inline void SetSegmentsReceivedCount(int value) { m_segmentsReceivedCountHasBeenSet = true; m_segmentsReceivedCount = value; }

    /**
     * <p></p>
     */
    inline TelemetryRecord& WithSegmentsReceivedCount(int value) { SetSegmentsReceivedCount(value); return *this;}

    /**
     * <p></p>
     */
    inline int GetSegmentsSentCount() const{ return m_segmentsSentCount; }

    /**
     * <p></p>
     */
    inline void SetSegmentsSentCount(int value) { m_segmentsSentCountHasBeenSet = true; m_segmentsSentCount = value; }

    /**
     * <p></p>
     */
    inline TelemetryRecord& WithSegmentsSentCount(int value) { SetSegmentsSentCount(value); return *this;}

    /**
     * <p></p>
     */
    inline int GetSegmentsSpilloverCount() const{ return m_segmentsSpilloverCount; }

    /**
     * <p></p>
     */
    inline void SetSegmentsSpilloverCount(int value) { m_segmentsSpilloverCountHasBeenSet = true; m_segmentsSpilloverCount = value; }

    /**
     * <p></p>
     */
    inline TelemetryRecord& WithSegmentsSpilloverCount(int value) { SetSegmentsSpilloverCount(value); return *this;}

    /**
     * <p></p>
     */
    inline int GetSegmentsRejectedCount() const{ return m_segmentsRejectedCount; }

    /**
     * <p></p>
     */
    inline void SetSegmentsRejectedCount(int value) { m_segmentsRejectedCountHasBeenSet = true; m_segmentsRejectedCount = value; }

    /**
     * <p></p>
     */
    inline TelemetryRecord& WithSegmentsRejectedCount(int value) { SetSegmentsRejectedCount(value); return *this;}

    /**
     * <p></p>
     */
    inline const BackendConnectionErrors& GetBackendConnectionErrors() const{ return m_backendConnectionErrors; }

    /**
     * <p></p>
     */
    inline void SetBackendConnectionErrors(const BackendConnectionErrors& value) { m_backendConnectionErrorsHasBeenSet = true; m_backendConnectionErrors = value; }

    /**
     * <p></p>
     */
    inline void SetBackendConnectionErrors(BackendConnectionErrors&& value) { m_backendConnectionErrorsHasBeenSet = true; m_backendConnectionErrors = std::move(value); }

    /**
     * <p></p>
     */
    inline TelemetryRecord& WithBackendConnectionErrors(const BackendConnectionErrors& value) { SetBackendConnectionErrors(value); return *this;}

    /**
     * <p></p>
     */
    inline TelemetryRecord& WithBackendConnectionErrors(BackendConnectionErrors&& value) { SetBackendConnectionErrors(std::move(value)); return *this;}

  private:
    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
    int m_segmentsReceivedCount;
    bool m_segmentsReceivedCountHasBeenSet;
    int m_segmentsSentCount;
    bool m_segmentsSentCountHasBeenSet;
    int m_segmentsSpilloverCount;
    bool m_segmentsSpilloverCountHasBeenSet;
    int m_segmentsRejectedCount;
    bool m_segmentsRejectedCountHasBeenSet;
    BackendConnectionErrors m_backendConnectionErrors;
    bool m_backendConnectionErrorsHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
