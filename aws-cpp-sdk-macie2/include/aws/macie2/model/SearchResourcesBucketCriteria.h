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
    AWS_MACIE2_API SearchResourcesBucketCriteria();
    AWS_MACIE2_API SearchResourcesBucketCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SearchResourcesBucketCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the results.</p>
     */
    inline const SearchResourcesCriteriaBlock& GetExcludes() const{ return m_excludes; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the results.</p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the results.</p>
     */
    inline void SetExcludes(const SearchResourcesCriteriaBlock& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the results.</p>
     */
    inline void SetExcludes(SearchResourcesCriteriaBlock&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the results.</p>
     */
    inline SearchResourcesBucketCriteria& WithExcludes(const SearchResourcesCriteriaBlock& value) { SetExcludes(value); return *this;}

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the results.</p>
     */
    inline SearchResourcesBucketCriteria& WithExcludes(SearchResourcesCriteriaBlock&& value) { SetExcludes(std::move(value)); return *this;}


    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the results.</p>
     */
    inline const SearchResourcesCriteriaBlock& GetIncludes() const{ return m_includes; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the results.</p>
     */
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the results.</p>
     */
    inline void SetIncludes(const SearchResourcesCriteriaBlock& value) { m_includesHasBeenSet = true; m_includes = value; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the results.</p>
     */
    inline void SetIncludes(SearchResourcesCriteriaBlock&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the results.</p>
     */
    inline SearchResourcesBucketCriteria& WithIncludes(const SearchResourcesCriteriaBlock& value) { SetIncludes(value); return *this;}

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the results.</p>
     */
    inline SearchResourcesBucketCriteria& WithIncludes(SearchResourcesCriteriaBlock&& value) { SetIncludes(std::move(value)); return *this;}

  private:

    SearchResourcesCriteriaBlock m_excludes;
    bool m_excludesHasBeenSet = false;

    SearchResourcesCriteriaBlock m_includes;
    bool m_includesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
