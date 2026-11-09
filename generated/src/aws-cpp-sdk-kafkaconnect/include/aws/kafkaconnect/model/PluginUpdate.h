/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CustomPluginUpdate.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KafkaConnect {
namespace Model {

/**
 * <p>A custom plugin to use when you update a connector via
 * <code>UpdateConnector</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/PluginUpdate">AWS
 * API Reference</a></p>
 */
class PluginUpdate {
 public:
  AWS_KAFKACONNECT_API PluginUpdate() = default;
  AWS_KAFKACONNECT_API PluginUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKACONNECT_API PluginUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The custom plugin to use for the connector.</p>
   */
  inline const CustomPluginUpdate& GetCustomPlugin() const { return m_customPlugin; }
  inline bool CustomPluginHasBeenSet() const { return m_customPluginHasBeenSet; }
  template <typename CustomPluginT = CustomPluginUpdate>
  void SetCustomPlugin(CustomPluginT&& value) {
    m_customPluginHasBeenSet = true;
    m_customPlugin = std::forward<CustomPluginT>(value);
  }
  template <typename CustomPluginT = CustomPluginUpdate>
  PluginUpdate& WithCustomPlugin(CustomPluginT&& value) {
    SetCustomPlugin(std::forward<CustomPluginT>(value));
    return *this;
  }
  ///@}
 private:
  CustomPluginUpdate m_customPlugin;
  bool m_customPluginHasBeenSet = false;
};

}  // namespace Model
}  // namespace KafkaConnect
}  // namespace Aws
