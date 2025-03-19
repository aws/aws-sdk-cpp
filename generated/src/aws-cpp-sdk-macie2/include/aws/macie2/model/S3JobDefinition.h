/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/S3BucketCriteriaForJob.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/Scoping.h>
#include <aws/macie2/model/S3BucketDefinitionForJob.h>
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
   * <p>Specifies which S3 buckets contain the objects that a classification job
   * analyzes, and the scope of that analysis. The bucket specification can be static
   * (bucketDefinitions) or dynamic (bucketCriteria). If it's static, the job
   * analyzes objects in the same predefined set of buckets each time the job runs.
   * If it's dynamic, the job analyzes objects in any buckets that match the
   * specified criteria each time the job starts to run.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3JobDefinition">AWS
   * API Reference</a></p>
   */
  class S3JobDefinition
  {
  public:
    AWS_MACIE2_API S3JobDefinition() = default;
    AWS_MACIE2_API S3JobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3JobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property- and tag-based conditions that determine which S3 buckets to
     * include or exclude from the analysis. Each time the job runs, the job uses these
     * criteria to determine which buckets contain objects to analyze. A job's
     * definition can contain a bucketCriteria object or a bucketDefinitions array, not
     * both.</p>
     */
    inline const S3BucketCriteriaForJob& GetBucketCriteria() const { return m_bucketCriteria; }
    inline bool BucketCriteriaHasBeenSet() const { return m_bucketCriteriaHasBeenSet; }
    template<typename BucketCriteriaT = S3BucketCriteriaForJob>
    void SetBucketCriteria(BucketCriteriaT&& value) { m_bucketCriteriaHasBeenSet = true; m_bucketCriteria = std::forward<BucketCriteriaT>(value); }
    template<typename BucketCriteriaT = S3BucketCriteriaForJob>
    S3JobDefinition& WithBucketCriteria(BucketCriteriaT&& value) { SetBucketCriteria(std::forward<BucketCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each Amazon Web Services account that owns
     * specific S3 buckets to analyze. Each object specifies the account ID for an
     * account and one or more buckets to analyze for that account. A job's definition
     * can contain a bucketDefinitions array or a bucketCriteria object, not both.</p>
     */
    inline const Aws::Vector<S3BucketDefinitionForJob>& GetBucketDefinitions() const { return m_bucketDefinitions; }
    inline bool BucketDefinitionsHasBeenSet() const { return m_bucketDefinitionsHasBeenSet; }
    template<typename BucketDefinitionsT = Aws::Vector<S3BucketDefinitionForJob>>
    void SetBucketDefinitions(BucketDefinitionsT&& value) { m_bucketDefinitionsHasBeenSet = true; m_bucketDefinitions = std::forward<BucketDefinitionsT>(value); }
    template<typename BucketDefinitionsT = Aws::Vector<S3BucketDefinitionForJob>>
    S3JobDefinition& WithBucketDefinitions(BucketDefinitionsT&& value) { SetBucketDefinitions(std::forward<BucketDefinitionsT>(value)); return *this;}
    template<typename BucketDefinitionsT = S3BucketDefinitionForJob>
    S3JobDefinition& AddBucketDefinitions(BucketDefinitionsT&& value) { m_bucketDefinitionsHasBeenSet = true; m_bucketDefinitions.emplace_back(std::forward<BucketDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The property- and tag-based conditions that determine which S3 objects to
     * include or exclude from the analysis. Each time the job runs, the job uses these
     * criteria to determine which objects to analyze.</p>
     */
    inline const Scoping& GetScoping() const { return m_scoping; }
    inline bool ScopingHasBeenSet() const { return m_scopingHasBeenSet; }
    template<typename ScopingT = Scoping>
    void SetScoping(ScopingT&& value) { m_scopingHasBeenSet = true; m_scoping = std::forward<ScopingT>(value); }
    template<typename ScopingT = Scoping>
    S3JobDefinition& WithScoping(ScopingT&& value) { SetScoping(std::forward<ScopingT>(value)); return *this;}
    ///@}
  private:

    S3BucketCriteriaForJob m_bucketCriteria;
    bool m_bucketCriteriaHasBeenSet = false;

    Aws::Vector<S3BucketDefinitionForJob> m_bucketDefinitions;
    bool m_bucketDefinitionsHasBeenSet = false;

    Scoping m_scoping;
    bool m_scopingHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
