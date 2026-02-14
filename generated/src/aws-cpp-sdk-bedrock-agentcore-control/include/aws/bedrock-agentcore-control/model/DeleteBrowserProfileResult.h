/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/BrowserProfileStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class DeleteBrowserProfileResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DeleteBrowserProfileResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API DeleteBrowserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API DeleteBrowserProfileResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the deleted browser profile.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  DeleteBrowserProfileResult& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the deleted browser profile.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  DeleteBrowserProfileResult& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the browser profile deletion.</p>
   */
  inline BrowserProfileStatus GetStatus() const { return m_status; }
  inline void SetStatus(BrowserProfileStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteBrowserProfileResult& WithStatus(BrowserProfileStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the browser profile was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  DeleteBrowserProfileResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when browser session data was last saved to this profile before
   * deletion.</p>
   */
  inline const Aws::Utils::DateTime& GetLastSavedAt() const { return m_lastSavedAt; }
  template <typename LastSavedAtT = Aws::Utils::DateTime>
  void SetLastSavedAt(LastSavedAtT&& value) {
    m_lastSavedAtHasBeenSet = true;
    m_lastSavedAt = std::forward<LastSavedAtT>(value);
  }
  template <typename LastSavedAtT = Aws::Utils::DateTime>
  DeleteBrowserProfileResult& WithLastSavedAt(LastSavedAtT&& value) {
    SetLastSavedAt(std::forward<LastSavedAtT>(value));
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
  DeleteBrowserProfileResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetResponseCode() const { return m_responseCode; }

 private:
  Aws::String m_profileId;

  Aws::String m_profileArn;

  BrowserProfileStatus m_status{BrowserProfileStatus::NOT_SET};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::Utils::DateTime m_lastSavedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_responseCode;
  bool m_profileIdHasBeenSet = false;
  bool m_profileArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_lastSavedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
