/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/StreamUrlStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace GameLiftStreams {
namespace Model {

/**
 */
class ListStreamUrlsRequest : public GameLiftStreamsRequest {
 public:
  AWS_GAMELIFTSTREAMS_API ListStreamUrlsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListStreamUrls"; }

  AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;

  AWS_GAMELIFTSTREAMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Filters the list to stream URLs with the specified status.</p> <ul> <li> <p>
   * <code>ACTIVE</code>: The stream URL is valid and can start stream sessions.</p>
   * </li> <li> <p> <code>EXPIRED</code>: The stream URL has passed its expiration
   * time and can no longer start stream sessions.</p> </li> <li> <p>
   * <code>REVOKED</code>: The stream URL was revoked and can no longer start stream
   * sessions.</p> </li> <li> <p> <code>LIMIT_REACHED</code>: The stream URL has been
   * used the maximum number of times and can no longer start stream sessions.</p>
   * </li> </ul>
   */
  inline StreamUrlStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(StreamUrlStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListStreamUrlsRequest& WithStatus(StreamUrlStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the list to stream URLs that belong to the specified stream
   * group.</p> <p>This value is an <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
   * resource. Example ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
   * Example ID: <code>sg-1AB2C3De4</code>. </p>
   */
  inline const Aws::String& GetStreamGroupIdentifier() const { return m_streamGroupIdentifier; }
  inline bool StreamGroupIdentifierHasBeenSet() const { return m_streamGroupIdentifierHasBeenSet; }
  template <typename StreamGroupIdentifierT = Aws::String>
  void SetStreamGroupIdentifier(StreamGroupIdentifierT&& value) {
    m_streamGroupIdentifierHasBeenSet = true;
    m_streamGroupIdentifier = std::forward<StreamGroupIdentifierT>(value);
  }
  template <typename StreamGroupIdentifierT = Aws::String>
  ListStreamUrlsRequest& WithStreamGroupIdentifier(StreamGroupIdentifierT&& value) {
    SetStreamGroupIdentifier(std::forward<StreamGroupIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token that marks the start of the next set of results. Use this token
   * when you retrieve results as sequential pages. To get the first page of results,
   * omit a token value. To get the remaining pages, provide the token returned with
   * the previous result set. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListStreamUrlsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per page. Valid values are 1-100. The
   * default is 25.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListStreamUrlsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  StreamUrlStatus m_status{StreamUrlStatus::NOT_SET};

  Aws::String m_streamGroupIdentifier;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_statusHasBeenSet = false;
  bool m_streamGroupIdentifierHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
