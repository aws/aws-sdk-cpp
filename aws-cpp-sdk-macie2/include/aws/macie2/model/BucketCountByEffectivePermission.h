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
  class AWS_MACIE2_API BucketCountByEffectivePermission
  {
  public:
    BucketCountByEffectivePermission();
    BucketCountByEffectivePermission(Aws::Utils::Json::JsonView jsonValue);
    BucketCountByEffectivePermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    long long m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    long long m_publiclyReadable;
    bool m_publiclyReadableHasBeenSet;

    long long m_publiclyWritable;
    bool m_publiclyWritableHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
