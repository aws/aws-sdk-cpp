/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class StartTelemetryQuerySessionRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API StartTelemetryQuerySessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartTelemetryQuerySession"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A human-readable name for the session. Names under <code>/aws/</code> are
   * reserved for service integrations.</p>
   */
  inline const Aws::String& GetSessionName() const { return m_sessionName; }
  inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }
  template <typename SessionNameT = Aws::String>
  void SetSessionName(SessionNameT&& value) {
    m_sessionNameHasBeenSet = true;
    m_sessionName = std::forward<SessionNameT>(value);
  }
  template <typename SessionNameT = Aws::String>
  StartTelemetryQuerySessionRequest& WithSessionName(SessionNameT&& value) {
    SetSessionName(std::forward<SessionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionName;
  bool m_sessionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
