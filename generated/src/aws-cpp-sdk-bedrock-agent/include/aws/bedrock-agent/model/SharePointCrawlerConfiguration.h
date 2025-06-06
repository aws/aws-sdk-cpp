﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/CrawlFilterConfiguration.h>
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
   * <p>The configuration of the SharePoint content. For example, configuring
   * specific types of SharePoint content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SharePointCrawlerConfiguration">AWS
   * API Reference</a></p>
   */
  class SharePointCrawlerConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API SharePointCrawlerConfiguration() = default;
    AWS_BEDROCKAGENT_API SharePointCrawlerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SharePointCrawlerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of filtering the SharePoint content. For example,
     * configuring regular expression patterns to include or exclude certain
     * content.</p>
     */
    inline const CrawlFilterConfiguration& GetFilterConfiguration() const { return m_filterConfiguration; }
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }
    template<typename FilterConfigurationT = CrawlFilterConfiguration>
    void SetFilterConfiguration(FilterConfigurationT&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::forward<FilterConfigurationT>(value); }
    template<typename FilterConfigurationT = CrawlFilterConfiguration>
    SharePointCrawlerConfiguration& WithFilterConfiguration(FilterConfigurationT&& value) { SetFilterConfiguration(std::forward<FilterConfigurationT>(value)); return *this;}
    ///@}
  private:

    CrawlFilterConfiguration m_filterConfiguration;
    bool m_filterConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
