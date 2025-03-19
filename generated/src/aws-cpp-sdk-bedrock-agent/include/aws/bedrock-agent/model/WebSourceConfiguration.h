/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/UrlConfiguration.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>The configuration of the URL/URLs for the web content that you want to crawl.
   * You should be authorized to crawl the URLs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/WebSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class WebSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API WebSourceConfiguration() = default;
    AWS_BEDROCKAGENT_API WebSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API WebSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the URL/URLs.</p>
     */
    inline const UrlConfiguration& GetUrlConfiguration() const { return m_urlConfiguration; }
    inline bool UrlConfigurationHasBeenSet() const { return m_urlConfigurationHasBeenSet; }
    template<typename UrlConfigurationT = UrlConfiguration>
    void SetUrlConfiguration(UrlConfigurationT&& value) { m_urlConfigurationHasBeenSet = true; m_urlConfiguration = std::forward<UrlConfigurationT>(value); }
    template<typename UrlConfigurationT = UrlConfiguration>
    WebSourceConfiguration& WithUrlConfiguration(UrlConfigurationT&& value) { SetUrlConfiguration(std::forward<UrlConfigurationT>(value)); return *this;}
    ///@}
  private:

    UrlConfiguration m_urlConfiguration;
    bool m_urlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
