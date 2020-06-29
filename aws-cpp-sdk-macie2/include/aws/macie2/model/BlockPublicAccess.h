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
   * <p>Provides information about the block public access settings for an S3 bucket.
   * These settings can apply to a bucket at the account level or bucket level. For
   * detailed information about each setting, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
   * Amazon S3 block public access</a> in the <i>Amazon Simple Storage Service
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BlockPublicAccess">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API BlockPublicAccess
  {
  public:
    BlockPublicAccess();
    BlockPublicAccess(Aws::Utils::Json::JsonView jsonValue);
    BlockPublicAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether Amazon S3 blocks public access control lists (ACLs) for the
     * bucket and objects in the bucket.</p>
     */
    inline bool GetBlockPublicAcls() const{ return m_blockPublicAcls; }

    /**
     * <p>Specifies whether Amazon S3 blocks public access control lists (ACLs) for the
     * bucket and objects in the bucket.</p>
     */
    inline bool BlockPublicAclsHasBeenSet() const { return m_blockPublicAclsHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 blocks public access control lists (ACLs) for the
     * bucket and objects in the bucket.</p>
     */
    inline void SetBlockPublicAcls(bool value) { m_blockPublicAclsHasBeenSet = true; m_blockPublicAcls = value; }

    /**
     * <p>Specifies whether Amazon S3 blocks public access control lists (ACLs) for the
     * bucket and objects in the bucket.</p>
     */
    inline BlockPublicAccess& WithBlockPublicAcls(bool value) { SetBlockPublicAcls(value); return *this;}


    /**
     * <p>Specifies whether Amazon S3 blocks public bucket policies for the bucket.</p>
     */
    inline bool GetBlockPublicPolicy() const{ return m_blockPublicPolicy; }

    /**
     * <p>Specifies whether Amazon S3 blocks public bucket policies for the bucket.</p>
     */
    inline bool BlockPublicPolicyHasBeenSet() const { return m_blockPublicPolicyHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 blocks public bucket policies for the bucket.</p>
     */
    inline void SetBlockPublicPolicy(bool value) { m_blockPublicPolicyHasBeenSet = true; m_blockPublicPolicy = value; }

    /**
     * <p>Specifies whether Amazon S3 blocks public bucket policies for the bucket.</p>
     */
    inline BlockPublicAccess& WithBlockPublicPolicy(bool value) { SetBlockPublicPolicy(value); return *this;}


    /**
     * <p>Specifies whether Amazon S3 ignores public ACLs for the bucket and objects in
     * the bucket.</p>
     */
    inline bool GetIgnorePublicAcls() const{ return m_ignorePublicAcls; }

    /**
     * <p>Specifies whether Amazon S3 ignores public ACLs for the bucket and objects in
     * the bucket.</p>
     */
    inline bool IgnorePublicAclsHasBeenSet() const { return m_ignorePublicAclsHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 ignores public ACLs for the bucket and objects in
     * the bucket.</p>
     */
    inline void SetIgnorePublicAcls(bool value) { m_ignorePublicAclsHasBeenSet = true; m_ignorePublicAcls = value; }

    /**
     * <p>Specifies whether Amazon S3 ignores public ACLs for the bucket and objects in
     * the bucket.</p>
     */
    inline BlockPublicAccess& WithIgnorePublicAcls(bool value) { SetIgnorePublicAcls(value); return *this;}


    /**
     * <p>Specifies whether Amazon S3 restricts public bucket policies for the
     * bucket.</p>
     */
    inline bool GetRestrictPublicBuckets() const{ return m_restrictPublicBuckets; }

    /**
     * <p>Specifies whether Amazon S3 restricts public bucket policies for the
     * bucket.</p>
     */
    inline bool RestrictPublicBucketsHasBeenSet() const { return m_restrictPublicBucketsHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 restricts public bucket policies for the
     * bucket.</p>
     */
    inline void SetRestrictPublicBuckets(bool value) { m_restrictPublicBucketsHasBeenSet = true; m_restrictPublicBuckets = value; }

    /**
     * <p>Specifies whether Amazon S3 restricts public bucket policies for the
     * bucket.</p>
     */
    inline BlockPublicAccess& WithRestrictPublicBuckets(bool value) { SetRestrictPublicBuckets(value); return *this;}

  private:

    bool m_blockPublicAcls;
    bool m_blockPublicAclsHasBeenSet;

    bool m_blockPublicPolicy;
    bool m_blockPublicPolicyHasBeenSet;

    bool m_ignorePublicAcls;
    bool m_ignorePublicAclsHasBeenSet;

    bool m_restrictPublicBuckets;
    bool m_restrictPublicBucketsHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
