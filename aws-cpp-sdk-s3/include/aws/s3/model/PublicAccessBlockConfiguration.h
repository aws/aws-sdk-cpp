/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/s3/S3_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>The container element for all Public Access Block configuration options. You
   * can enable the configuration options in any combination.</p> <p>Amazon S3
   * considers a bucket policy public unless at least one of the following conditions
   * is true:</p> <ol> <li> <p>The policy limits access to a set of CIDRs using
   * <code>aws:SourceIp</code>. For more information on CIDR, see <a
   * href="http://www.rfc-editor.org/rfc/rfc4632.txt">http://www.rfc-editor.org/rfc/rfc4632.txt</a>
   * </p> </li> <li> <p>The policy grants permissions, not including any "bad
   * actions," to one of the following:</p> <ul> <li> <p>A fixed AWS principal, user,
   * role, or service principal</p> </li> <li> <p>A fixed <code>aws:SourceArn</code>
   * </p> </li> <li> <p>A fixed <code>aws:SourceVpc</code> </p> </li> <li> <p>A fixed
   * <code>aws:SourceVpce</code> </p> </li> <li> <p>A fixed
   * <code>aws:SourceOwner</code> </p> </li> <li> <p>A fixed
   * <code>aws:SourceAccount</code> </p> </li> <li> <p>A fixed value of
   * <code>s3:x-amz-server-side-encryption-aws-kms-key-id</code> </p> </li> <li> <p>A
   * fixed value of <code>aws:userid</code> outside the pattern
   * "<code>AROLEID:*</code>"</p> </li> </ul> </li> </ol> <p>"Bad actions" are those
   * that could expose the data inside a bucket to reads or writes by the public.
   * These actions are <code>s3:Get*</code>, <code>s3:List*</code>,
   * <code>s3:AbortMultipartUpload</code>, <code>s3:Delete*</code>,
   * <code>s3:Put*</code>, and <code>s3:RestoreObject</code>.</p> <p>The star
   * notation for bad actions indicates that all matching operations are considered
   * bad actions. For example, because <code>s3:Get*</code> is a bad action,
   * <code>s3:GetObject</code>, <code>s3:GetObjectVersion</code>, and
   * <code>s3:GetObjectAcl</code> are all bad actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PublicAccessBlockConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_S3_API PublicAccessBlockConfiguration
  {
  public:
    PublicAccessBlockConfiguration();
    PublicAccessBlockConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    PublicAccessBlockConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/> <p>Specifies whether Amazon S3 should block public ACLs for this bucket.
     * Setting this element to <code>TRUE</code> causes the following behavior:</p>
     * <ul> <li> <p>PUT Bucket acl and PUT Object acl calls will fail if the specified
     * ACL allows public access.</p> </li> <li> <p>PUT Object calls will fail if the
     * request includes an object ACL.</p> </li> </ul> <p>Note that enabling this
     * setting doesn't affect existing policies or ACLs.</p>
     */
    inline bool GetBlockPublicAcls() const{ return m_blockPublicAcls; }

    /**
     * <p/> <p>Specifies whether Amazon S3 should block public ACLs for this bucket.
     * Setting this element to <code>TRUE</code> causes the following behavior:</p>
     * <ul> <li> <p>PUT Bucket acl and PUT Object acl calls will fail if the specified
     * ACL allows public access.</p> </li> <li> <p>PUT Object calls will fail if the
     * request includes an object ACL.</p> </li> </ul> <p>Note that enabling this
     * setting doesn't affect existing policies or ACLs.</p>
     */
    inline void SetBlockPublicAcls(bool value) { m_blockPublicAclsHasBeenSet = true; m_blockPublicAcls = value; }

    /**
     * <p/> <p>Specifies whether Amazon S3 should block public ACLs for this bucket.
     * Setting this element to <code>TRUE</code> causes the following behavior:</p>
     * <ul> <li> <p>PUT Bucket acl and PUT Object acl calls will fail if the specified
     * ACL allows public access.</p> </li> <li> <p>PUT Object calls will fail if the
     * request includes an object ACL.</p> </li> </ul> <p>Note that enabling this
     * setting doesn't affect existing policies or ACLs.</p>
     */
    inline PublicAccessBlockConfiguration& WithBlockPublicAcls(bool value) { SetBlockPublicAcls(value); return *this;}


    /**
     * <p>Specifies whether Amazon S3 should ignore public ACLs for this bucket.
     * Setting this element to <code>TRUE</code> causes Amazon S3 to ignore all public
     * ACLs on this bucket and any objects that it contains. </p> <p>Note that enabling
     * this setting doesn't affect the persistence of any existing ACLs and doesn't
     * prevent new public ACLs from being set.</p>
     */
    inline bool GetIgnorePublicAcls() const{ return m_ignorePublicAcls; }

    /**
     * <p>Specifies whether Amazon S3 should ignore public ACLs for this bucket.
     * Setting this element to <code>TRUE</code> causes Amazon S3 to ignore all public
     * ACLs on this bucket and any objects that it contains. </p> <p>Note that enabling
     * this setting doesn't affect the persistence of any existing ACLs and doesn't
     * prevent new public ACLs from being set.</p>
     */
    inline void SetIgnorePublicAcls(bool value) { m_ignorePublicAclsHasBeenSet = true; m_ignorePublicAcls = value; }

    /**
     * <p>Specifies whether Amazon S3 should ignore public ACLs for this bucket.
     * Setting this element to <code>TRUE</code> causes Amazon S3 to ignore all public
     * ACLs on this bucket and any objects that it contains. </p> <p>Note that enabling
     * this setting doesn't affect the persistence of any existing ACLs and doesn't
     * prevent new public ACLs from being set.</p>
     */
    inline PublicAccessBlockConfiguration& WithIgnorePublicAcls(bool value) { SetIgnorePublicAcls(value); return *this;}


    /**
     * <p>Specifies whether Amazon S3 should block public bucket policies for this
     * bucket. Setting this element to <code>TRUE</code> causes Amazon S3 to reject
     * calls to PUT Bucket policy if the specified bucket policy allows public access.
     * </p> <p>Note that enabling this setting doesn't affect existing bucket
     * policies.</p>
     */
    inline bool GetBlockPublicPolicy() const{ return m_blockPublicPolicy; }

    /**
     * <p>Specifies whether Amazon S3 should block public bucket policies for this
     * bucket. Setting this element to <code>TRUE</code> causes Amazon S3 to reject
     * calls to PUT Bucket policy if the specified bucket policy allows public access.
     * </p> <p>Note that enabling this setting doesn't affect existing bucket
     * policies.</p>
     */
    inline void SetBlockPublicPolicy(bool value) { m_blockPublicPolicyHasBeenSet = true; m_blockPublicPolicy = value; }

    /**
     * <p>Specifies whether Amazon S3 should block public bucket policies for this
     * bucket. Setting this element to <code>TRUE</code> causes Amazon S3 to reject
     * calls to PUT Bucket policy if the specified bucket policy allows public access.
     * </p> <p>Note that enabling this setting doesn't affect existing bucket
     * policies.</p>
     */
    inline PublicAccessBlockConfiguration& WithBlockPublicPolicy(bool value) { SetBlockPublicPolicy(value); return *this;}


    /**
     * <p>Specifies whether Amazon S3 should restrict public bucket policies for this
     * bucket. If this element is set to <code>TRUE</code>, then only the bucket owner
     * and AWS Services can access this bucket if it has a public policy.</p> <p>Note
     * that enabling this setting doesn't affect previously stored bucket policies,
     * except that public and cross-account access within any public bucket policy,
     * including non-public delegation to specific accounts, is blocked.</p>
     */
    inline bool GetRestrictPublicBuckets() const{ return m_restrictPublicBuckets; }

    /**
     * <p>Specifies whether Amazon S3 should restrict public bucket policies for this
     * bucket. If this element is set to <code>TRUE</code>, then only the bucket owner
     * and AWS Services can access this bucket if it has a public policy.</p> <p>Note
     * that enabling this setting doesn't affect previously stored bucket policies,
     * except that public and cross-account access within any public bucket policy,
     * including non-public delegation to specific accounts, is blocked.</p>
     */
    inline void SetRestrictPublicBuckets(bool value) { m_restrictPublicBucketsHasBeenSet = true; m_restrictPublicBuckets = value; }

    /**
     * <p>Specifies whether Amazon S3 should restrict public bucket policies for this
     * bucket. If this element is set to <code>TRUE</code>, then only the bucket owner
     * and AWS Services can access this bucket if it has a public policy.</p> <p>Note
     * that enabling this setting doesn't affect previously stored bucket policies,
     * except that public and cross-account access within any public bucket policy,
     * including non-public delegation to specific accounts, is blocked.</p>
     */
    inline PublicAccessBlockConfiguration& WithRestrictPublicBuckets(bool value) { SetRestrictPublicBuckets(value); return *this;}

  private:

    bool m_blockPublicAcls;
    bool m_blockPublicAclsHasBeenSet;

    bool m_ignorePublicAcls;
    bool m_ignorePublicAclsHasBeenSet;

    bool m_blockPublicPolicy;
    bool m_blockPublicPolicyHasBeenSet;

    bool m_restrictPublicBuckets;
    bool m_restrictPublicBucketsHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
