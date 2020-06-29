/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/HttpUrlDestinationConfiguration.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Configuration of the topic rule destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TopicRuleDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API TopicRuleDestinationConfiguration
  {
  public:
    TopicRuleDestinationConfiguration();
    TopicRuleDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    TopicRuleDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration of the HTTP URL.</p>
     */
    inline const HttpUrlDestinationConfiguration& GetHttpUrlConfiguration() const{ return m_httpUrlConfiguration; }

    /**
     * <p>Configuration of the HTTP URL.</p>
     */
    inline bool HttpUrlConfigurationHasBeenSet() const { return m_httpUrlConfigurationHasBeenSet; }

    /**
     * <p>Configuration of the HTTP URL.</p>
     */
    inline void SetHttpUrlConfiguration(const HttpUrlDestinationConfiguration& value) { m_httpUrlConfigurationHasBeenSet = true; m_httpUrlConfiguration = value; }

    /**
     * <p>Configuration of the HTTP URL.</p>
     */
    inline void SetHttpUrlConfiguration(HttpUrlDestinationConfiguration&& value) { m_httpUrlConfigurationHasBeenSet = true; m_httpUrlConfiguration = std::move(value); }

    /**
     * <p>Configuration of the HTTP URL.</p>
     */
    inline TopicRuleDestinationConfiguration& WithHttpUrlConfiguration(const HttpUrlDestinationConfiguration& value) { SetHttpUrlConfiguration(value); return *this;}

    /**
     * <p>Configuration of the HTTP URL.</p>
     */
    inline TopicRuleDestinationConfiguration& WithHttpUrlConfiguration(HttpUrlDestinationConfiguration&& value) { SetHttpUrlConfiguration(std::move(value)); return *this;}

  private:

    HttpUrlDestinationConfiguration m_httpUrlConfiguration;
    bool m_httpUrlConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
