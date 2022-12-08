/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CustomPlugin.h>
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
   * <p>A plugin is an AWS resource that contains the code that defines your
   * connector logic. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/Plugin">AWS
   * API Reference</a></p>
   */
  class Plugin
  {
  public:
    AWS_KAFKACONNECT_API Plugin();
    AWS_KAFKACONNECT_API Plugin(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Plugin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about a custom plugin.</p>
     */
    inline const CustomPlugin& GetCustomPlugin() const{ return m_customPlugin; }

    /**
     * <p>Details about a custom plugin.</p>
     */
    inline bool CustomPluginHasBeenSet() const { return m_customPluginHasBeenSet; }

    /**
     * <p>Details about a custom plugin.</p>
     */
    inline void SetCustomPlugin(const CustomPlugin& value) { m_customPluginHasBeenSet = true; m_customPlugin = value; }

    /**
     * <p>Details about a custom plugin.</p>
     */
    inline void SetCustomPlugin(CustomPlugin&& value) { m_customPluginHasBeenSet = true; m_customPlugin = std::move(value); }

    /**
     * <p>Details about a custom plugin.</p>
     */
    inline Plugin& WithCustomPlugin(const CustomPlugin& value) { SetCustomPlugin(value); return *this;}

    /**
     * <p>Details about a custom plugin.</p>
     */
    inline Plugin& WithCustomPlugin(CustomPlugin&& value) { SetCustomPlugin(std::move(value)); return *this;}

  private:

    CustomPlugin m_customPlugin;
    bool m_customPluginHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
