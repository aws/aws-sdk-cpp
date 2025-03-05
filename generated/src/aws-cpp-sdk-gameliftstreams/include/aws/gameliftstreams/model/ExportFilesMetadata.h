/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/ExportFilesStatus.h>
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
namespace GameLiftStreams
{
namespace Model
{

  /**
   * <p>Provides details about the stream session's exported files. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ExportFilesMetadata">AWS
   * API Reference</a></p>
   */
  class ExportFilesMetadata
  {
  public:
    AWS_GAMELIFTSTREAMS_API ExportFilesMetadata();
    AWS_GAMELIFTSTREAMS_API ExportFilesMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API ExportFilesMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The S3 bucket URI where Amazon GameLift Streams uploaded the set of
     * compressed exported files for a stream session. Amazon GameLift Streams
     * generates a ZIP file name based on the stream session metadata. Alternatively,
     * you can provide a custom file name with a <code>.zip</code> file extension.</p>
     * <p> Example 1: If you provide an S3 URI called
     * <code>s3://MyBucket/MyGame_Session1.zip</code>, then Amazon GameLift Streams
     * will save the files at that location. </p> <p> Example 2: If you provide an S3
     * URI called <code>s3://MyBucket/MyGameSessions_ExportedFiles/</code>, then Amazon
     * GameLift Streams will save the files at
     * <code>s3://MyBucket/MyGameSessions_ExportedFiles/YYYYMMDD-HHMMSS-appId-sg-Id-sessionId.zip</code>
     * or another similar name. </p>
     */
    inline const Aws::String& GetOutputUri() const{ return m_outputUri; }
    inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }
    inline void SetOutputUri(const Aws::String& value) { m_outputUriHasBeenSet = true; m_outputUri = value; }
    inline void SetOutputUri(Aws::String&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::move(value); }
    inline void SetOutputUri(const char* value) { m_outputUriHasBeenSet = true; m_outputUri.assign(value); }
    inline ExportFilesMetadata& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}
    inline ExportFilesMetadata& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}
    inline ExportFilesMetadata& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the <a>ExportStreamSessionFiles</a> operation.</p>
     */
    inline const ExportFilesStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExportFilesStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExportFilesStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExportFilesMetadata& WithStatus(const ExportFilesStatus& value) { SetStatus(value); return *this;}
    inline ExportFilesMetadata& WithStatus(ExportFilesStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the reason the export is in <code>FAILED</code>
     * status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline ExportFilesMetadata& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline ExportFilesMetadata& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline ExportFilesMetadata& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet = false;

    ExportFilesStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
