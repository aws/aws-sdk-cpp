/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-data/IoTDataPlaneRequest.h>
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace IoTDataPlane {
namespace Model {

/**
 */
class GetConnectionRequest : public IoTDataPlaneRequest {
 public:
  AWS_IOTDATAPLANE_API GetConnectionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetConnection"; }

  AWS_IOTDATAPLANE_API Aws::String SerializePayload() const override;

  AWS_IOTDATAPLANE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the MQTT client to retrieve connection information.
   * The client ID can't start with a dollar sign ($).</p> <p>MQTT client IDs must be
   * URL encoded (percent-encoded) when they contain characters that are not valid in
   * HTTP requests, such as spaces, forward slashes (/), and UTF-8 characters.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  GetConnectionRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies if socket information (sourcePort, targetPort, sourceIp, targetIp)
   * should be included in the GetConnection response. Set to <code>TRUE</code> to
   * include socket information. Set to <code>FALSE</code> to omit socket
   * information. By default, this is set to <code>FALSE</code>. See the <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/mqtt.html#mqtt-client-disconnect">developer
   * guide</a> for how to authorize this parameter.</p>
   */
  inline bool GetIncludeSocketInformation() const { return m_includeSocketInformation; }
  inline bool IncludeSocketInformationHasBeenSet() const { return m_includeSocketInformationHasBeenSet; }
  inline void SetIncludeSocketInformation(bool value) {
    m_includeSocketInformationHasBeenSet = true;
    m_includeSocketInformation = value;
  }
  inline GetConnectionRequest& WithIncludeSocketInformation(bool value) {
    SetIncludeSocketInformation(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  bool m_includeSocketInformation{false};
  bool m_clientIdHasBeenSet = false;
  bool m_includeSocketInformationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTDataPlane
}  // namespace Aws
