/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
   * <p>Provides information about the number of S3 buckets that are publicly
   * accessible based on a combination of permissions settings for each
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketCountByEffectivePermission">AWS
   * API Reference</a></p>
   */
  class BucketCountByEffectivePermission
  {
  public:
    AWS_MACIE2_API BucketCountByEffectivePermission();
    AWS_MACIE2_API BucketCountByEffectivePermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketCountByEffectivePermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of buckets that allow the general public to have read or
     * write access to the bucket.</p>
     */
    inline long long GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>The total number of buckets that allow the general public to have read or
     * write access to the bucket.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>The total number of buckets that allow the general public to have read or
     * write access to the bucket.</p>
     */
    inline void SetPubliclyAccessible(long long value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>The total number of buckets that allow the general public to have read or
     * write access to the bucket.</p>
     */
    inline BucketCountByEffectivePermission& WithPubliclyAccessible(long long value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The total number of buckets that allow the general public to have read access
     * to the bucket.</p>
     */
    inline long long GetPubliclyReadable() const{ return m_publiclyReadable; }

    /**
     * <p>The total number of buckets that allow the general public to have read access
     * to the bucket.</p>
     */
    inline bool PubliclyReadableHasBeenSet() const { return m_publiclyReadableHasBeenSet; }

    /**
     * <p>The total number of buckets that allow the general public to have read access
     * to the bucket.</p>
     */
    inline void SetPubliclyReadable(long long value) { m_publiclyReadableHasBeenSet = true; m_publiclyReadable = value; }

    /**
     * <p>The total number of buckets that allow the general public to have read access
     * to the bucket.</p>
     */
    inline BucketCountByEffectivePermission& WithPubliclyReadable(long long value) { SetPubliclyReadable(value); return *this;}


    /**
     * <p>The total number of buckets that allow the general public to have write
     * access to the bucket.</p>
     */
    inline long long GetPubliclyWritable() const{ return m_publiclyWritable; }

    /**
     * <p>The total number of buckets that allow the general public to have write
     * access to the bucket.</p>
     */
    inline bool PubliclyWritableHasBeenSet() const { return m_publiclyWritableHasBeenSet; }

    /**
     * <p>The total number of buckets that allow the general public to have write
     * access to the bucket.</p>
     */
    inline void SetPubliclyWritable(long long value) { m_publiclyWritableHasBeenSet = true; m_publiclyWritable = value; }

    /**
     * <p>The total number of buckets that allow the general public to have write
     * access to the bucket.</p>
     */
    inline BucketCountByEffectivePermission& WithPubliclyWritable(long long value) { SetPubliclyWritable(value); return *this;}


    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate
     * permissions settings for. Macie can't determine whether these buckets are
     * publicly accessible.</p>
     */
    inline long long GetUnknown() const{ return m_unknown; }

    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate
     * permissions settings for. Macie can't determine whether these buckets are
     * publicly accessible.</p>
     */
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }

    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate
     * permissions settings for. Macie can't determine whether these buckets are
     * publicly accessible.</p>
     */
    inline void SetUnknown(long long value) { m_unknownHasBeenSet = true; m_unknown = value; }

    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate
     * permissions settings for. Macie can't determine whether these buckets are
     * publicly accessible.</p>
     */
    inline BucketCountByEffectivePermission& WithUnknown(long long value) { SetUnknown(value); return *this;}

  private:

    long long m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    long long m_publiclyReadable;
    bool m_publiclyReadableHasBeenSet = false;

    long long m_publiclyWritable;
    bool m_publiclyWritableHasBeenSet = false;

    long long m_unknown;
    bool m_unknownHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
