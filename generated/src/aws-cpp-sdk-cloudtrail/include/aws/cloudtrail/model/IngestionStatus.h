/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>A table showing information about the most recent successful and failed
   * attempts to ingest events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/IngestionStatus">AWS
   * API Reference</a></p>
   */
  class IngestionStatus
  {
  public:
    AWS_CLOUDTRAIL_API IngestionStatus() = default;
    AWS_CLOUDTRAIL_API IngestionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API IngestionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time stamp of the most recent successful ingestion of events for the
     * channel.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestIngestionSuccessTime() const { return m_latestIngestionSuccessTime; }
    inline bool LatestIngestionSuccessTimeHasBeenSet() const { return m_latestIngestionSuccessTimeHasBeenSet; }
    template<typename LatestIngestionSuccessTimeT = Aws::Utils::DateTime>
    void SetLatestIngestionSuccessTime(LatestIngestionSuccessTimeT&& value) { m_latestIngestionSuccessTimeHasBeenSet = true; m_latestIngestionSuccessTime = std::forward<LatestIngestionSuccessTimeT>(value); }
    template<typename LatestIngestionSuccessTimeT = Aws::Utils::DateTime>
    IngestionStatus& WithLatestIngestionSuccessTime(LatestIngestionSuccessTimeT&& value) { SetLatestIngestionSuccessTime(std::forward<LatestIngestionSuccessTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event ID of the most recent successful ingestion of events.</p>
     */
    inline const Aws::String& GetLatestIngestionSuccessEventID() const { return m_latestIngestionSuccessEventID; }
    inline bool LatestIngestionSuccessEventIDHasBeenSet() const { return m_latestIngestionSuccessEventIDHasBeenSet; }
    template<typename LatestIngestionSuccessEventIDT = Aws::String>
    void SetLatestIngestionSuccessEventID(LatestIngestionSuccessEventIDT&& value) { m_latestIngestionSuccessEventIDHasBeenSet = true; m_latestIngestionSuccessEventID = std::forward<LatestIngestionSuccessEventIDT>(value); }
    template<typename LatestIngestionSuccessEventIDT = Aws::String>
    IngestionStatus& WithLatestIngestionSuccessEventID(LatestIngestionSuccessEventIDT&& value) { SetLatestIngestionSuccessEventID(std::forward<LatestIngestionSuccessEventIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code for the most recent failure to ingest events.</p>
     */
    inline const Aws::String& GetLatestIngestionErrorCode() const { return m_latestIngestionErrorCode; }
    inline bool LatestIngestionErrorCodeHasBeenSet() const { return m_latestIngestionErrorCodeHasBeenSet; }
    template<typename LatestIngestionErrorCodeT = Aws::String>
    void SetLatestIngestionErrorCode(LatestIngestionErrorCodeT&& value) { m_latestIngestionErrorCodeHasBeenSet = true; m_latestIngestionErrorCode = std::forward<LatestIngestionErrorCodeT>(value); }
    template<typename LatestIngestionErrorCodeT = Aws::String>
    IngestionStatus& WithLatestIngestionErrorCode(LatestIngestionErrorCodeT&& value) { SetLatestIngestionErrorCode(std::forward<LatestIngestionErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the most recent attempt to ingest events on the
     * channel.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestIngestionAttemptTime() const { return m_latestIngestionAttemptTime; }
    inline bool LatestIngestionAttemptTimeHasBeenSet() const { return m_latestIngestionAttemptTimeHasBeenSet; }
    template<typename LatestIngestionAttemptTimeT = Aws::Utils::DateTime>
    void SetLatestIngestionAttemptTime(LatestIngestionAttemptTimeT&& value) { m_latestIngestionAttemptTimeHasBeenSet = true; m_latestIngestionAttemptTime = std::forward<LatestIngestionAttemptTimeT>(value); }
    template<typename LatestIngestionAttemptTimeT = Aws::Utils::DateTime>
    IngestionStatus& WithLatestIngestionAttemptTime(LatestIngestionAttemptTimeT&& value) { SetLatestIngestionAttemptTime(std::forward<LatestIngestionAttemptTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event ID of the most recent attempt to ingest events.</p>
     */
    inline const Aws::String& GetLatestIngestionAttemptEventID() const { return m_latestIngestionAttemptEventID; }
    inline bool LatestIngestionAttemptEventIDHasBeenSet() const { return m_latestIngestionAttemptEventIDHasBeenSet; }
    template<typename LatestIngestionAttemptEventIDT = Aws::String>
    void SetLatestIngestionAttemptEventID(LatestIngestionAttemptEventIDT&& value) { m_latestIngestionAttemptEventIDHasBeenSet = true; m_latestIngestionAttemptEventID = std::forward<LatestIngestionAttemptEventIDT>(value); }
    template<typename LatestIngestionAttemptEventIDT = Aws::String>
    IngestionStatus& WithLatestIngestionAttemptEventID(LatestIngestionAttemptEventIDT&& value) { SetLatestIngestionAttemptEventID(std::forward<LatestIngestionAttemptEventIDT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_latestIngestionSuccessTime{};
    bool m_latestIngestionSuccessTimeHasBeenSet = false;

    Aws::String m_latestIngestionSuccessEventID;
    bool m_latestIngestionSuccessEventIDHasBeenSet = false;

    Aws::String m_latestIngestionErrorCode;
    bool m_latestIngestionErrorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_latestIngestionAttemptTime{};
    bool m_latestIngestionAttemptTimeHasBeenSet = false;

    Aws::String m_latestIngestionAttemptEventID;
    bool m_latestIngestionAttemptEventIDHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
