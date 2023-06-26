/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies an Amazon Web Services account that owns S3 buckets for a
   * classification job to analyze, and one or more specific buckets to analyze for
   * that account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3BucketDefinitionForJob">AWS
   * API Reference</a></p>
   */
  class S3BucketDefinitionForJob
  {
  public:
    AWS_MACIE2_API S3BucketDefinitionForJob();
    AWS_MACIE2_API S3BucketDefinitionForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3BucketDefinitionForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * buckets.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * buckets.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * buckets.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * buckets.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * buckets.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * buckets.</p>
     */
    inline S3BucketDefinitionForJob& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * buckets.</p>
     */
    inline S3BucketDefinitionForJob& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * buckets.</p>
     */
    inline S3BucketDefinitionForJob& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuckets() const{ return m_buckets; }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline bool BucketsHasBeenSet() const { return m_bucketsHasBeenSet; }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline void SetBuckets(const Aws::Vector<Aws::String>& value) { m_bucketsHasBeenSet = true; m_buckets = value; }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline void SetBuckets(Aws::Vector<Aws::String>&& value) { m_bucketsHasBeenSet = true; m_buckets = std::move(value); }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline S3BucketDefinitionForJob& WithBuckets(const Aws::Vector<Aws::String>& value) { SetBuckets(value); return *this;}

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline S3BucketDefinitionForJob& WithBuckets(Aws::Vector<Aws::String>&& value) { SetBuckets(std::move(value)); return *this;}

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline S3BucketDefinitionForJob& AddBuckets(const Aws::String& value) { m_bucketsHasBeenSet = true; m_buckets.push_back(value); return *this; }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline S3BucketDefinitionForJob& AddBuckets(Aws::String&& value) { m_bucketsHasBeenSet = true; m_buckets.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline S3BucketDefinitionForJob& AddBuckets(const char* value) { m_bucketsHasBeenSet = true; m_buckets.push_back(value); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_buckets;
    bool m_bucketsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
