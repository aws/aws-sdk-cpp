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
  class GetStreamSessionRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API GetStreamSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetStreamSession"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The stream group that runs this stream session.</p> <p>This value is an <a
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
    GetStreamSessionRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
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
    GetStreamSessionRequest& WithStreamSessionIdentifier(StreamSessionIdentifierT&& value) { SetStreamSessionIdentifier(std::forward<StreamSessionIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_streamSessionIdentifier;
    bool m_streamSessionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
