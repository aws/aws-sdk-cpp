/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gameliftstreams/model/ExportFilesMetadata.h>
#include <aws/gameliftstreams/model/Protocol.h>
#include <aws/gameliftstreams/model/StreamSessionStatus.h>
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
   * <p>Describes a Amazon GameLift Streams stream session. To retrieve additional
   * details for the stream session, call <a>GetStreamSession</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/StreamSessionSummary">AWS
   * API Reference</a></p>
   */
  class StreamSessionSummary
  {
  public:
    AWS_GAMELIFTSTREAMS_API StreamSessionSummary();
    AWS_GAMELIFTSTREAMS_API StreamSessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API StreamSessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the application resource.
     * Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>
     * or ID-<code>9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }
    inline StreamSessionSummary& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline StreamSessionSummary& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline StreamSessionSummary& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> that uniquely identifies the stream session resource.
     * Format example: <code>1AB2C3De4</code>. .</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline StreamSessionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StreamSessionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StreamSessionSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline StreamSessionSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline StreamSessionSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the stream session's exported files. </p>
     */
    inline const ExportFilesMetadata& GetExportFilesMetadata() const{ return m_exportFilesMetadata; }
    inline bool ExportFilesMetadataHasBeenSet() const { return m_exportFilesMetadataHasBeenSet; }
    inline void SetExportFilesMetadata(const ExportFilesMetadata& value) { m_exportFilesMetadataHasBeenSet = true; m_exportFilesMetadata = value; }
    inline void SetExportFilesMetadata(ExportFilesMetadata&& value) { m_exportFilesMetadataHasBeenSet = true; m_exportFilesMetadata = std::move(value); }
    inline StreamSessionSummary& WithExportFilesMetadata(const ExportFilesMetadata& value) { SetExportFilesMetadata(value); return *this;}
    inline StreamSessionSummary& WithExportFilesMetadata(ExportFilesMetadata&& value) { SetExportFilesMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline StreamSessionSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline StreamSessionSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where Amazon GameLift Streams is hosting the stream session.</p>
     * <p> A location's name. For example, <code>us-east-1</code>. For a complete list
     * of locations that Amazon GameLift Streams supports, see the Regions and quotas
     * section in the Amazon GameLift Streams Developer Guide . </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline StreamSessionSummary& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline StreamSessionSummary& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline StreamSessionSummary& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transfer protocol in use with the stream session.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline StreamSessionSummary& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline StreamSessionSummary& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the stream session resource. Possible statuses include
     * the following: </p> <ul> <li> <p> <code>ACTIVATING</code>: The stream session is
     * starting and preparing to stream.</p> </li> <li> <p> <code>ACTIVE</code>: The
     * stream session is ready to accept client connections.</p> </li> <li> <p>
     * <code>CONNECTED</code>: The stream session has a connected client.</p> </li>
     * <li> <p> <code>PENDING_CLIENT_RECONNECTION</code>: A client has recently
     * disconnected, and the stream session is waiting for the client to reconnect.
     * After a short time, if the client doesn't reconnect, the stream session status
     * transitions to <code>TERMINATED</code>.</p> </li> <li> <p>
     * <code>TERMINATING</code>: The stream session is ending.</p> </li> <li> <p>
     * <code>TERMINATED</code>: The stream session has ended.</p> </li> <li> <p>
     * <code>ERROR</code>: The stream session failed to activate.</p> </li> </ul>
     */
    inline const StreamSessionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StreamSessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StreamSessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StreamSessionSummary& WithStatus(const StreamSessionStatus& value) { SetStatus(value); return *this;}
    inline StreamSessionSummary& WithStatus(StreamSessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An opaque, unique identifier for an end-user, defined by the developer. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline StreamSessionSummary& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline StreamSessionSummary& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline StreamSessionSummary& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ExportFilesMetadata m_exportFilesMetadata;
    bool m_exportFilesMetadataHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    StreamSessionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
