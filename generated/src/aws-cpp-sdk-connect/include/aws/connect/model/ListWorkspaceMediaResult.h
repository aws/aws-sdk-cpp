/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MediaItem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class ListWorkspaceMediaResult {
 public:
  AWS_CONNECT_API ListWorkspaceMediaResult() = default;
  AWS_CONNECT_API ListWorkspaceMediaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListWorkspaceMediaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of media assets for the workspace.</p>
   */
  inline const Aws::Vector<MediaItem>& GetMedia() const { return m_media; }
  template <typename MediaT = Aws::Vector<MediaItem>>
  void SetMedia(MediaT&& value) {
    m_mediaHasBeenSet = true;
    m_media = std::forward<MediaT>(value);
  }
  template <typename MediaT = Aws::Vector<MediaItem>>
  ListWorkspaceMediaResult& WithMedia(MediaT&& value) {
    SetMedia(std::forward<MediaT>(value));
    return *this;
  }
  template <typename MediaT = MediaItem>
  ListWorkspaceMediaResult& AddMedia(MediaT&& value) {
    m_mediaHasBeenSet = true;
    m_media.emplace_back(std::forward<MediaT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListWorkspaceMediaResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MediaItem> m_media;
  bool m_mediaHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
