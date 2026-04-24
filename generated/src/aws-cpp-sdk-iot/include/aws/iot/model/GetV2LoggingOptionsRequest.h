/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoTRequest.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace IoT {
namespace Model {

/**
 */
class GetV2LoggingOptionsRequest : public IoTRequest {
 public:
  AWS_IOT_API GetV2LoggingOptionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetV2LoggingOptions"; }

  AWS_IOT_API Aws::String SerializePayload() const override;

  AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p> The flag is used to get all the event types and their respective
   * configuration that event-based logging supports. </p>
   */
  inline bool GetVerbose() const { return m_verbose; }
  inline bool VerboseHasBeenSet() const { return m_verboseHasBeenSet; }
  inline void SetVerbose(bool value) {
    m_verboseHasBeenSet = true;
    m_verbose = value;
  }
  inline GetV2LoggingOptionsRequest& WithVerbose(bool value) {
    SetVerbose(value);
    return *this;
  }
  ///@}
 private:
  bool m_verbose{false};
  bool m_verboseHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
