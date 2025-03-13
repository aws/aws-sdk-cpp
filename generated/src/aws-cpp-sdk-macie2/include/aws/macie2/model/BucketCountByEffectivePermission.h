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
   * accessible due to a combination of permissions settings for each
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketCountByEffectivePermission">AWS
   * API Reference</a></p>
   */
  class BucketCountByEffectivePermission
  {
  public:
    AWS_MACIE2_API BucketCountByEffectivePermission() = default;
    AWS_MACIE2_API BucketCountByEffectivePermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketCountByEffectivePermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of buckets that allow the general public to have read or
     * write access to the bucket.</p>
     */
    inline long long GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(long long value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline BucketCountByEffectivePermission& WithPubliclyAccessible(long long value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that allow the general public to have read access
     * to the bucket.</p>
     */
    inline long long GetPubliclyReadable() const { return m_publiclyReadable; }
    inline bool PubliclyReadableHasBeenSet() const { return m_publiclyReadableHasBeenSet; }
    inline void SetPubliclyReadable(long long value) { m_publiclyReadableHasBeenSet = true; m_publiclyReadable = value; }
    inline BucketCountByEffectivePermission& WithPubliclyReadable(long long value) { SetPubliclyReadable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that allow the general public to have write
     * access to the bucket.</p>
     */
    inline long long GetPubliclyWritable() const { return m_publiclyWritable; }
    inline bool PubliclyWritableHasBeenSet() const { return m_publiclyWritableHasBeenSet; }
    inline void SetPubliclyWritable(long long value) { m_publiclyWritableHasBeenSet = true; m_publiclyWritable = value; }
    inline BucketCountByEffectivePermission& WithPubliclyWritable(long long value) { SetPubliclyWritable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate
     * permissions settings for. For example, the buckets' policies or a quota
     * prevented Macie from retrieving the requisite data. Macie can't determine
     * whether the buckets are publicly accessible.</p>
     */
    inline long long GetUnknown() const { return m_unknown; }
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }
    inline void SetUnknown(long long value) { m_unknownHasBeenSet = true; m_unknown = value; }
    inline BucketCountByEffectivePermission& WithUnknown(long long value) { SetUnknown(value); return *this;}
    ///@}
  private:

    long long m_publiclyAccessible{0};
    bool m_publiclyAccessibleHasBeenSet = false;

    long long m_publiclyReadable{0};
    bool m_publiclyReadableHasBeenSet = false;

    long long m_publiclyWritable{0};
    bool m_publiclyWritableHasBeenSet = false;

    long long m_unknown{0};
    bool m_unknownHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
