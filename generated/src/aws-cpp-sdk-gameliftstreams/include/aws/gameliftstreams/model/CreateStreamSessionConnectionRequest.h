/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class CreateStreamSessionConnectionRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API CreateStreamSessionConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamSessionConnection"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A unique identifier that represents a client request. The request is
     * idempotent, which ensures that an API request completes only once. When users
     * send a request, Amazon GameLift Streams automatically populates this field. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateStreamSessionConnectionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateStreamSessionConnectionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateStreamSessionConnectionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
     * resource. Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:streamgroup/1AB2C3De4</code>
     * or ID-<code>1AB2C3De4</code>. </p> <p> The stream group that you want to run
     * this stream session with. The stream group must be in <code>ACTIVE</code> status
     * and have idle stream capacity. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline CreateStreamSessionConnectionRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline CreateStreamSessionConnectionRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline CreateStreamSessionConnectionRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A WebRTC ICE offer string to use when initializing a WebRTC connection. The
     * offer is a very long JSON string. Provide the string as a text value in quotes.
     * The offer must be newly generated, not the same offer provided to
     * <code>StartStreamSession</code>. </p>
     */
    inline const Aws::String& GetSignalRequest() const{ return m_signalRequest; }
    inline bool SignalRequestHasBeenSet() const { return m_signalRequestHasBeenSet; }
    inline void SetSignalRequest(const Aws::String& value) { m_signalRequestHasBeenSet = true; m_signalRequest = value; }
    inline void SetSignalRequest(Aws::String&& value) { m_signalRequestHasBeenSet = true; m_signalRequest = std::move(value); }
    inline void SetSignalRequest(const char* value) { m_signalRequestHasBeenSet = true; m_signalRequest.assign(value); }
    inline CreateStreamSessionConnectionRequest& WithSignalRequest(const Aws::String& value) { SetSignalRequest(value); return *this;}
    inline CreateStreamSessionConnectionRequest& WithSignalRequest(Aws::String&& value) { SetSignalRequest(std::move(value)); return *this;}
    inline CreateStreamSessionConnectionRequest& WithSignalRequest(const char* value) { SetSignalRequest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> that uniquely identifies the stream session resource.
     * Format example: <code>1AB2C3De4</code>. The stream session must be in
     * <code>PENDING_CLIENT_RECONNECTION</code> or <code>ACTIVE</code> status. </p>
     */
    inline const Aws::String& GetStreamSessionIdentifier() const{ return m_streamSessionIdentifier; }
    inline bool StreamSessionIdentifierHasBeenSet() const { return m_streamSessionIdentifierHasBeenSet; }
    inline void SetStreamSessionIdentifier(const Aws::String& value) { m_streamSessionIdentifierHasBeenSet = true; m_streamSessionIdentifier = value; }
    inline void SetStreamSessionIdentifier(Aws::String&& value) { m_streamSessionIdentifierHasBeenSet = true; m_streamSessionIdentifier = std::move(value); }
    inline void SetStreamSessionIdentifier(const char* value) { m_streamSessionIdentifierHasBeenSet = true; m_streamSessionIdentifier.assign(value); }
    inline CreateStreamSessionConnectionRequest& WithStreamSessionIdentifier(const Aws::String& value) { SetStreamSessionIdentifier(value); return *this;}
    inline CreateStreamSessionConnectionRequest& WithStreamSessionIdentifier(Aws::String&& value) { SetStreamSessionIdentifier(std::move(value)); return *this;}
    inline CreateStreamSessionConnectionRequest& WithStreamSessionIdentifier(const char* value) { SetStreamSessionIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_signalRequest;
    bool m_signalRequestHasBeenSet = false;

    Aws::String m_streamSessionIdentifier;
    bool m_streamSessionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
