/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The specific filters applied to your data source content. You can filter out
   * or include certain content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PatternObjectFilter">AWS
   * API Reference</a></p>
   */
  class PatternObjectFilter
  {
  public:
    AWS_BEDROCKAGENT_API PatternObjectFilter() = default;
    AWS_BEDROCKAGENT_API PatternObjectFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PatternObjectFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The supported object type or content type of the data source.</p>
     */
    inline const Aws::String& GetObjectType() const { return m_objectType; }
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }
    template<typename ObjectTypeT = Aws::String>
    void SetObjectType(ObjectTypeT&& value) { m_objectTypeHasBeenSet = true; m_objectType = std::forward<ObjectTypeT>(value); }
    template<typename ObjectTypeT = Aws::String>
    PatternObjectFilter& WithObjectType(ObjectTypeT&& value) { SetObjectType(std::forward<ObjectTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more inclusion regular expression patterns to include
     * certain object types that adhere to the pattern. If you specify an inclusion and
     * exclusion filter/pattern and both match a document, the exclusion filter takes
     * precedence and the document isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFilters() const { return m_inclusionFilters; }
    inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
    template<typename InclusionFiltersT = Aws::Vector<Aws::String>>
    void SetInclusionFilters(InclusionFiltersT&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = std::forward<InclusionFiltersT>(value); }
    template<typename InclusionFiltersT = Aws::Vector<Aws::String>>
    PatternObjectFilter& WithInclusionFilters(InclusionFiltersT&& value) { SetInclusionFilters(std::forward<InclusionFiltersT>(value)); return *this;}
    template<typename InclusionFiltersT = Aws::String>
    PatternObjectFilter& AddInclusionFilters(InclusionFiltersT&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.emplace_back(std::forward<InclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of one or more exclusion regular expression patterns to exclude
     * certain object types that adhere to the pattern. If you specify an inclusion and
     * exclusion filter/pattern and both match a document, the exclusion filter takes
     * precedence and the document isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFilters() const { return m_exclusionFilters; }
    inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
    template<typename ExclusionFiltersT = Aws::Vector<Aws::String>>
    void SetExclusionFilters(ExclusionFiltersT&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = std::forward<ExclusionFiltersT>(value); }
    template<typename ExclusionFiltersT = Aws::Vector<Aws::String>>
    PatternObjectFilter& WithExclusionFilters(ExclusionFiltersT&& value) { SetExclusionFilters(std::forward<ExclusionFiltersT>(value)); return *this;}
    template<typename ExclusionFiltersT = Aws::String>
    PatternObjectFilter& AddExclusionFilters(ExclusionFiltersT&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.emplace_back(std::forward<ExclusionFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_objectType;
    bool m_objectTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionFilters;
    bool m_inclusionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionFilters;
    bool m_exclusionFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
