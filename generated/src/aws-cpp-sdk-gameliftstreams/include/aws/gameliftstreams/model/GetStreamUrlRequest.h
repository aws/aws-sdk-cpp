/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>

#include <utility>

namespace Aws {
namespace GameLiftStreams {
namespace Model {

/**
 */
class GetStreamUrlRequest : public GameLiftStreamsRequest {
 public:
  AWS_GAMELIFTSTREAMS_API GetStreamUrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetStreamUrl"; }

  AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>An <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
   * resource. Example ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
   * Example ID: <code>sg-1AB2C3De4</code>. </p> <p>This is the stream group that
   * owns the stream URL.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  GetStreamUrlRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the stream URL. Specify a stream URL ID or Amazon
   * Resource Name (ARN). Example ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamurl/sg-1AB2C3De4/su-1AB2C3De4</code>.
   * Example ID: <code>su-1AB2C3De4</code>.</p>
   */
  inline const Aws::String& GetStreamUrlIdentifier() const { return m_streamUrlIdentifier; }
  inline bool StreamUrlIdentifierHasBeenSet() const { return m_streamUrlIdentifierHasBeenSet; }
  template <typename StreamUrlIdentifierT = Aws::String>
  void SetStreamUrlIdentifier(StreamUrlIdentifierT&& value) {
    m_streamUrlIdentifierHasBeenSet = true;
    m_streamUrlIdentifier = std::forward<StreamUrlIdentifierT>(value);
  }
  template <typename StreamUrlIdentifierT = Aws::String>
  GetStreamUrlRequest& WithStreamUrlIdentifier(StreamUrlIdentifierT&& value) {
    SetStreamUrlIdentifier(std::forward<StreamUrlIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_streamUrlIdentifier;
  bool m_identifierHasBeenSet = false;
  bool m_streamUrlIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
