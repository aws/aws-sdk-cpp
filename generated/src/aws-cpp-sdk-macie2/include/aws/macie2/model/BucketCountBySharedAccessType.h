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
   * <p>Provides information about the number of S3 buckets that are or aren't shared
   * with other Amazon Web Services accounts, Amazon CloudFront origin access
   * identities (OAIs), or CloudFront origin access controls (OACs). In this data, an
   * <i>Amazon Macie organization</i> is defined as a set of Macie accounts that are
   * centrally managed as a group of related accounts through Organizations or by
   * Macie invitation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketCountBySharedAccessType">AWS
   * API Reference</a></p>
   */
  class BucketCountBySharedAccessType
  {
  public:
    AWS_MACIE2_API BucketCountBySharedAccessType();
    AWS_MACIE2_API BucketCountBySharedAccessType(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketCountBySharedAccessType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of buckets that are shared with one or more of the following
     * or any combination of the following: an Amazon CloudFront OAI, a CloudFront OAC,
     * or an Amazon Web Services account that isn't in the same Amazon Macie
     * organization.</p>
     */
    inline long long GetExternal() const{ return m_external; }

    /**
     * <p>The total number of buckets that are shared with one or more of the following
     * or any combination of the following: an Amazon CloudFront OAI, a CloudFront OAC,
     * or an Amazon Web Services account that isn't in the same Amazon Macie
     * organization.</p>
     */
    inline bool ExternalHasBeenSet() const { return m_externalHasBeenSet; }

    /**
     * <p>The total number of buckets that are shared with one or more of the following
     * or any combination of the following: an Amazon CloudFront OAI, a CloudFront OAC,
     * or an Amazon Web Services account that isn't in the same Amazon Macie
     * organization.</p>
     */
    inline void SetExternal(long long value) { m_externalHasBeenSet = true; m_external = value; }

    /**
     * <p>The total number of buckets that are shared with one or more of the following
     * or any combination of the following: an Amazon CloudFront OAI, a CloudFront OAC,
     * or an Amazon Web Services account that isn't in the same Amazon Macie
     * organization.</p>
     */
    inline BucketCountBySharedAccessType& WithExternal(long long value) { SetExternal(value); return *this;}


    /**
     * <p>The total number of buckets that are shared with one or more Amazon Web
     * Services accounts in the same Amazon Macie organization. These buckets aren't
     * shared with Amazon CloudFront OAIs or OACs.</p>
     */
    inline long long GetInternal() const{ return m_internal; }

    /**
     * <p>The total number of buckets that are shared with one or more Amazon Web
     * Services accounts in the same Amazon Macie organization. These buckets aren't
     * shared with Amazon CloudFront OAIs or OACs.</p>
     */
    inline bool InternalHasBeenSet() const { return m_internalHasBeenSet; }

    /**
     * <p>The total number of buckets that are shared with one or more Amazon Web
     * Services accounts in the same Amazon Macie organization. These buckets aren't
     * shared with Amazon CloudFront OAIs or OACs.</p>
     */
    inline void SetInternal(long long value) { m_internalHasBeenSet = true; m_internal = value; }

    /**
     * <p>The total number of buckets that are shared with one or more Amazon Web
     * Services accounts in the same Amazon Macie organization. These buckets aren't
     * shared with Amazon CloudFront OAIs or OACs.</p>
     */
    inline BucketCountBySharedAccessType& WithInternal(long long value) { SetInternal(value); return *this;}


    /**
     * <p>The total number of buckets that aren't shared with other Amazon Web Services
     * accounts, Amazon CloudFront OAIs, or CloudFront OACs.</p>
     */
    inline long long GetNotShared() const{ return m_notShared; }

    /**
     * <p>The total number of buckets that aren't shared with other Amazon Web Services
     * accounts, Amazon CloudFront OAIs, or CloudFront OACs.</p>
     */
    inline bool NotSharedHasBeenSet() const { return m_notSharedHasBeenSet; }

    /**
     * <p>The total number of buckets that aren't shared with other Amazon Web Services
     * accounts, Amazon CloudFront OAIs, or CloudFront OACs.</p>
     */
    inline void SetNotShared(long long value) { m_notSharedHasBeenSet = true; m_notShared = value; }

    /**
     * <p>The total number of buckets that aren't shared with other Amazon Web Services
     * accounts, Amazon CloudFront OAIs, or CloudFront OACs.</p>
     */
    inline BucketCountBySharedAccessType& WithNotShared(long long value) { SetNotShared(value); return *this;}


    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate shared
     * access settings for. Macie can't determine whether these buckets are shared with
     * other Amazon Web Services accounts, Amazon CloudFront OAIs, or CloudFront
     * OACs.</p>
     */
    inline long long GetUnknown() const{ return m_unknown; }

    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate shared
     * access settings for. Macie can't determine whether these buckets are shared with
     * other Amazon Web Services accounts, Amazon CloudFront OAIs, or CloudFront
     * OACs.</p>
     */
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }

    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate shared
     * access settings for. Macie can't determine whether these buckets are shared with
     * other Amazon Web Services accounts, Amazon CloudFront OAIs, or CloudFront
     * OACs.</p>
     */
    inline void SetUnknown(long long value) { m_unknownHasBeenSet = true; m_unknown = value; }

    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate shared
     * access settings for. Macie can't determine whether these buckets are shared with
     * other Amazon Web Services accounts, Amazon CloudFront OAIs, or CloudFront
     * OACs.</p>
     */
    inline BucketCountBySharedAccessType& WithUnknown(long long value) { SetUnknown(value); return *this;}

  private:

    long long m_external;
    bool m_externalHasBeenSet = false;

    long long m_internal;
    bool m_internalHasBeenSet = false;

    long long m_notShared;
    bool m_notSharedHasBeenSet = false;

    long long m_unknown;
    bool m_unknownHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
