/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/PatternObjectFilterConfiguration.h>
#include <aws/bedrock-agent/model/CrawlFilterConfigurationType.h>
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
   * <p>The configuration of filtering the data source content. For example,
   * configuring regular expression patterns to include or exclude certain
   * content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CrawlFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class CrawlFilterConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API CrawlFilterConfiguration();
    AWS_BEDROCKAGENT_API CrawlFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API CrawlFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of filtering certain objects or content types of the data
     * source.</p>
     */
    inline const PatternObjectFilterConfiguration& GetPatternObjectFilter() const{ return m_patternObjectFilter; }
    inline bool PatternObjectFilterHasBeenSet() const { return m_patternObjectFilterHasBeenSet; }
    inline void SetPatternObjectFilter(const PatternObjectFilterConfiguration& value) { m_patternObjectFilterHasBeenSet = true; m_patternObjectFilter = value; }
    inline void SetPatternObjectFilter(PatternObjectFilterConfiguration&& value) { m_patternObjectFilterHasBeenSet = true; m_patternObjectFilter = std::move(value); }
    inline CrawlFilterConfiguration& WithPatternObjectFilter(const PatternObjectFilterConfiguration& value) { SetPatternObjectFilter(value); return *this;}
    inline CrawlFilterConfiguration& WithPatternObjectFilter(PatternObjectFilterConfiguration&& value) { SetPatternObjectFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of filtering that you want to apply to certain objects or content of
     * the data source. For example, the <code>PATTERN</code> type is regular
     * expression patterns you can apply to filter your content.</p>
     */
    inline const CrawlFilterConfigurationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CrawlFilterConfigurationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CrawlFilterConfigurationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CrawlFilterConfiguration& WithType(const CrawlFilterConfigurationType& value) { SetType(value); return *this;}
    inline CrawlFilterConfiguration& WithType(CrawlFilterConfigurationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    PatternObjectFilterConfiguration m_patternObjectFilter;
    bool m_patternObjectFilterHasBeenSet = false;

    CrawlFilterConfigurationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
