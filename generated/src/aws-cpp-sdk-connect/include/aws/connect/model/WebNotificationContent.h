/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContentAttributes.h>
#include <aws/connect/model/NotificationType.h>
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
 * <p>The content of an outbound web notification, including the notification type,
 * the view to render, and any optional attributes used to populate the
 * view.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WebNotificationContent">AWS
 * API Reference</a></p>
 */
class WebNotificationContent {
 public:
  AWS_CONNECT_API WebNotificationContent() = default;
  AWS_CONNECT_API WebNotificationContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WebNotificationContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of web notification to send.</p>
   */
  inline NotificationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(NotificationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline WebNotificationContent& WithType(NotificationType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the view to render for the
   * notification.</p>
   */
  inline const Aws::String& GetViewArn() const { return m_viewArn; }
  inline bool ViewArnHasBeenSet() const { return m_viewArnHasBeenSet; }
  template <typename ViewArnT = Aws::String>
  void SetViewArn(ViewArnT&& value) {
    m_viewArnHasBeenSet = true;
    m_viewArn = std::forward<ViewArnT>(value);
  }
  template <typename ViewArnT = Aws::String>
  WebNotificationContent& WithViewArn(ViewArnT&& value) {
    SetViewArn(std::forward<ViewArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional attributes used to populate the notification content, such as
   * recommender configuration for personalized content.</p>
   */
  inline const ContentAttributes& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = ContentAttributes>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = ContentAttributes>
  WebNotificationContent& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}
 private:
  NotificationType m_type{NotificationType::NOT_SET};

  Aws::String m_viewArn;

  ContentAttributes m_attributes;
  bool m_typeHasBeenSet = false;
  bool m_viewArnHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
