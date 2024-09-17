/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/PatternObjectFilter.h>
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
   * <p>The configuration of filtering certain objects or content types of the data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PatternObjectFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class PatternObjectFilterConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PatternObjectFilterConfiguration();
    AWS_BEDROCKAGENT_API PatternObjectFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PatternObjectFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of specific filters applied to your data source content.
     * You can filter out or include certain content.</p>
     */
    inline const Aws::Vector<PatternObjectFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<PatternObjectFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<PatternObjectFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline PatternObjectFilterConfiguration& WithFilters(const Aws::Vector<PatternObjectFilter>& value) { SetFilters(value); return *this;}
    inline PatternObjectFilterConfiguration& WithFilters(Aws::Vector<PatternObjectFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline PatternObjectFilterConfiguration& AddFilters(const PatternObjectFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline PatternObjectFilterConfiguration& AddFilters(PatternObjectFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PatternObjectFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
