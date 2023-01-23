/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/CriteriaBlockForJob.h>
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
   * <p>Specifies property- and tag-based conditions that define criteria for
   * including or excluding S3 buckets from a classification job. Exclude conditions
   * take precedence over include conditions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3BucketCriteriaForJob">AWS
   * API Reference</a></p>
   */
  class S3BucketCriteriaForJob
  {
  public:
    AWS_MACIE2_API S3BucketCriteriaForJob();
    AWS_MACIE2_API S3BucketCriteriaForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3BucketCriteriaForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the job.</p>
     */
    inline const CriteriaBlockForJob& GetExcludes() const{ return m_excludes; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the job.</p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the job.</p>
     */
    inline void SetExcludes(const CriteriaBlockForJob& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the job.</p>
     */
    inline void SetExcludes(CriteriaBlockForJob&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the job.</p>
     */
    inline S3BucketCriteriaForJob& WithExcludes(const CriteriaBlockForJob& value) { SetExcludes(value); return *this;}

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the job.</p>
     */
    inline S3BucketCriteriaForJob& WithExcludes(CriteriaBlockForJob&& value) { SetExcludes(std::move(value)); return *this;}


    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the job.</p>
     */
    inline const CriteriaBlockForJob& GetIncludes() const{ return m_includes; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the job.</p>
     */
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the job.</p>
     */
    inline void SetIncludes(const CriteriaBlockForJob& value) { m_includesHasBeenSet = true; m_includes = value; }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the job.</p>
     */
    inline void SetIncludes(CriteriaBlockForJob&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the job.</p>
     */
    inline S3BucketCriteriaForJob& WithIncludes(const CriteriaBlockForJob& value) { SetIncludes(value); return *this;}

    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the job.</p>
     */
    inline S3BucketCriteriaForJob& WithIncludes(CriteriaBlockForJob&& value) { SetIncludes(std::move(value)); return *this;}

  private:

    CriteriaBlockForJob m_excludes;
    bool m_excludesHasBeenSet = false;

    CriteriaBlockForJob m_includes;
    bool m_includesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
