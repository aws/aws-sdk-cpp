/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/IoT_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IoT {
namespace Model {

/**
 */
class GetThingConnectivityDataRequest : public IoTRequest {
 public:
  AWS_IOT_API GetThingConnectivityDataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetThingConnectivityData"; }

  AWS_IOT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of your IoT thing.</p>
   */
  inline const Aws::String& GetThingName() const { return m_thingName; }
  inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
  template <typename ThingNameT = Aws::String>
  void SetThingName(ThingNameT&& value) {
    m_thingNameHasBeenSet = true;
    m_thingName = std::forward<ThingNameT>(value);
  }
  template <typename ThingNameT = Aws::String>
  GetThingConnectivityDataRequest& WithThingName(ThingNameT&& value) {
    SetThingName(std::forward<ThingNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies if socket information (sourcePort, targetPort, sourceIp, targetIp,
   * vpcEndpointId) should be included in the GetThingConnectivityData response. Set
   * to <code>true</code> to include socket information. Set to <code>false</code> to
   * omit socket information. By default, this is set to <code>false</code>.</p>
   */
  inline bool GetIncludeSocketInformation() const { return m_includeSocketInformation; }
  inline bool IncludeSocketInformationHasBeenSet() const { return m_includeSocketInformationHasBeenSet; }
  inline void SetIncludeSocketInformation(bool value) {
    m_includeSocketInformationHasBeenSet = true;
    m_includeSocketInformation = value;
  }
  inline GetThingConnectivityDataRequest& WithIncludeSocketInformation(bool value) {
    SetIncludeSocketInformation(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_thingName;

  bool m_includeSocketInformation{false};
  bool m_thingNameHasBeenSet = false;
  bool m_includeSocketInformationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
