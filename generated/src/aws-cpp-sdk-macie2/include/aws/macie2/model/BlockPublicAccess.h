﻿/**
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
   * <p>Provides information about the block public access settings for an S3 bucket.
   * These settings can apply to a bucket at the account or bucket level. For
   * detailed information about each setting, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-control-block-public-access.html">Blocking
   * public access to your Amazon S3 storage</a> in the <i>Amazon Simple Storage
   * Service User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BlockPublicAccess">AWS
   * API Reference</a></p>
   */
  class BlockPublicAccess
  {
  public:
    AWS_MACIE2_API BlockPublicAccess() = default;
    AWS_MACIE2_API BlockPublicAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BlockPublicAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether Amazon S3 blocks public access control lists (ACLs) for the
     * bucket and objects in the bucket.</p>
     */
    inline bool GetBlockPublicAcls() const { return m_blockPublicAcls; }
    inline bool BlockPublicAclsHasBeenSet() const { return m_blockPublicAclsHasBeenSet; }
    inline void SetBlockPublicAcls(bool value) { m_blockPublicAclsHasBeenSet = true; m_blockPublicAcls = value; }
    inline BlockPublicAccess& WithBlockPublicAcls(bool value) { SetBlockPublicAcls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 blocks public bucket policies for the bucket.</p>
     */
    inline bool GetBlockPublicPolicy() const { return m_blockPublicPolicy; }
    inline bool BlockPublicPolicyHasBeenSet() const { return m_blockPublicPolicyHasBeenSet; }
    inline void SetBlockPublicPolicy(bool value) { m_blockPublicPolicyHasBeenSet = true; m_blockPublicPolicy = value; }
    inline BlockPublicAccess& WithBlockPublicPolicy(bool value) { SetBlockPublicPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 ignores public ACLs for the bucket and objects in
     * the bucket.</p>
     */
    inline bool GetIgnorePublicAcls() const { return m_ignorePublicAcls; }
    inline bool IgnorePublicAclsHasBeenSet() const { return m_ignorePublicAclsHasBeenSet; }
    inline void SetIgnorePublicAcls(bool value) { m_ignorePublicAclsHasBeenSet = true; m_ignorePublicAcls = value; }
    inline BlockPublicAccess& WithIgnorePublicAcls(bool value) { SetIgnorePublicAcls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 restricts public bucket policies for the
     * bucket.</p>
     */
    inline bool GetRestrictPublicBuckets() const { return m_restrictPublicBuckets; }
    inline bool RestrictPublicBucketsHasBeenSet() const { return m_restrictPublicBucketsHasBeenSet; }
    inline void SetRestrictPublicBuckets(bool value) { m_restrictPublicBucketsHasBeenSet = true; m_restrictPublicBuckets = value; }
    inline BlockPublicAccess& WithRestrictPublicBuckets(bool value) { SetRestrictPublicBuckets(value); return *this;}
    ///@}
  private:

    bool m_blockPublicAcls{false};
    bool m_blockPublicAclsHasBeenSet = false;

    bool m_blockPublicPolicy{false};
    bool m_blockPublicPolicyHasBeenSet = false;

    bool m_ignorePublicAcls{false};
    bool m_ignorePublicAclsHasBeenSet = false;

    bool m_restrictPublicBuckets{false};
    bool m_restrictPublicBucketsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
