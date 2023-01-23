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
    AWS_KAFKACONNECT_API PluginDescription();
    AWS_KAFKACONNECT_API PluginDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API PluginDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about a custom plugin.</p>
     */
    inline const CustomPluginDescription& GetCustomPlugin() const{ return m_customPlugin; }

    /**
     * <p>Details about a custom plugin.</p>
     */
    inline bool CustomPluginHasBeenSet() const { return m_customPluginHasBeenSet; }

    /**
     * <p>Details about a custom plugin.</p>
     */
    inline void SetCustomPlugin(const CustomPluginDescription& value) { m_customPluginHasBeenSet = true; m_customPlugin = value; }

    /**
     * <p>Details about a custom plugin.</p>
     */
    inline void SetCustomPlugin(CustomPluginDescription&& value) { m_customPluginHasBeenSet = true; m_customPlugin = std::move(value); }

    /**
     * <p>Details about a custom plugin.</p>
     */
    inline PluginDescription& WithCustomPlugin(const CustomPluginDescription& value) { SetCustomPlugin(value); return *this;}

    /**
     * <p>Details about a custom plugin.</p>
     */
    inline PluginDescription& WithCustomPlugin(CustomPluginDescription&& value) { SetCustomPlugin(std::move(value)); return *this;}

  private:

    CustomPluginDescription m_customPlugin;
    bool m_customPluginHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
