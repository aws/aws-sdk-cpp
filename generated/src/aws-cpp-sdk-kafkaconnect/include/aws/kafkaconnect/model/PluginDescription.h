/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CustomPluginDescription.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>The description of the plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/PluginDescription">AWS
   * API Reference</a></p>
   */
  class PluginDescription
  {
  public:
    AWS_KAFKACONNECT_API PluginDescription() = default;
    AWS_KAFKACONNECT_API PluginDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API PluginDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about a custom plugin.</p>
     */
    inline const CustomPluginDescription& GetCustomPlugin() const { return m_customPlugin; }
    inline bool CustomPluginHasBeenSet() const { return m_customPluginHasBeenSet; }
    template<typename CustomPluginT = CustomPluginDescription>
    void SetCustomPlugin(CustomPluginT&& value) { m_customPluginHasBeenSet = true; m_customPlugin = std::forward<CustomPluginT>(value); }
    template<typename CustomPluginT = CustomPluginDescription>
    PluginDescription& WithCustomPlugin(CustomPluginT&& value) { SetCustomPlugin(std::forward<CustomPluginT>(value)); return *this;}
    ///@}
  private:

    CustomPluginDescription m_customPlugin;
    bool m_customPluginHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
