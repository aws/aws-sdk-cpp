/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_BEDROCKAGENT_API PatternObjectFilter();
    AWS_BEDROCKAGENT_API PatternObjectFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PatternObjectFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of one or more exclusion regular expression patterns to exclude
     * certain object types that adhere to the pattern. If you specify an inclusion and
     * exclusion filter/pattern and both match a document, the exclusion filter takes
     * precedence and the document isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFilters() const{ return m_exclusionFilters; }
    inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
    inline void SetExclusionFilters(const Aws::Vector<Aws::String>& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = value; }
    inline void SetExclusionFilters(Aws::Vector<Aws::String>&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = std::move(value); }
    inline PatternObjectFilter& WithExclusionFilters(const Aws::Vector<Aws::String>& value) { SetExclusionFilters(value); return *this;}
    inline PatternObjectFilter& WithExclusionFilters(Aws::Vector<Aws::String>&& value) { SetExclusionFilters(std::move(value)); return *this;}
    inline PatternObjectFilter& AddExclusionFilters(const Aws::String& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(value); return *this; }
    inline PatternObjectFilter& AddExclusionFilters(Aws::String&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(std::move(value)); return *this; }
    inline PatternObjectFilter& AddExclusionFilters(const char* value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of one or more inclusion regular expression patterns to include
     * certain object types that adhere to the pattern. If you specify an inclusion and
     * exclusion filter/pattern and both match a document, the exclusion filter takes
     * precedence and the document isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFilters() const{ return m_inclusionFilters; }
    inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
    inline void SetInclusionFilters(const Aws::Vector<Aws::String>& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = value; }
    inline void SetInclusionFilters(Aws::Vector<Aws::String>&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = std::move(value); }
    inline PatternObjectFilter& WithInclusionFilters(const Aws::Vector<Aws::String>& value) { SetInclusionFilters(value); return *this;}
    inline PatternObjectFilter& WithInclusionFilters(Aws::Vector<Aws::String>&& value) { SetInclusionFilters(std::move(value)); return *this;}
    inline PatternObjectFilter& AddInclusionFilters(const Aws::String& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(value); return *this; }
    inline PatternObjectFilter& AddInclusionFilters(Aws::String&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(std::move(value)); return *this; }
    inline PatternObjectFilter& AddInclusionFilters(const char* value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported object type or content type of the data source.</p>
     */
    inline const Aws::String& GetObjectType() const{ return m_objectType; }
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }
    inline void SetObjectType(const Aws::String& value) { m_objectTypeHasBeenSet = true; m_objectType = value; }
    inline void SetObjectType(Aws::String&& value) { m_objectTypeHasBeenSet = true; m_objectType = std::move(value); }
    inline void SetObjectType(const char* value) { m_objectTypeHasBeenSet = true; m_objectType.assign(value); }
    inline PatternObjectFilter& WithObjectType(const Aws::String& value) { SetObjectType(value); return *this;}
    inline PatternObjectFilter& WithObjectType(Aws::String&& value) { SetObjectType(std::move(value)); return *this;}
    inline PatternObjectFilter& WithObjectType(const char* value) { SetObjectType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_exclusionFilters;
    bool m_exclusionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionFilters;
    bool m_inclusionFiltersHasBeenSet = false;

    Aws::String m_objectType;
    bool m_objectTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
