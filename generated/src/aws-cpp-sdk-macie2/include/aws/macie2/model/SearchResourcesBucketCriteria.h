/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SearchResourcesCriteriaBlock.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies property- and tag-based conditions that define filter criteria for
   * including or excluding S3 buckets from the query results. Exclude conditions
   * take precedence over include conditions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SearchResourcesBucketCriteria">AWS
   * API Reference</a></p>
   */
  class SearchResourcesBucketCriteria
  {
  public:
    AWS_MACIE2_API SearchResourcesBucketCriteria() = default;
    AWS_MACIE2_API SearchResourcesBucketCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SearchResourcesBucketCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the results.</p>
     */
    inline const SearchResourcesCriteriaBlock& GetExcludes() const { return m_excludes; }
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
    template<typename ExcludesT = SearchResourcesCriteriaBlock>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = SearchResourcesCriteriaBlock>
    SearchResourcesBucketCriteria& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the results.</p>
     */
    inline const SearchResourcesCriteriaBlock& GetIncludes() const { return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    template<typename IncludesT = SearchResourcesCriteriaBlock>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = SearchResourcesCriteriaBlock>
    SearchResourcesBucketCriteria& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    ///@}
  private:

    SearchResourcesCriteriaBlock m_excludes;
    bool m_excludesHasBeenSet = false;

    SearchResourcesCriteriaBlock m_includes;
    bool m_includesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
