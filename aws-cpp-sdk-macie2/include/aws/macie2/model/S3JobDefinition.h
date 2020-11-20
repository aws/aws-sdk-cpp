/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
   * analyzes, and the scope of that analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3JobDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API S3JobDefinition
  {
  public:
    S3JobDefinition();
    S3JobDefinition(Aws::Utils::Json::JsonView jsonValue);
    S3JobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects, one for each AWS account that owns buckets to analyze.
     * Each object specifies the account ID for an account and one or more buckets to
     * analyze for the account.</p>
     */
    inline const Aws::Vector<S3BucketDefinitionForJob>& GetBucketDefinitions() const{ return m_bucketDefinitions; }

    /**
     * <p>An array of objects, one for each AWS account that owns buckets to analyze.
     * Each object specifies the account ID for an account and one or more buckets to
     * analyze for the account.</p>
     */
    inline bool BucketDefinitionsHasBeenSet() const { return m_bucketDefinitionsHasBeenSet; }

    /**
     * <p>An array of objects, one for each AWS account that owns buckets to analyze.
     * Each object specifies the account ID for an account and one or more buckets to
     * analyze for the account.</p>
     */
    inline void SetBucketDefinitions(const Aws::Vector<S3BucketDefinitionForJob>& value) { m_bucketDefinitionsHasBeenSet = true; m_bucketDefinitions = value; }

    /**
     * <p>An array of objects, one for each AWS account that owns buckets to analyze.
     * Each object specifies the account ID for an account and one or more buckets to
     * analyze for the account.</p>
     */
    inline void SetBucketDefinitions(Aws::Vector<S3BucketDefinitionForJob>&& value) { m_bucketDefinitionsHasBeenSet = true; m_bucketDefinitions = std::move(value); }

    /**
     * <p>An array of objects, one for each AWS account that owns buckets to analyze.
     * Each object specifies the account ID for an account and one or more buckets to
     * analyze for the account.</p>
     */
    inline S3JobDefinition& WithBucketDefinitions(const Aws::Vector<S3BucketDefinitionForJob>& value) { SetBucketDefinitions(value); return *this;}

    /**
     * <p>An array of objects, one for each AWS account that owns buckets to analyze.
     * Each object specifies the account ID for an account and one or more buckets to
     * analyze for the account.</p>
     */
    inline S3JobDefinition& WithBucketDefinitions(Aws::Vector<S3BucketDefinitionForJob>&& value) { SetBucketDefinitions(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each AWS account that owns buckets to analyze.
     * Each object specifies the account ID for an account and one or more buckets to
     * analyze for the account.</p>
     */
    inline S3JobDefinition& AddBucketDefinitions(const S3BucketDefinitionForJob& value) { m_bucketDefinitionsHasBeenSet = true; m_bucketDefinitions.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each AWS account that owns buckets to analyze.
     * Each object specifies the account ID for an account and one or more buckets to
     * analyze for the account.</p>
     */
    inline S3JobDefinition& AddBucketDefinitions(S3BucketDefinitionForJob&& value) { m_bucketDefinitionsHasBeenSet = true; m_bucketDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include or exclude from the analysis.</p>
     */
    inline const Scoping& GetScoping() const{ return m_scoping; }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include or exclude from the analysis.</p>
     */
    inline bool ScopingHasBeenSet() const { return m_scopingHasBeenSet; }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include or exclude from the analysis.</p>
     */
    inline void SetScoping(const Scoping& value) { m_scopingHasBeenSet = true; m_scoping = value; }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include or exclude from the analysis.</p>
     */
    inline void SetScoping(Scoping&& value) { m_scopingHasBeenSet = true; m_scoping = std::move(value); }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include or exclude from the analysis.</p>
     */
    inline S3JobDefinition& WithScoping(const Scoping& value) { SetScoping(value); return *this;}

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include or exclude from the analysis.</p>
     */
    inline S3JobDefinition& WithScoping(Scoping&& value) { SetScoping(std::move(value)); return *this;}

  private:

    Aws::Vector<S3BucketDefinitionForJob> m_bucketDefinitions;
    bool m_bucketDefinitionsHasBeenSet;

    Scoping m_scoping;
    bool m_scopingHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
