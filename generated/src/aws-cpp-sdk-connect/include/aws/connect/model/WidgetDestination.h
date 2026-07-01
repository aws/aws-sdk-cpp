/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The destination for an outbound web notification, specifying the
 * communication widget that delivers the notification and the customer profile of
 * the recipient.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WidgetDestination">AWS
 * API Reference</a></p>
 */
class WidgetDestination {
 public:
  AWS_CONNECT_API WidgetDestination() = default;
  AWS_CONNECT_API WidgetDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WidgetDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the communication widget that delivers the notification to
   * the customer's browser.</p>
   */
  inline const Aws::String& GetWidgetId() const { return m_widgetId; }
  inline bool WidgetIdHasBeenSet() const { return m_widgetIdHasBeenSet; }
  template <typename WidgetIdT = Aws::String>
  void SetWidgetId(WidgetIdT&& value) {
    m_widgetIdHasBeenSet = true;
    m_widgetId = std::forward<WidgetIdT>(value);
  }
  template <typename WidgetIdT = Aws::String>
  WidgetDestination& WithWidgetId(WidgetIdT&& value) {
    SetWidgetId(std::forward<WidgetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the customer profile associated with the browser session
   * that should receive the notification.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  WidgetDestination& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_widgetId;

  Aws::String m_profileId;
  bool m_widgetIdHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
