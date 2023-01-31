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
    AWS_CLOUDTRAIL_API IngestionStatus();
    AWS_CLOUDTRAIL_API IngestionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API IngestionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time stamp of the most recent successful ingestion of events for the
     * channel.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestIngestionSuccessTime() const{ return m_latestIngestionSuccessTime; }

    /**
     * <p>The time stamp of the most recent successful ingestion of events for the
     * channel.</p>
     */
    inline bool LatestIngestionSuccessTimeHasBeenSet() const { return m_latestIngestionSuccessTimeHasBeenSet; }

    /**
     * <p>The time stamp of the most recent successful ingestion of events for the
     * channel.</p>
     */
    inline void SetLatestIngestionSuccessTime(const Aws::Utils::DateTime& value) { m_latestIngestionSuccessTimeHasBeenSet = true; m_latestIngestionSuccessTime = value; }

    /**
     * <p>The time stamp of the most recent successful ingestion of events for the
     * channel.</p>
     */
    inline void SetLatestIngestionSuccessTime(Aws::Utils::DateTime&& value) { m_latestIngestionSuccessTimeHasBeenSet = true; m_latestIngestionSuccessTime = std::move(value); }

    /**
     * <p>The time stamp of the most recent successful ingestion of events for the
     * channel.</p>
     */
    inline IngestionStatus& WithLatestIngestionSuccessTime(const Aws::Utils::DateTime& value) { SetLatestIngestionSuccessTime(value); return *this;}

    /**
     * <p>The time stamp of the most recent successful ingestion of events for the
     * channel.</p>
     */
    inline IngestionStatus& WithLatestIngestionSuccessTime(Aws::Utils::DateTime&& value) { SetLatestIngestionSuccessTime(std::move(value)); return *this;}


    /**
     * <p>The event ID of the most recent successful ingestion of events.</p>
     */
    inline const Aws::String& GetLatestIngestionSuccessEventID() const{ return m_latestIngestionSuccessEventID; }

    /**
     * <p>The event ID of the most recent successful ingestion of events.</p>
     */
    inline bool LatestIngestionSuccessEventIDHasBeenSet() const { return m_latestIngestionSuccessEventIDHasBeenSet; }

    /**
     * <p>The event ID of the most recent successful ingestion of events.</p>
     */
    inline void SetLatestIngestionSuccessEventID(const Aws::String& value) { m_latestIngestionSuccessEventIDHasBeenSet = true; m_latestIngestionSuccessEventID = value; }

    /**
     * <p>The event ID of the most recent successful ingestion of events.</p>
     */
    inline void SetLatestIngestionSuccessEventID(Aws::String&& value) { m_latestIngestionSuccessEventIDHasBeenSet = true; m_latestIngestionSuccessEventID = std::move(value); }

    /**
     * <p>The event ID of the most recent successful ingestion of events.</p>
     */
    inline void SetLatestIngestionSuccessEventID(const char* value) { m_latestIngestionSuccessEventIDHasBeenSet = true; m_latestIngestionSuccessEventID.assign(value); }

    /**
     * <p>The event ID of the most recent successful ingestion of events.</p>
     */
    inline IngestionStatus& WithLatestIngestionSuccessEventID(const Aws::String& value) { SetLatestIngestionSuccessEventID(value); return *this;}

    /**
     * <p>The event ID of the most recent successful ingestion of events.</p>
     */
    inline IngestionStatus& WithLatestIngestionSuccessEventID(Aws::String&& value) { SetLatestIngestionSuccessEventID(std::move(value)); return *this;}

    /**
     * <p>The event ID of the most recent successful ingestion of events.</p>
     */
    inline IngestionStatus& WithLatestIngestionSuccessEventID(const char* value) { SetLatestIngestionSuccessEventID(value); return *this;}


    /**
     * <p>The error code for the most recent failure to ingest events.</p>
     */
    inline const Aws::String& GetLatestIngestionErrorCode() const{ return m_latestIngestionErrorCode; }

    /**
     * <p>The error code for the most recent failure to ingest events.</p>
     */
    inline bool LatestIngestionErrorCodeHasBeenSet() const { return m_latestIngestionErrorCodeHasBeenSet; }

    /**
     * <p>The error code for the most recent failure to ingest events.</p>
     */
    inline void SetLatestIngestionErrorCode(const Aws::String& value) { m_latestIngestionErrorCodeHasBeenSet = true; m_latestIngestionErrorCode = value; }

    /**
     * <p>The error code for the most recent failure to ingest events.</p>
     */
    inline void SetLatestIngestionErrorCode(Aws::String&& value) { m_latestIngestionErrorCodeHasBeenSet = true; m_latestIngestionErrorCode = std::move(value); }

    /**
     * <p>The error code for the most recent failure to ingest events.</p>
     */
    inline void SetLatestIngestionErrorCode(const char* value) { m_latestIngestionErrorCodeHasBeenSet = true; m_latestIngestionErrorCode.assign(value); }

    /**
     * <p>The error code for the most recent failure to ingest events.</p>
     */
    inline IngestionStatus& WithLatestIngestionErrorCode(const Aws::String& value) { SetLatestIngestionErrorCode(value); return *this;}

    /**
     * <p>The error code for the most recent failure to ingest events.</p>
     */
    inline IngestionStatus& WithLatestIngestionErrorCode(Aws::String&& value) { SetLatestIngestionErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code for the most recent failure to ingest events.</p>
     */
    inline IngestionStatus& WithLatestIngestionErrorCode(const char* value) { SetLatestIngestionErrorCode(value); return *this;}


    /**
     * <p>The time stamp of the most recent attempt to ingest events on the
     * channel.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestIngestionAttemptTime() const{ return m_latestIngestionAttemptTime; }

    /**
     * <p>The time stamp of the most recent attempt to ingest events on the
     * channel.</p>
     */
    inline bool LatestIngestionAttemptTimeHasBeenSet() const { return m_latestIngestionAttemptTimeHasBeenSet; }

    /**
     * <p>The time stamp of the most recent attempt to ingest events on the
     * channel.</p>
     */
    inline void SetLatestIngestionAttemptTime(const Aws::Utils::DateTime& value) { m_latestIngestionAttemptTimeHasBeenSet = true; m_latestIngestionAttemptTime = value; }

    /**
     * <p>The time stamp of the most recent attempt to ingest events on the
     * channel.</p>
     */
    inline void SetLatestIngestionAttemptTime(Aws::Utils::DateTime&& value) { m_latestIngestionAttemptTimeHasBeenSet = true; m_latestIngestionAttemptTime = std::move(value); }

    /**
     * <p>The time stamp of the most recent attempt to ingest events on the
     * channel.</p>
     */
    inline IngestionStatus& WithLatestIngestionAttemptTime(const Aws::Utils::DateTime& value) { SetLatestIngestionAttemptTime(value); return *this;}

    /**
     * <p>The time stamp of the most recent attempt to ingest events on the
     * channel.</p>
     */
    inline IngestionStatus& WithLatestIngestionAttemptTime(Aws::Utils::DateTime&& value) { SetLatestIngestionAttemptTime(std::move(value)); return *this;}


    /**
     * <p>The event ID of the most recent attempt to ingest events.</p>
     */
    inline const Aws::String& GetLatestIngestionAttemptEventID() const{ return m_latestIngestionAttemptEventID; }

    /**
     * <p>The event ID of the most recent attempt to ingest events.</p>
     */
    inline bool LatestIngestionAttemptEventIDHasBeenSet() const { return m_latestIngestionAttemptEventIDHasBeenSet; }

    /**
     * <p>The event ID of the most recent attempt to ingest events.</p>
     */
    inline void SetLatestIngestionAttemptEventID(const Aws::String& value) { m_latestIngestionAttemptEventIDHasBeenSet = true; m_latestIngestionAttemptEventID = value; }

    /**
     * <p>The event ID of the most recent attempt to ingest events.</p>
     */
    inline void SetLatestIngestionAttemptEventID(Aws::String&& value) { m_latestIngestionAttemptEventIDHasBeenSet = true; m_latestIngestionAttemptEventID = std::move(value); }

    /**
     * <p>The event ID of the most recent attempt to ingest events.</p>
     */
    inline void SetLatestIngestionAttemptEventID(const char* value) { m_latestIngestionAttemptEventIDHasBeenSet = true; m_latestIngestionAttemptEventID.assign(value); }

    /**
     * <p>The event ID of the most recent attempt to ingest events.</p>
     */
    inline IngestionStatus& WithLatestIngestionAttemptEventID(const Aws::String& value) { SetLatestIngestionAttemptEventID(value); return *this;}

    /**
     * <p>The event ID of the most recent attempt to ingest events.</p>
     */
    inline IngestionStatus& WithLatestIngestionAttemptEventID(Aws::String&& value) { SetLatestIngestionAttemptEventID(std::move(value)); return *this;}

    /**
     * <p>The event ID of the most recent attempt to ingest events.</p>
     */
    inline IngestionStatus& WithLatestIngestionAttemptEventID(const char* value) { SetLatestIngestionAttemptEventID(value); return *this;}

  private:

    Aws::Utils::DateTime m_latestIngestionSuccessTime;
    bool m_latestIngestionSuccessTimeHasBeenSet = false;

    Aws::String m_latestIngestionSuccessEventID;
    bool m_latestIngestionSuccessEventIDHasBeenSet = false;

    Aws::String m_latestIngestionErrorCode;
    bool m_latestIngestionErrorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_latestIngestionAttemptTime;
    bool m_latestIngestionAttemptTimeHasBeenSet = false;

    Aws::String m_latestIngestionAttemptEventID;
    bool m_latestIngestionAttemptEventIDHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
