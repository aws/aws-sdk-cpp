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
    AWS_MACIE2_API S3BucketCriteriaForJob() = default;
    AWS_MACIE2_API S3BucketCriteriaForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3BucketCriteriaForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * exclude from the job.</p>
     */
    inline const CriteriaBlockForJob& GetExcludes() const { return m_excludes; }
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
    template<typename ExcludesT = CriteriaBlockForJob>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = CriteriaBlockForJob>
    S3BucketCriteriaForJob& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property- and tag-based conditions that determine which buckets to
     * include in the job.</p>
     */
    inline const CriteriaBlockForJob& GetIncludes() const { return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    template<typename IncludesT = CriteriaBlockForJob>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = CriteriaBlockForJob>
    S3BucketCriteriaForJob& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    ///@}
  private:

    CriteriaBlockForJob m_excludes;
    bool m_excludesHasBeenSet = false;

    CriteriaBlockForJob m_includes;
    bool m_includesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
