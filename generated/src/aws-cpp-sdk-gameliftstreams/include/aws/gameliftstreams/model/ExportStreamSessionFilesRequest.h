/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class ExportStreamSessionFilesRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API ExportStreamSessionFilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportStreamSessionFiles"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
     * resource. Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:streamgroup/1AB2C3De4</code>
     * or ID-<code>1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline ExportStreamSessionFilesRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline ExportStreamSessionFilesRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ExportStreamSessionFilesRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket URI where Amazon GameLift Streams uploads the set of
     * compressed exported files for this stream session. Amazon GameLift Streams
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
    inline ExportStreamSessionFilesRequest& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}
    inline ExportStreamSessionFilesRequest& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}
    inline ExportStreamSessionFilesRequest& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream session
     * resource. Format example: <code>1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetStreamSessionIdentifier() const{ return m_streamSessionIdentifier; }
    inline bool StreamSessionIdentifierHasBeenSet() const { return m_streamSessionIdentifierHasBeenSet; }
    inline void SetStreamSessionIdentifier(const Aws::String& value) { m_streamSessionIdentifierHasBeenSet = true; m_streamSessionIdentifier = value; }
    inline void SetStreamSessionIdentifier(Aws::String&& value) { m_streamSessionIdentifierHasBeenSet = true; m_streamSessionIdentifier = std::move(value); }
    inline void SetStreamSessionIdentifier(const char* value) { m_streamSessionIdentifierHasBeenSet = true; m_streamSessionIdentifier.assign(value); }
    inline ExportStreamSessionFilesRequest& WithStreamSessionIdentifier(const Aws::String& value) { SetStreamSessionIdentifier(value); return *this;}
    inline ExportStreamSessionFilesRequest& WithStreamSessionIdentifier(Aws::String&& value) { SetStreamSessionIdentifier(std::move(value)); return *this;}
    inline ExportStreamSessionFilesRequest& WithStreamSessionIdentifier(const char* value) { SetStreamSessionIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet = false;

    Aws::String m_streamSessionIdentifier;
    bool m_streamSessionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
