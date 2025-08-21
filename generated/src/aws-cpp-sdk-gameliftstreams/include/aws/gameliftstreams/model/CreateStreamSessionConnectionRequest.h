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
    AWS_GAMELIFTSTREAMS_API CreateStreamSessionConnectionRequest() = default;

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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateStreamSessionConnectionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
     * resource. Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
     * Example ID: <code>sg-1AB2C3De4</code>. </p> <p> The stream group that you want
     * to run this stream session with. The stream group must be in <code>ACTIVE</code>
     * status. </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    CreateStreamSessionConnectionRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream session
     * resource. Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamsession/sg-1AB2C3De4/ABC123def4567</code>.
     * Example ID: <code>ABC123def4567</code>. </p> <p> The stream session must be in
     * <code>PENDING_CLIENT_RECONNECTION</code> or <code>ACTIVE</code> status. </p>
     */
    inline const Aws::String& GetStreamSessionIdentifier() const { return m_streamSessionIdentifier; }
    inline bool StreamSessionIdentifierHasBeenSet() const { return m_streamSessionIdentifierHasBeenSet; }
    template<typename StreamSessionIdentifierT = Aws::String>
    void SetStreamSessionIdentifier(StreamSessionIdentifierT&& value) { m_streamSessionIdentifierHasBeenSet = true; m_streamSessionIdentifier = std::forward<StreamSessionIdentifierT>(value); }
    template<typename StreamSessionIdentifierT = Aws::String>
    CreateStreamSessionConnectionRequest& WithStreamSessionIdentifier(StreamSessionIdentifierT&& value) { SetStreamSessionIdentifier(std::forward<StreamSessionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A WebRTC ICE offer string to use when initializing a WebRTC connection. The
     * offer is a very long JSON string. Provide the string as a text value in quotes.
     * The offer must be newly generated, not the same offer provided to
     * <code>StartStreamSession</code>. </p>
     */
    inline const Aws::String& GetSignalRequest() const { return m_signalRequest; }
    inline bool SignalRequestHasBeenSet() const { return m_signalRequestHasBeenSet; }
    template<typename SignalRequestT = Aws::String>
    void SetSignalRequest(SignalRequestT&& value) { m_signalRequestHasBeenSet = true; m_signalRequest = std::forward<SignalRequestT>(value); }
    template<typename SignalRequestT = Aws::String>
    CreateStreamSessionConnectionRequest& WithSignalRequest(SignalRequestT&& value) { SetSignalRequest(std::forward<SignalRequestT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_streamSessionIdentifier;
    bool m_streamSessionIdentifierHasBeenSet = false;

    Aws::String m_signalRequest;
    bool m_signalRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
