/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>The <code>PublicAccessBlock</code> configuration that you want to apply to
   * this Amazon S3 account. You can enable the configuration options in any
   * combination. For more information about when Amazon S3 considers a bucket or
   * object public, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
   * Meaning of "Public"</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This data
   * type is not supported for Amazon S3 on Outposts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PublicAccessBlockConfiguration">AWS
   * API Reference</a></p>
   */
  class PublicAccessBlockConfiguration
  {
  public:
    AWS_S3CONTROL_API PublicAccessBlockConfiguration();
    AWS_S3CONTROL_API PublicAccessBlockConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API PublicAccessBlockConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies whether Amazon S3 should block public access control lists (ACLs)
     * for buckets in this account. Setting this element to <code>TRUE</code> causes
     * the following behavior:</p> <ul> <li> <p> <code>PutBucketAcl</code> and
     * <code>PutObjectAcl</code> calls fail if the specified ACL is public.</p> </li>
     * <li> <p>PUT Object calls fail if the request includes a public ACL.</p> </li>
     * <li> <p>PUT Bucket calls fail if the request includes a public ACL.</p> </li>
     * </ul> <p>Enabling this setting doesn't affect existing policies or ACLs.</p>
     * <p>This property is not supported for Amazon S3 on Outposts.</p>
     */
    inline bool GetBlockPublicAcls() const{ return m_blockPublicAcls; }

    /**
     * <p>Specifies whether Amazon S3 should block public access control lists (ACLs)
     * for buckets in this account. Setting this element to <code>TRUE</code> causes
     * the following behavior:</p> <ul> <li> <p> <code>PutBucketAcl</code> and
     * <code>PutObjectAcl</code> calls fail if the specified ACL is public.</p> </li>
     * <li> <p>PUT Object calls fail if the request includes a public ACL.</p> </li>
     * <li> <p>PUT Bucket calls fail if the request includes a public ACL.</p> </li>
     * </ul> <p>Enabling this setting doesn't affect existing policies or ACLs.</p>
     * <p>This property is not supported for Amazon S3 on Outposts.</p>
     */
    inline bool BlockPublicAclsHasBeenSet() const { return m_blockPublicAclsHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 should block public access control lists (ACLs)
     * for buckets in this account. Setting this element to <code>TRUE</code> causes
     * the following behavior:</p> <ul> <li> <p> <code>PutBucketAcl</code> and
     * <code>PutObjectAcl</code> calls fail if the specified ACL is public.</p> </li>
     * <li> <p>PUT Object calls fail if the request includes a public ACL.</p> </li>
     * <li> <p>PUT Bucket calls fail if the request includes a public ACL.</p> </li>
     * </ul> <p>Enabling this setting doesn't affect existing policies or ACLs.</p>
     * <p>This property is not supported for Amazon S3 on Outposts.</p>
     */
    inline void SetBlockPublicAcls(bool value) { m_blockPublicAclsHasBeenSet = true; m_blockPublicAcls = value; }

    /**
     * <p>Specifies whether Amazon S3 should block public access control lists (ACLs)
     * for buckets in this account. Setting this element to <code>TRUE</code> causes
     * the following behavior:</p> <ul> <li> <p> <code>PutBucketAcl</code> and
     * <code>PutObjectAcl</code> calls fail if the specified ACL is public.</p> </li>
     * <li> <p>PUT Object calls fail if the request includes a public ACL.</p> </li>
     * <li> <p>PUT Bucket calls fail if the request includes a public ACL.</p> </li>
     * </ul> <p>Enabling this setting doesn't affect existing policies or ACLs.</p>
     * <p>This property is not supported for Amazon S3 on Outposts.</p>
     */
    inline PublicAccessBlockConfiguration& WithBlockPublicAcls(bool value) { SetBlockPublicAcls(value); return *this;}


    /**
     * <p>Specifies whether Amazon S3 should ignore public ACLs for buckets in this
     * account. Setting this element to <code>TRUE</code> causes Amazon S3 to ignore
     * all public ACLs on buckets in this account and any objects that they contain.
     * </p> <p>Enabling this setting doesn't affect the persistence of any existing
     * ACLs and doesn't prevent new public ACLs from being set.</p> <p>This property is
     * not supported for Amazon S3 on Outposts.</p>
     */
    inline bool GetIgnorePublicAcls() const{ return m_ignorePublicAcls; }

    /**
     * <p>Specifies whether Amazon S3 should ignore public ACLs for buckets in this
     * account. Setting this element to <code>TRUE</code> causes Amazon S3 to ignore
     * all public ACLs on buckets in this account and any objects that they contain.
     * </p> <p>Enabling this setting doesn't affect the persistence of any existing
     * ACLs and doesn't prevent new public ACLs from being set.</p> <p>This property is
     * not supported for Amazon S3 on Outposts.</p>
     */
    inline bool IgnorePublicAclsHasBeenSet() const { return m_ignorePublicAclsHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 should ignore public ACLs for buckets in this
     * account. Setting this element to <code>TRUE</code> causes Amazon S3 to ignore
     * all public ACLs on buckets in this account and any objects that they contain.
     * </p> <p>Enabling this setting doesn't affect the persistence of any existing
     * ACLs and doesn't prevent new public ACLs from being set.</p> <p>This property is
     * not supported for Amazon S3 on Outposts.</p>
     */
    inline void SetIgnorePublicAcls(bool value) { m_ignorePublicAclsHasBeenSet = true; m_ignorePublicAcls = value; }

    /**
     * <p>Specifies whether Amazon S3 should ignore public ACLs for buckets in this
     * account. Setting this element to <code>TRUE</code> causes Amazon S3 to ignore
     * all public ACLs on buckets in this account and any objects that they contain.
     * </p> <p>Enabling this setting doesn't affect the persistence of any existing
     * ACLs and doesn't prevent new public ACLs from being set.</p> <p>This property is
     * not supported for Amazon S3 on Outposts.</p>
     */
    inline PublicAccessBlockConfiguration& WithIgnorePublicAcls(bool value) { SetIgnorePublicAcls(value); return *this;}


    /**
     * <p>Specifies whether Amazon S3 should block public bucket policies for buckets
     * in this account. Setting this element to <code>TRUE</code> causes Amazon S3 to
     * reject calls to PUT Bucket policy if the specified bucket policy allows public
     * access. </p> <p>Enabling this setting doesn't affect existing bucket
     * policies.</p> <p>This property is not supported for Amazon S3 on Outposts.</p>
     */
    inline bool GetBlockPublicPolicy() const{ return m_blockPublicPolicy; }

    /**
     * <p>Specifies whether Amazon S3 should block public bucket policies for buckets
     * in this account. Setting this element to <code>TRUE</code> causes Amazon S3 to
     * reject calls to PUT Bucket policy if the specified bucket policy allows public
     * access. </p> <p>Enabling this setting doesn't affect existing bucket
     * policies.</p> <p>This property is not supported for Amazon S3 on Outposts.</p>
     */
    inline bool BlockPublicPolicyHasBeenSet() const { return m_blockPublicPolicyHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 should block public bucket policies for buckets
     * in this account. Setting this element to <code>TRUE</code> causes Amazon S3 to
     * reject calls to PUT Bucket policy if the specified bucket policy allows public
     * access. </p> <p>Enabling this setting doesn't affect existing bucket
     * policies.</p> <p>This property is not supported for Amazon S3 on Outposts.</p>
     */
    inline void SetBlockPublicPolicy(bool value) { m_blockPublicPolicyHasBeenSet = true; m_blockPublicPolicy = value; }

    /**
     * <p>Specifies whether Amazon S3 should block public bucket policies for buckets
     * in this account. Setting this element to <code>TRUE</code> causes Amazon S3 to
     * reject calls to PUT Bucket policy if the specified bucket policy allows public
     * access. </p> <p>Enabling this setting doesn't affect existing bucket
     * policies.</p> <p>This property is not supported for Amazon S3 on Outposts.</p>
     */
    inline PublicAccessBlockConfiguration& WithBlockPublicPolicy(bool value) { SetBlockPublicPolicy(value); return *this;}


    /**
     * <p>Specifies whether Amazon S3 should restrict public bucket policies for
     * buckets in this account. Setting this element to <code>TRUE</code> restricts
     * access to buckets with public policies to only Amazon Web Service principals and
     * authorized users within this account.</p> <p>Enabling this setting doesn't
     * affect previously stored bucket policies, except that public and cross-account
     * access within any public bucket policy, including non-public delegation to
     * specific accounts, is blocked.</p> <p>This property is not supported for Amazon
     * S3 on Outposts.</p>
     */
    inline bool GetRestrictPublicBuckets() const{ return m_restrictPublicBuckets; }

    /**
     * <p>Specifies whether Amazon S3 should restrict public bucket policies for
     * buckets in this account. Setting this element to <code>TRUE</code> restricts
     * access to buckets with public policies to only Amazon Web Service principals and
     * authorized users within this account.</p> <p>Enabling this setting doesn't
     * affect previously stored bucket policies, except that public and cross-account
     * access within any public bucket policy, including non-public delegation to
     * specific accounts, is blocked.</p> <p>This property is not supported for Amazon
     * S3 on Outposts.</p>
     */
    inline bool RestrictPublicBucketsHasBeenSet() const { return m_restrictPublicBucketsHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 should restrict public bucket policies for
     * buckets in this account. Setting this element to <code>TRUE</code> restricts
     * access to buckets with public policies to only Amazon Web Service principals and
     * authorized users within this account.</p> <p>Enabling this setting doesn't
     * affect previously stored bucket policies, except that public and cross-account
     * access within any public bucket policy, including non-public delegation to
     * specific accounts, is blocked.</p> <p>This property is not supported for Amazon
     * S3 on Outposts.</p>
     */
    inline void SetRestrictPublicBuckets(bool value) { m_restrictPublicBucketsHasBeenSet = true; m_restrictPublicBuckets = value; }

    /**
     * <p>Specifies whether Amazon S3 should restrict public bucket policies for
     * buckets in this account. Setting this element to <code>TRUE</code> restricts
     * access to buckets with public policies to only Amazon Web Service principals and
     * authorized users within this account.</p> <p>Enabling this setting doesn't
     * affect previously stored bucket policies, except that public and cross-account
     * access within any public bucket policy, including non-public delegation to
     * specific accounts, is blocked.</p> <p>This property is not supported for Amazon
     * S3 on Outposts.</p>
     */
    inline PublicAccessBlockConfiguration& WithRestrictPublicBuckets(bool value) { SetRestrictPublicBuckets(value); return *this;}

  private:

    bool m_blockPublicAcls;
    bool m_blockPublicAclsHasBeenSet = false;

    bool m_ignorePublicAcls;
    bool m_ignorePublicAclsHasBeenSet = false;

    bool m_blockPublicPolicy;
    bool m_blockPublicPolicyHasBeenSet = false;

    bool m_restrictPublicBuckets;
    bool m_restrictPublicBucketsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
