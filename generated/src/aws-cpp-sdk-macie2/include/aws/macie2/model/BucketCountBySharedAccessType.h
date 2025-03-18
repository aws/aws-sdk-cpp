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
    AWS_MACIE2_API BucketCountBySharedAccessType() = default;
    AWS_MACIE2_API BucketCountBySharedAccessType(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketCountBySharedAccessType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of buckets that are shared with one or more of the following
     * or any combination of the following: an Amazon CloudFront OAI, a CloudFront OAC,
     * or an Amazon Web Services account that isn't in the same Amazon Macie
     * organization.</p>
     */
    inline long long GetExternal() const { return m_external; }
    inline bool ExternalHasBeenSet() const { return m_externalHasBeenSet; }
    inline void SetExternal(long long value) { m_externalHasBeenSet = true; m_external = value; }
    inline BucketCountBySharedAccessType& WithExternal(long long value) { SetExternal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that are shared with one or more Amazon Web
     * Services accounts in the same Amazon Macie organization. These buckets aren't
     * shared with Amazon CloudFront OAIs or OACs.</p>
     */
    inline long long GetInternal() const { return m_internal; }
    inline bool InternalHasBeenSet() const { return m_internalHasBeenSet; }
    inline void SetInternal(long long value) { m_internalHasBeenSet = true; m_internal = value; }
    inline BucketCountBySharedAccessType& WithInternal(long long value) { SetInternal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that aren't shared with other Amazon Web Services
     * accounts, Amazon CloudFront OAIs, or CloudFront OACs.</p>
     */
    inline long long GetNotShared() const { return m_notShared; }
    inline bool NotSharedHasBeenSet() const { return m_notSharedHasBeenSet; }
    inline void SetNotShared(long long value) { m_notSharedHasBeenSet = true; m_notShared = value; }
    inline BucketCountBySharedAccessType& WithNotShared(long long value) { SetNotShared(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that Amazon Macie wasn't able to evaluate shared
     * access settings for. For example, the buckets' permissions settings or a quota
     * prevented Macie from retrieving the requisite data. Macie can't determine
     * whether the buckets are shared with other Amazon Web Services accounts, Amazon
     * CloudFront OAIs, or CloudFront OACs.</p>
     */
    inline long long GetUnknown() const { return m_unknown; }
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }
    inline void SetUnknown(long long value) { m_unknownHasBeenSet = true; m_unknown = value; }
    inline BucketCountBySharedAccessType& WithUnknown(long long value) { SetUnknown(value); return *this;}
    ///@}
  private:

    long long m_external{0};
    bool m_externalHasBeenSet = false;

    long long m_internal{0};
    bool m_internalHasBeenSet = false;

    long long m_notShared{0};
    bool m_notSharedHasBeenSet = false;

    long long m_unknown{0};
    bool m_unknownHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
