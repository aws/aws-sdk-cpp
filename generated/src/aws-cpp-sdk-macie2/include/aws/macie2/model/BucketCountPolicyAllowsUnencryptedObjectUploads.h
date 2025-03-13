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
   * <p>Provides information about the number of S3 buckets whose bucket policies do
   * or don't require server-side encryption of objects when objects are added to the
   * buckets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketCountPolicyAllowsUnencryptedObjectUploads">AWS
   * API Reference</a></p>
   */
  class BucketCountPolicyAllowsUnencryptedObjectUploads
  {
  public:
    AWS_MACIE2_API BucketCountPolicyAllowsUnencryptedObjectUploads() = default;
    AWS_MACIE2_API BucketCountPolicyAllowsUnencryptedObjectUploads(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketCountPolicyAllowsUnencryptedObjectUploads& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of buckets that don't have a bucket policy or have a bucket
     * policy that doesn't require server-side encryption of new objects. If a bucket
     * policy exists, the policy doesn't require PutObject requests to include a valid
     * server-side encryption header: the x-amz-server-side-encryption header with a
     * value of AES256 or aws:kms, or the
     * x-amz-server-side-encryption-customer-algorithm header with a value of
     * AES256.</p>
     */
    inline long long GetAllowsUnencryptedObjectUploads() const { return m_allowsUnencryptedObjectUploads; }
    inline bool AllowsUnencryptedObjectUploadsHasBeenSet() const { return m_allowsUnencryptedObjectUploadsHasBeenSet; }
    inline void SetAllowsUnencryptedObjectUploads(long long value) { m_allowsUnencryptedObjectUploadsHasBeenSet = true; m_allowsUnencryptedObjectUploads = value; }
    inline BucketCountPolicyAllowsUnencryptedObjectUploads& WithAllowsUnencryptedObjectUploads(long long value) { SetAllowsUnencryptedObjectUploads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets whose bucket policies require server-side
     * encryption of new objects. PutObject requests for these buckets must include a
     * valid server-side encryption header: the x-amz-server-side-encryption header
     * with a value of AES256 or aws:kms, or the
     * x-amz-server-side-encryption-customer-algorithm header with a value of
     * AES256.</p>
     */
    inline long long GetDeniesUnencryptedObjectUploads() const { return m_deniesUnencryptedObjectUploads; }
    inline bool DeniesUnencryptedObjectUploadsHasBeenSet() const { return m_deniesUnencryptedObjectUploadsHasBeenSet; }
    inline void SetDeniesUnencryptedObjectUploads(long long value) { m_deniesUnencryptedObjectUploadsHasBeenSet = true; m_deniesUnencryptedObjectUploads = value; }
    inline BucketCountPolicyAllowsUnencryptedObjectUploads& WithDeniesUnencryptedObjectUploads(long long value) { SetDeniesUnencryptedObjectUploads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate
     * server-side encryption requirements for. For example, the buckets' permissions
     * settings or a quota prevented Macie from retrieving the requisite data. Macie
     * can't determine whether bucket policies for the buckets require server-side
     * encryption of new objects.</p>
     */
    inline long long GetUnknown() const { return m_unknown; }
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }
    inline void SetUnknown(long long value) { m_unknownHasBeenSet = true; m_unknown = value; }
    inline BucketCountPolicyAllowsUnencryptedObjectUploads& WithUnknown(long long value) { SetUnknown(value); return *this;}
    ///@}
  private:

    long long m_allowsUnencryptedObjectUploads{0};
    bool m_allowsUnencryptedObjectUploadsHasBeenSet = false;

    long long m_deniesUnencryptedObjectUploads{0};
    bool m_deniesUnencryptedObjectUploadsHasBeenSet = false;

    long long m_unknown{0};
    bool m_unknownHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
