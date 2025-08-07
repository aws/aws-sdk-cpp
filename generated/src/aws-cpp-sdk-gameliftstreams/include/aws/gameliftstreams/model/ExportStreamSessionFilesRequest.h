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
    AWS_GAMELIFTSTREAMS_API ExportStreamSessionFilesRequest() = default;

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
     * resource. Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
     * Example ID: <code>sg-1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    ExportStreamSessionFilesRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream session
     * resource. Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamsession/sg-1AB2C3De4/ABC123def4567</code>.
     * Example ID: <code>ABC123def4567</code>. </p>
     */
    inline const Aws::String& GetStreamSessionIdentifier() const { return m_streamSessionIdentifier; }
    inline bool StreamSessionIdentifierHasBeenSet() const { return m_streamSessionIdentifierHasBeenSet; }
    template<typename StreamSessionIdentifierT = Aws::String>
    void SetStreamSessionIdentifier(StreamSessionIdentifierT&& value) { m_streamSessionIdentifierHasBeenSet = true; m_streamSessionIdentifier = std::forward<StreamSessionIdentifierT>(value); }
    template<typename StreamSessionIdentifierT = Aws::String>
    ExportStreamSessionFilesRequest& WithStreamSessionIdentifier(StreamSessionIdentifierT&& value) { SetStreamSessionIdentifier(std::forward<StreamSessionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket URI where Amazon GameLift Streams uploads the set of
     * compressed exported files for this stream session. Amazon GameLift Streams
     * generates a ZIP file name based on the stream session metadata. Alternatively,
     * you can provide a custom file name with a <code>.zip</code> file extension.</p>
     * <p> Example 1: If you provide an S3 URI called
     * <code>s3://amzn-s3-demo-destination-bucket/MyGame_Session1.zip</code>, then
     * Amazon GameLift Streams will save the files at that location. </p> <p> Example
     * 2: If you provide an S3 URI called
     * <code>s3://amzn-s3-demo-destination-bucket/MyGameSessions_ExportedFiles/</code>,
     * then Amazon GameLift Streams will save the files at
     * <code>s3://amzn-s3-demo-destination-bucket/MyGameSessions_ExportedFiles/YYYYMMDD-HHMMSS-appId-sg-Id-sessionId.zip</code>
     * or another similar name. </p>
     */
    inline const Aws::String& GetOutputUri() const { return m_outputUri; }
    inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }
    template<typename OutputUriT = Aws::String>
    void SetOutputUri(OutputUriT&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::forward<OutputUriT>(value); }
    template<typename OutputUriT = Aws::String>
    ExportStreamSessionFilesRequest& WithOutputUri(OutputUriT&& value) { SetOutputUri(std::forward<OutputUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_streamSessionIdentifier;
    bool m_streamSessionIdentifierHasBeenSet = false;

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
