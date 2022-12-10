/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/JobComparator.h>
#include <aws/macie2/model/SimpleCriterionKeyForJob.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a property-based condition that determines whether an S3 bucket is
   * included or excluded from a classification job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SimpleCriterionForJob">AWS
   * API Reference</a></p>
   */
  class SimpleCriterionForJob
  {
  public:
    AWS_MACIE2_API SimpleCriterionForJob();
    AWS_MACIE2_API SimpleCriterionForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SimpleCriterionForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline const JobComparator& GetComparator() const{ return m_comparator; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline void SetComparator(const JobComparator& value) { m_comparatorHasBeenSet = true; m_comparator = value; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline void SetComparator(JobComparator&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline SimpleCriterionForJob& WithComparator(const JobComparator& value) { SetComparator(value); return *this;}

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline SimpleCriterionForJob& WithComparator(JobComparator&& value) { SetComparator(std::move(value)); return *this;}


    /**
     * <p>The property to use in the condition.</p>
     */
    inline const SimpleCriterionKeyForJob& GetKey() const{ return m_key; }

    /**
     * <p>The property to use in the condition.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The property to use in the condition.</p>
     */
    inline void SetKey(const SimpleCriterionKeyForJob& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The property to use in the condition.</p>
     */
    inline void SetKey(SimpleCriterionKeyForJob&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The property to use in the condition.</p>
     */
    inline SimpleCriterionForJob& WithKey(const SimpleCriterionKeyForJob& value) { SetKey(value); return *this;}

    /**
     * <p>The property to use in the condition.</p>
     */
    inline SimpleCriterionForJob& WithKey(SimpleCriterionKeyForJob&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>An array that lists one or more values to use in the condition. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values. Valid
     * values for each supported property (key) are:</p> <ul><li><p>ACCOUNT_ID - A
     * string that represents the unique identifier for the Amazon Web Services account
     * that owns the bucket.</p></li> <li><p>S3_BUCKET_EFFECTIVE_PERMISSION - A string
     * that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketpublicaccess-effectivepermission">BucketPublicAccess.effectivePermission</a>
     * property of a bucket.</p></li> <li><p>S3_BUCKET_NAME - A string that represents
     * the name of a bucket.</p></li> <li><p>S3_BUCKET_SHARED_ACCESS - A string that
     * represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-sharedaccess">BucketMetadata.sharedAccess</a>
     * property of a bucket.</p></li></ul> <p>Values are case sensitive. Also, Macie
     * doesn't support use of partial values or wildcard characters in these
     * values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array that lists one or more values to use in the condition. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values. Valid
     * values for each supported property (key) are:</p> <ul><li><p>ACCOUNT_ID - A
     * string that represents the unique identifier for the Amazon Web Services account
     * that owns the bucket.</p></li> <li><p>S3_BUCKET_EFFECTIVE_PERMISSION - A string
     * that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketpublicaccess-effectivepermission">BucketPublicAccess.effectivePermission</a>
     * property of a bucket.</p></li> <li><p>S3_BUCKET_NAME - A string that represents
     * the name of a bucket.</p></li> <li><p>S3_BUCKET_SHARED_ACCESS - A string that
     * represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-sharedaccess">BucketMetadata.sharedAccess</a>
     * property of a bucket.</p></li></ul> <p>Values are case sensitive. Also, Macie
     * doesn't support use of partial values or wildcard characters in these
     * values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array that lists one or more values to use in the condition. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values. Valid
     * values for each supported property (key) are:</p> <ul><li><p>ACCOUNT_ID - A
     * string that represents the unique identifier for the Amazon Web Services account
     * that owns the bucket.</p></li> <li><p>S3_BUCKET_EFFECTIVE_PERMISSION - A string
     * that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketpublicaccess-effectivepermission">BucketPublicAccess.effectivePermission</a>
     * property of a bucket.</p></li> <li><p>S3_BUCKET_NAME - A string that represents
     * the name of a bucket.</p></li> <li><p>S3_BUCKET_SHARED_ACCESS - A string that
     * represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-sharedaccess">BucketMetadata.sharedAccess</a>
     * property of a bucket.</p></li></ul> <p>Values are case sensitive. Also, Macie
     * doesn't support use of partial values or wildcard characters in these
     * values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array that lists one or more values to use in the condition. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values. Valid
     * values for each supported property (key) are:</p> <ul><li><p>ACCOUNT_ID - A
     * string that represents the unique identifier for the Amazon Web Services account
     * that owns the bucket.</p></li> <li><p>S3_BUCKET_EFFECTIVE_PERMISSION - A string
     * that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketpublicaccess-effectivepermission">BucketPublicAccess.effectivePermission</a>
     * property of a bucket.</p></li> <li><p>S3_BUCKET_NAME - A string that represents
     * the name of a bucket.</p></li> <li><p>S3_BUCKET_SHARED_ACCESS - A string that
     * represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-sharedaccess">BucketMetadata.sharedAccess</a>
     * property of a bucket.</p></li></ul> <p>Values are case sensitive. Also, Macie
     * doesn't support use of partial values or wildcard characters in these
     * values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array that lists one or more values to use in the condition. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values. Valid
     * values for each supported property (key) are:</p> <ul><li><p>ACCOUNT_ID - A
     * string that represents the unique identifier for the Amazon Web Services account
     * that owns the bucket.</p></li> <li><p>S3_BUCKET_EFFECTIVE_PERMISSION - A string
     * that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketpublicaccess-effectivepermission">BucketPublicAccess.effectivePermission</a>
     * property of a bucket.</p></li> <li><p>S3_BUCKET_NAME - A string that represents
     * the name of a bucket.</p></li> <li><p>S3_BUCKET_SHARED_ACCESS - A string that
     * represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-sharedaccess">BucketMetadata.sharedAccess</a>
     * property of a bucket.</p></li></ul> <p>Values are case sensitive. Also, Macie
     * doesn't support use of partial values or wildcard characters in these
     * values.</p>
     */
    inline SimpleCriterionForJob& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array that lists one or more values to use in the condition. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values. Valid
     * values for each supported property (key) are:</p> <ul><li><p>ACCOUNT_ID - A
     * string that represents the unique identifier for the Amazon Web Services account
     * that owns the bucket.</p></li> <li><p>S3_BUCKET_EFFECTIVE_PERMISSION - A string
     * that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketpublicaccess-effectivepermission">BucketPublicAccess.effectivePermission</a>
     * property of a bucket.</p></li> <li><p>S3_BUCKET_NAME - A string that represents
     * the name of a bucket.</p></li> <li><p>S3_BUCKET_SHARED_ACCESS - A string that
     * represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-sharedaccess">BucketMetadata.sharedAccess</a>
     * property of a bucket.</p></li></ul> <p>Values are case sensitive. Also, Macie
     * doesn't support use of partial values or wildcard characters in these
     * values.</p>
     */
    inline SimpleCriterionForJob& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array that lists one or more values to use in the condition. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values. Valid
     * values for each supported property (key) are:</p> <ul><li><p>ACCOUNT_ID - A
     * string that represents the unique identifier for the Amazon Web Services account
     * that owns the bucket.</p></li> <li><p>S3_BUCKET_EFFECTIVE_PERMISSION - A string
     * that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketpublicaccess-effectivepermission">BucketPublicAccess.effectivePermission</a>
     * property of a bucket.</p></li> <li><p>S3_BUCKET_NAME - A string that represents
     * the name of a bucket.</p></li> <li><p>S3_BUCKET_SHARED_ACCESS - A string that
     * represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-sharedaccess">BucketMetadata.sharedAccess</a>
     * property of a bucket.</p></li></ul> <p>Values are case sensitive. Also, Macie
     * doesn't support use of partial values or wildcard characters in these
     * values.</p>
     */
    inline SimpleCriterionForJob& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array that lists one or more values to use in the condition. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values. Valid
     * values for each supported property (key) are:</p> <ul><li><p>ACCOUNT_ID - A
     * string that represents the unique identifier for the Amazon Web Services account
     * that owns the bucket.</p></li> <li><p>S3_BUCKET_EFFECTIVE_PERMISSION - A string
     * that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketpublicaccess-effectivepermission">BucketPublicAccess.effectivePermission</a>
     * property of a bucket.</p></li> <li><p>S3_BUCKET_NAME - A string that represents
     * the name of a bucket.</p></li> <li><p>S3_BUCKET_SHARED_ACCESS - A string that
     * represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-sharedaccess">BucketMetadata.sharedAccess</a>
     * property of a bucket.</p></li></ul> <p>Values are case sensitive. Also, Macie
     * doesn't support use of partial values or wildcard characters in these
     * values.</p>
     */
    inline SimpleCriterionForJob& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists one or more values to use in the condition. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values. Valid
     * values for each supported property (key) are:</p> <ul><li><p>ACCOUNT_ID - A
     * string that represents the unique identifier for the Amazon Web Services account
     * that owns the bucket.</p></li> <li><p>S3_BUCKET_EFFECTIVE_PERMISSION - A string
     * that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketpublicaccess-effectivepermission">BucketPublicAccess.effectivePermission</a>
     * property of a bucket.</p></li> <li><p>S3_BUCKET_NAME - A string that represents
     * the name of a bucket.</p></li> <li><p>S3_BUCKET_SHARED_ACCESS - A string that
     * represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-sharedaccess">BucketMetadata.sharedAccess</a>
     * property of a bucket.</p></li></ul> <p>Values are case sensitive. Also, Macie
     * doesn't support use of partial values or wildcard characters in these
     * values.</p>
     */
    inline SimpleCriterionForJob& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    JobComparator m_comparator;
    bool m_comparatorHasBeenSet = false;

    SimpleCriterionKeyForJob m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
