/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class ReplicateKeyRequest : public KMSRequest
  {
  public:
    AWS_KMS_API ReplicateKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReplicateKey"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the multi-Region primary key that is being replicated. To
     * determine whether a KMS key is a multi-Region primary key, use the
     * <a>DescribeKey</a> operation to check the value of the
     * <code>MultiRegionKeyType</code> property.</p> <p>Specify the key ID or key ARN
     * of a multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Identifies the multi-Region primary key that is being replicated. To
     * determine whether a KMS key is a multi-Region primary key, use the
     * <a>DescribeKey</a> operation to check the value of the
     * <code>MultiRegionKeyType</code> property.</p> <p>Specify the key ID or key ARN
     * of a multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Identifies the multi-Region primary key that is being replicated. To
     * determine whether a KMS key is a multi-Region primary key, use the
     * <a>DescribeKey</a> operation to check the value of the
     * <code>MultiRegionKeyType</code> property.</p> <p>Specify the key ID or key ARN
     * of a multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Identifies the multi-Region primary key that is being replicated. To
     * determine whether a KMS key is a multi-Region primary key, use the
     * <a>DescribeKey</a> operation to check the value of the
     * <code>MultiRegionKeyType</code> property.</p> <p>Specify the key ID or key ARN
     * of a multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Identifies the multi-Region primary key that is being replicated. To
     * determine whether a KMS key is a multi-Region primary key, use the
     * <a>DescribeKey</a> operation to check the value of the
     * <code>MultiRegionKeyType</code> property.</p> <p>Specify the key ID or key ARN
     * of a multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Identifies the multi-Region primary key that is being replicated. To
     * determine whether a KMS key is a multi-Region primary key, use the
     * <a>DescribeKey</a> operation to check the value of the
     * <code>MultiRegionKeyType</code> property.</p> <p>Specify the key ID or key ARN
     * of a multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ReplicateKeyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifies the multi-Region primary key that is being replicated. To
     * determine whether a KMS key is a multi-Region primary key, use the
     * <a>DescribeKey</a> operation to check the value of the
     * <code>MultiRegionKeyType</code> property.</p> <p>Specify the key ID or key ARN
     * of a multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ReplicateKeyRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies the multi-Region primary key that is being replicated. To
     * determine whether a KMS key is a multi-Region primary key, use the
     * <a>DescribeKey</a> operation to check the value of the
     * <code>MultiRegionKeyType</code> property.</p> <p>Specify the key ID or key ARN
     * of a multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ReplicateKeyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The Region ID of the Amazon Web Services Region for this replica key. </p>
     * <p>Enter the Region ID, such as <code>us-east-1</code> or
     * <code>ap-southeast-2</code>. For a list of Amazon Web Services Regions in which
     * KMS is supported, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">KMS
     * service endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p>
     *  <p>HMAC KMS keys are not supported in all Amazon Web Services Regions. If
     * you try to replicate an HMAC KMS key in an Amazon Web Services Region in which
     * HMAC keys are not supported, the <code>ReplicateKey</code> operation returns an
     * <code>UnsupportedOperationException</code>. For a list of Regions in which HMAC
     * KMS keys are supported, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
     * in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     * <p>The replica must be in a different Amazon Web Services Region than its
     * primary key and other replicas of that primary key, but in the same Amazon Web
     * Services partition. KMS must be available in the replica Region. If the Region
     * is not enabled by default, the Amazon Web Services account must be enabled in
     * the Region. For information about Amazon Web Services partitions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For information about enabling and disabling Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling
     * a Region</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-disable">Disabling
     * a Region</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }

    /**
     * <p>The Region ID of the Amazon Web Services Region for this replica key. </p>
     * <p>Enter the Region ID, such as <code>us-east-1</code> or
     * <code>ap-southeast-2</code>. For a list of Amazon Web Services Regions in which
     * KMS is supported, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">KMS
     * service endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p>
     *  <p>HMAC KMS keys are not supported in all Amazon Web Services Regions. If
     * you try to replicate an HMAC KMS key in an Amazon Web Services Region in which
     * HMAC keys are not supported, the <code>ReplicateKey</code> operation returns an
     * <code>UnsupportedOperationException</code>. For a list of Regions in which HMAC
     * KMS keys are supported, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
     * in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     * <p>The replica must be in a different Amazon Web Services Region than its
     * primary key and other replicas of that primary key, but in the same Amazon Web
     * Services partition. KMS must be available in the replica Region. If the Region
     * is not enabled by default, the Amazon Web Services account must be enabled in
     * the Region. For information about Amazon Web Services partitions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For information about enabling and disabling Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling
     * a Region</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-disable">Disabling
     * a Region</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline bool ReplicaRegionHasBeenSet() const { return m_replicaRegionHasBeenSet; }

    /**
     * <p>The Region ID of the Amazon Web Services Region for this replica key. </p>
     * <p>Enter the Region ID, such as <code>us-east-1</code> or
     * <code>ap-southeast-2</code>. For a list of Amazon Web Services Regions in which
     * KMS is supported, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">KMS
     * service endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p>
     *  <p>HMAC KMS keys are not supported in all Amazon Web Services Regions. If
     * you try to replicate an HMAC KMS key in an Amazon Web Services Region in which
     * HMAC keys are not supported, the <code>ReplicateKey</code> operation returns an
     * <code>UnsupportedOperationException</code>. For a list of Regions in which HMAC
     * KMS keys are supported, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
     * in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     * <p>The replica must be in a different Amazon Web Services Region than its
     * primary key and other replicas of that primary key, but in the same Amazon Web
     * Services partition. KMS must be available in the replica Region. If the Region
     * is not enabled by default, the Amazon Web Services account must be enabled in
     * the Region. For information about Amazon Web Services partitions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For information about enabling and disabling Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling
     * a Region</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-disable">Disabling
     * a Region</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = value; }

    /**
     * <p>The Region ID of the Amazon Web Services Region for this replica key. </p>
     * <p>Enter the Region ID, such as <code>us-east-1</code> or
     * <code>ap-southeast-2</code>. For a list of Amazon Web Services Regions in which
     * KMS is supported, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">KMS
     * service endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p>
     *  <p>HMAC KMS keys are not supported in all Amazon Web Services Regions. If
     * you try to replicate an HMAC KMS key in an Amazon Web Services Region in which
     * HMAC keys are not supported, the <code>ReplicateKey</code> operation returns an
     * <code>UnsupportedOperationException</code>. For a list of Regions in which HMAC
     * KMS keys are supported, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
     * in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     * <p>The replica must be in a different Amazon Web Services Region than its
     * primary key and other replicas of that primary key, but in the same Amazon Web
     * Services partition. KMS must be available in the replica Region. If the Region
     * is not enabled by default, the Amazon Web Services account must be enabled in
     * the Region. For information about Amazon Web Services partitions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For information about enabling and disabling Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling
     * a Region</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-disable">Disabling
     * a Region</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = std::move(value); }

    /**
     * <p>The Region ID of the Amazon Web Services Region for this replica key. </p>
     * <p>Enter the Region ID, such as <code>us-east-1</code> or
     * <code>ap-southeast-2</code>. For a list of Amazon Web Services Regions in which
     * KMS is supported, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">KMS
     * service endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p>
     *  <p>HMAC KMS keys are not supported in all Amazon Web Services Regions. If
     * you try to replicate an HMAC KMS key in an Amazon Web Services Region in which
     * HMAC keys are not supported, the <code>ReplicateKey</code> operation returns an
     * <code>UnsupportedOperationException</code>. For a list of Regions in which HMAC
     * KMS keys are supported, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
     * in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     * <p>The replica must be in a different Amazon Web Services Region than its
     * primary key and other replicas of that primary key, but in the same Amazon Web
     * Services partition. KMS must be available in the replica Region. If the Region
     * is not enabled by default, the Amazon Web Services account must be enabled in
     * the Region. For information about Amazon Web Services partitions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For information about enabling and disabling Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling
     * a Region</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-disable">Disabling
     * a Region</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetReplicaRegion(const char* value) { m_replicaRegionHasBeenSet = true; m_replicaRegion.assign(value); }

    /**
     * <p>The Region ID of the Amazon Web Services Region for this replica key. </p>
     * <p>Enter the Region ID, such as <code>us-east-1</code> or
     * <code>ap-southeast-2</code>. For a list of Amazon Web Services Regions in which
     * KMS is supported, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">KMS
     * service endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p>
     *  <p>HMAC KMS keys are not supported in all Amazon Web Services Regions. If
     * you try to replicate an HMAC KMS key in an Amazon Web Services Region in which
     * HMAC keys are not supported, the <code>ReplicateKey</code> operation returns an
     * <code>UnsupportedOperationException</code>. For a list of Regions in which HMAC
     * KMS keys are supported, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
     * in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     * <p>The replica must be in a different Amazon Web Services Region than its
     * primary key and other replicas of that primary key, but in the same Amazon Web
     * Services partition. KMS must be available in the replica Region. If the Region
     * is not enabled by default, the Amazon Web Services account must be enabled in
     * the Region. For information about Amazon Web Services partitions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For information about enabling and disabling Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling
     * a Region</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-disable">Disabling
     * a Region</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ReplicateKeyRequest& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}

    /**
     * <p>The Region ID of the Amazon Web Services Region for this replica key. </p>
     * <p>Enter the Region ID, such as <code>us-east-1</code> or
     * <code>ap-southeast-2</code>. For a list of Amazon Web Services Regions in which
     * KMS is supported, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">KMS
     * service endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p>
     *  <p>HMAC KMS keys are not supported in all Amazon Web Services Regions. If
     * you try to replicate an HMAC KMS key in an Amazon Web Services Region in which
     * HMAC keys are not supported, the <code>ReplicateKey</code> operation returns an
     * <code>UnsupportedOperationException</code>. For a list of Regions in which HMAC
     * KMS keys are supported, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
     * in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     * <p>The replica must be in a different Amazon Web Services Region than its
     * primary key and other replicas of that primary key, but in the same Amazon Web
     * Services partition. KMS must be available in the replica Region. If the Region
     * is not enabled by default, the Amazon Web Services account must be enabled in
     * the Region. For information about Amazon Web Services partitions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For information about enabling and disabling Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling
     * a Region</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-disable">Disabling
     * a Region</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ReplicateKeyRequest& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}

    /**
     * <p>The Region ID of the Amazon Web Services Region for this replica key. </p>
     * <p>Enter the Region ID, such as <code>us-east-1</code> or
     * <code>ap-southeast-2</code>. For a list of Amazon Web Services Regions in which
     * KMS is supported, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">KMS
     * service endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p>
     *  <p>HMAC KMS keys are not supported in all Amazon Web Services Regions. If
     * you try to replicate an HMAC KMS key in an Amazon Web Services Region in which
     * HMAC keys are not supported, the <code>ReplicateKey</code> operation returns an
     * <code>UnsupportedOperationException</code>. For a list of Regions in which HMAC
     * KMS keys are supported, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
     * in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     * <p>The replica must be in a different Amazon Web Services Region than its
     * primary key and other replicas of that primary key, but in the same Amazon Web
     * Services partition. KMS must be available in the replica Region. If the Region
     * is not enabled by default, the Amazon Web Services account must be enabled in
     * the Region. For information about Amazon Web Services partitions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For information about enabling and disabling Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling
     * a Region</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-disable">Disabling
     * a Region</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ReplicateKeyRequest& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}


    /**
     * <p>The key policy to attach to the KMS key. This parameter is optional. If you
     * do not provide a key policy, KMS attaches the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">default
     * key policy</a> to the KMS key.</p> <p>The key policy is not a shared property of
     * multi-Region keys. You can specify the same key policy or a different key policy
     * for each key in a set of related multi-Region keys. KMS does not synchronize
     * this property.</p> <p>If you provide a key policy, it must meet the following
     * criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must give
     * the caller <code>kms:PutKeyPolicy</code> permission on the replica key. This
     * reduces the risk that the KMS key becomes unmanageable. For more information,
     * refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i> <i>Identity and
     * Access Management User Guide</i> </i>.</p> </li> </ul> <p>A key policy document
     * can include only the following characters:</p> <ul> <li> <p>Printable ASCII
     * characters from the space character (<code>\u0020</code>) through the end of the
     * ASCII character range.</p> </li> <li> <p>Printable characters in the Basic Latin
     * and Latin-1 Supplement character set (through <code>\u00FF</code>).</p> </li>
     * <li> <p>The tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>) special characters</p> </li> </ul> <p>For
     * information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The key policy to attach to the KMS key. This parameter is optional. If you
     * do not provide a key policy, KMS attaches the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">default
     * key policy</a> to the KMS key.</p> <p>The key policy is not a shared property of
     * multi-Region keys. You can specify the same key policy or a different key policy
     * for each key in a set of related multi-Region keys. KMS does not synchronize
     * this property.</p> <p>If you provide a key policy, it must meet the following
     * criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must give
     * the caller <code>kms:PutKeyPolicy</code> permission on the replica key. This
     * reduces the risk that the KMS key becomes unmanageable. For more information,
     * refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i> <i>Identity and
     * Access Management User Guide</i> </i>.</p> </li> </ul> <p>A key policy document
     * can include only the following characters:</p> <ul> <li> <p>Printable ASCII
     * characters from the space character (<code>\u0020</code>) through the end of the
     * ASCII character range.</p> </li> <li> <p>Printable characters in the Basic Latin
     * and Latin-1 Supplement character set (through <code>\u00FF</code>).</p> </li>
     * <li> <p>The tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>) special characters</p> </li> </ul> <p>For
     * information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The key policy to attach to the KMS key. This parameter is optional. If you
     * do not provide a key policy, KMS attaches the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">default
     * key policy</a> to the KMS key.</p> <p>The key policy is not a shared property of
     * multi-Region keys. You can specify the same key policy or a different key policy
     * for each key in a set of related multi-Region keys. KMS does not synchronize
     * this property.</p> <p>If you provide a key policy, it must meet the following
     * criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must give
     * the caller <code>kms:PutKeyPolicy</code> permission on the replica key. This
     * reduces the risk that the KMS key becomes unmanageable. For more information,
     * refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i> <i>Identity and
     * Access Management User Guide</i> </i>.</p> </li> </ul> <p>A key policy document
     * can include only the following characters:</p> <ul> <li> <p>Printable ASCII
     * characters from the space character (<code>\u0020</code>) through the end of the
     * ASCII character range.</p> </li> <li> <p>Printable characters in the Basic Latin
     * and Latin-1 Supplement character set (through <code>\u00FF</code>).</p> </li>
     * <li> <p>The tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>) special characters</p> </li> </ul> <p>For
     * information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The key policy to attach to the KMS key. This parameter is optional. If you
     * do not provide a key policy, KMS attaches the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">default
     * key policy</a> to the KMS key.</p> <p>The key policy is not a shared property of
     * multi-Region keys. You can specify the same key policy or a different key policy
     * for each key in a set of related multi-Region keys. KMS does not synchronize
     * this property.</p> <p>If you provide a key policy, it must meet the following
     * criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must give
     * the caller <code>kms:PutKeyPolicy</code> permission on the replica key. This
     * reduces the risk that the KMS key becomes unmanageable. For more information,
     * refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i> <i>Identity and
     * Access Management User Guide</i> </i>.</p> </li> </ul> <p>A key policy document
     * can include only the following characters:</p> <ul> <li> <p>Printable ASCII
     * characters from the space character (<code>\u0020</code>) through the end of the
     * ASCII character range.</p> </li> <li> <p>Printable characters in the Basic Latin
     * and Latin-1 Supplement character set (through <code>\u00FF</code>).</p> </li>
     * <li> <p>The tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>) special characters</p> </li> </ul> <p>For
     * information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The key policy to attach to the KMS key. This parameter is optional. If you
     * do not provide a key policy, KMS attaches the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">default
     * key policy</a> to the KMS key.</p> <p>The key policy is not a shared property of
     * multi-Region keys. You can specify the same key policy or a different key policy
     * for each key in a set of related multi-Region keys. KMS does not synchronize
     * this property.</p> <p>If you provide a key policy, it must meet the following
     * criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must give
     * the caller <code>kms:PutKeyPolicy</code> permission on the replica key. This
     * reduces the risk that the KMS key becomes unmanageable. For more information,
     * refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i> <i>Identity and
     * Access Management User Guide</i> </i>.</p> </li> </ul> <p>A key policy document
     * can include only the following characters:</p> <ul> <li> <p>Printable ASCII
     * characters from the space character (<code>\u0020</code>) through the end of the
     * ASCII character range.</p> </li> <li> <p>Printable characters in the Basic Latin
     * and Latin-1 Supplement character set (through <code>\u00FF</code>).</p> </li>
     * <li> <p>The tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>) special characters</p> </li> </ul> <p>For
     * information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The key policy to attach to the KMS key. This parameter is optional. If you
     * do not provide a key policy, KMS attaches the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">default
     * key policy</a> to the KMS key.</p> <p>The key policy is not a shared property of
     * multi-Region keys. You can specify the same key policy or a different key policy
     * for each key in a set of related multi-Region keys. KMS does not synchronize
     * this property.</p> <p>If you provide a key policy, it must meet the following
     * criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must give
     * the caller <code>kms:PutKeyPolicy</code> permission on the replica key. This
     * reduces the risk that the KMS key becomes unmanageable. For more information,
     * refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i> <i>Identity and
     * Access Management User Guide</i> </i>.</p> </li> </ul> <p>A key policy document
     * can include only the following characters:</p> <ul> <li> <p>Printable ASCII
     * characters from the space character (<code>\u0020</code>) through the end of the
     * ASCII character range.</p> </li> <li> <p>Printable characters in the Basic Latin
     * and Latin-1 Supplement character set (through <code>\u00FF</code>).</p> </li>
     * <li> <p>The tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>) special characters</p> </li> </ul> <p>For
     * information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline ReplicateKeyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The key policy to attach to the KMS key. This parameter is optional. If you
     * do not provide a key policy, KMS attaches the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">default
     * key policy</a> to the KMS key.</p> <p>The key policy is not a shared property of
     * multi-Region keys. You can specify the same key policy or a different key policy
     * for each key in a set of related multi-Region keys. KMS does not synchronize
     * this property.</p> <p>If you provide a key policy, it must meet the following
     * criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must give
     * the caller <code>kms:PutKeyPolicy</code> permission on the replica key. This
     * reduces the risk that the KMS key becomes unmanageable. For more information,
     * refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i> <i>Identity and
     * Access Management User Guide</i> </i>.</p> </li> </ul> <p>A key policy document
     * can include only the following characters:</p> <ul> <li> <p>Printable ASCII
     * characters from the space character (<code>\u0020</code>) through the end of the
     * ASCII character range.</p> </li> <li> <p>Printable characters in the Basic Latin
     * and Latin-1 Supplement character set (through <code>\u00FF</code>).</p> </li>
     * <li> <p>The tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>) special characters</p> </li> </ul> <p>For
     * information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline ReplicateKeyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The key policy to attach to the KMS key. This parameter is optional. If you
     * do not provide a key policy, KMS attaches the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">default
     * key policy</a> to the KMS key.</p> <p>The key policy is not a shared property of
     * multi-Region keys. You can specify the same key policy or a different key policy
     * for each key in a set of related multi-Region keys. KMS does not synchronize
     * this property.</p> <p>If you provide a key policy, it must meet the following
     * criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must give
     * the caller <code>kms:PutKeyPolicy</code> permission on the replica key. This
     * reduces the risk that the KMS key becomes unmanageable. For more information,
     * refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i> <i>Identity and
     * Access Management User Guide</i> </i>.</p> </li> </ul> <p>A key policy document
     * can include only the following characters:</p> <ul> <li> <p>Printable ASCII
     * characters from the space character (<code>\u0020</code>) through the end of the
     * ASCII character range.</p> </li> <li> <p>Printable characters in the Basic Latin
     * and Latin-1 Supplement character set (through <code>\u00FF</code>).</p> </li>
     * <li> <p>The tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>) special characters</p> </li> </ul> <p>For
     * information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline ReplicateKeyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>Use this parameter only when you intend to prevent the principal
     * that is making the request from making a subsequent <code>PutKeyPolicy</code>
     * request on the KMS key.</p> <p>The default value is false.</p>
     */
    inline bool GetBypassPolicyLockoutSafetyCheck() const{ return m_bypassPolicyLockoutSafetyCheck; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>Use this parameter only when you intend to prevent the principal
     * that is making the request from making a subsequent <code>PutKeyPolicy</code>
     * request on the KMS key.</p> <p>The default value is false.</p>
     */
    inline bool BypassPolicyLockoutSafetyCheckHasBeenSet() const { return m_bypassPolicyLockoutSafetyCheckHasBeenSet; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>Use this parameter only when you intend to prevent the principal
     * that is making the request from making a subsequent <code>PutKeyPolicy</code>
     * request on the KMS key.</p> <p>The default value is false.</p>
     */
    inline void SetBypassPolicyLockoutSafetyCheck(bool value) { m_bypassPolicyLockoutSafetyCheckHasBeenSet = true; m_bypassPolicyLockoutSafetyCheck = value; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>Use this parameter only when you intend to prevent the principal
     * that is making the request from making a subsequent <code>PutKeyPolicy</code>
     * request on the KMS key.</p> <p>The default value is false.</p>
     */
    inline ReplicateKeyRequest& WithBypassPolicyLockoutSafetyCheck(bool value) { SetBypassPolicyLockoutSafetyCheck(value); return *this;}


    /**
     * <p>A description of the KMS key. The default value is an empty string (no
     * description).</p> <p>The description is not a shared property of multi-Region
     * keys. You can specify the same description or a different description for each
     * key in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the KMS key. The default value is an empty string (no
     * description).</p> <p>The description is not a shared property of multi-Region
     * keys. You can specify the same description or a different description for each
     * key in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the KMS key. The default value is an empty string (no
     * description).</p> <p>The description is not a shared property of multi-Region
     * keys. You can specify the same description or a different description for each
     * key in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the KMS key. The default value is an empty string (no
     * description).</p> <p>The description is not a shared property of multi-Region
     * keys. You can specify the same description or a different description for each
     * key in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the KMS key. The default value is an empty string (no
     * description).</p> <p>The description is not a shared property of multi-Region
     * keys. You can specify the same description or a different description for each
     * key in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the KMS key. The default value is an empty string (no
     * description).</p> <p>The description is not a shared property of multi-Region
     * keys. You can specify the same description or a different description for each
     * key in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p>
     */
    inline ReplicateKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the KMS key. The default value is an empty string (no
     * description).</p> <p>The description is not a shared property of multi-Region
     * keys. You can specify the same description or a different description for each
     * key in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p>
     */
    inline ReplicateKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the KMS key. The default value is an empty string (no
     * description).</p> <p>The description is not a shared property of multi-Region
     * keys. You can specify the same description or a different description for each
     * key in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p>
     */
    inline ReplicateKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Assigns one or more tags to the replica key. Use this parameter to tag the
     * KMS key when it is created. To tag an existing KMS key, use the
     * <a>TagResource</a> operation.</p>  <p>Tagging or untagging a KMS key can
     * allow or deny permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>  <p>To
     * use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Tags are not a shared property of
     * multi-Region keys. You can specify the same tags or different tags for each key
     * in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p> <p>Each tag consists of a tag key and a tag value. Both the tag
     * key and the tag value are required, but the tag value can be an empty (null)
     * string. You cannot have more than one tag on a KMS key with the same tag key. If
     * you specify an existing tag key with a different tag value, KMS replaces the
     * current tag value with the specified one.</p> <p>When you add tags to an Amazon
     * Web Services resource, Amazon Web Services generates a cost allocation report
     * with usage and costs aggregated by tags. Tags can also be used to control access
     * to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Assigns one or more tags to the replica key. Use this parameter to tag the
     * KMS key when it is created. To tag an existing KMS key, use the
     * <a>TagResource</a> operation.</p>  <p>Tagging or untagging a KMS key can
     * allow or deny permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>  <p>To
     * use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Tags are not a shared property of
     * multi-Region keys. You can specify the same tags or different tags for each key
     * in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p> <p>Each tag consists of a tag key and a tag value. Both the tag
     * key and the tag value are required, but the tag value can be an empty (null)
     * string. You cannot have more than one tag on a KMS key with the same tag key. If
     * you specify an existing tag key with a different tag value, KMS replaces the
     * current tag value with the specified one.</p> <p>When you add tags to an Amazon
     * Web Services resource, Amazon Web Services generates a cost allocation report
     * with usage and costs aggregated by tags. Tags can also be used to control access
     * to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Assigns one or more tags to the replica key. Use this parameter to tag the
     * KMS key when it is created. To tag an existing KMS key, use the
     * <a>TagResource</a> operation.</p>  <p>Tagging or untagging a KMS key can
     * allow or deny permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>  <p>To
     * use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Tags are not a shared property of
     * multi-Region keys. You can specify the same tags or different tags for each key
     * in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p> <p>Each tag consists of a tag key and a tag value. Both the tag
     * key and the tag value are required, but the tag value can be an empty (null)
     * string. You cannot have more than one tag on a KMS key with the same tag key. If
     * you specify an existing tag key with a different tag value, KMS replaces the
     * current tag value with the specified one.</p> <p>When you add tags to an Amazon
     * Web Services resource, Amazon Web Services generates a cost allocation report
     * with usage and costs aggregated by tags. Tags can also be used to control access
     * to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Assigns one or more tags to the replica key. Use this parameter to tag the
     * KMS key when it is created. To tag an existing KMS key, use the
     * <a>TagResource</a> operation.</p>  <p>Tagging or untagging a KMS key can
     * allow or deny permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>  <p>To
     * use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Tags are not a shared property of
     * multi-Region keys. You can specify the same tags or different tags for each key
     * in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p> <p>Each tag consists of a tag key and a tag value. Both the tag
     * key and the tag value are required, but the tag value can be an empty (null)
     * string. You cannot have more than one tag on a KMS key with the same tag key. If
     * you specify an existing tag key with a different tag value, KMS replaces the
     * current tag value with the specified one.</p> <p>When you add tags to an Amazon
     * Web Services resource, Amazon Web Services generates a cost allocation report
     * with usage and costs aggregated by tags. Tags can also be used to control access
     * to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Assigns one or more tags to the replica key. Use this parameter to tag the
     * KMS key when it is created. To tag an existing KMS key, use the
     * <a>TagResource</a> operation.</p>  <p>Tagging or untagging a KMS key can
     * allow or deny permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>  <p>To
     * use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Tags are not a shared property of
     * multi-Region keys. You can specify the same tags or different tags for each key
     * in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p> <p>Each tag consists of a tag key and a tag value. Both the tag
     * key and the tag value are required, but the tag value can be an empty (null)
     * string. You cannot have more than one tag on a KMS key with the same tag key. If
     * you specify an existing tag key with a different tag value, KMS replaces the
     * current tag value with the specified one.</p> <p>When you add tags to an Amazon
     * Web Services resource, Amazon Web Services generates a cost allocation report
     * with usage and costs aggregated by tags. Tags can also be used to control access
     * to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline ReplicateKeyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Assigns one or more tags to the replica key. Use this parameter to tag the
     * KMS key when it is created. To tag an existing KMS key, use the
     * <a>TagResource</a> operation.</p>  <p>Tagging or untagging a KMS key can
     * allow or deny permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>  <p>To
     * use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Tags are not a shared property of
     * multi-Region keys. You can specify the same tags or different tags for each key
     * in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p> <p>Each tag consists of a tag key and a tag value. Both the tag
     * key and the tag value are required, but the tag value can be an empty (null)
     * string. You cannot have more than one tag on a KMS key with the same tag key. If
     * you specify an existing tag key with a different tag value, KMS replaces the
     * current tag value with the specified one.</p> <p>When you add tags to an Amazon
     * Web Services resource, Amazon Web Services generates a cost allocation report
     * with usage and costs aggregated by tags. Tags can also be used to control access
     * to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline ReplicateKeyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Assigns one or more tags to the replica key. Use this parameter to tag the
     * KMS key when it is created. To tag an existing KMS key, use the
     * <a>TagResource</a> operation.</p>  <p>Tagging or untagging a KMS key can
     * allow or deny permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>  <p>To
     * use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Tags are not a shared property of
     * multi-Region keys. You can specify the same tags or different tags for each key
     * in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p> <p>Each tag consists of a tag key and a tag value. Both the tag
     * key and the tag value are required, but the tag value can be an empty (null)
     * string. You cannot have more than one tag on a KMS key with the same tag key. If
     * you specify an existing tag key with a different tag value, KMS replaces the
     * current tag value with the specified one.</p> <p>When you add tags to an Amazon
     * Web Services resource, Amazon Web Services generates a cost allocation report
     * with usage and costs aggregated by tags. Tags can also be used to control access
     * to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline ReplicateKeyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Assigns one or more tags to the replica key. Use this parameter to tag the
     * KMS key when it is created. To tag an existing KMS key, use the
     * <a>TagResource</a> operation.</p>  <p>Tagging or untagging a KMS key can
     * allow or deny permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>  <p>To
     * use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Tags are not a shared property of
     * multi-Region keys. You can specify the same tags or different tags for each key
     * in a set of related multi-Region keys. KMS does not synchronize this
     * property.</p> <p>Each tag consists of a tag key and a tag value. Both the tag
     * key and the tag value are required, but the tag value can be an empty (null)
     * string. You cannot have more than one tag on a KMS key with the same tag key. If
     * you specify an existing tag key with a different tag value, KMS replaces the
     * current tag value with the specified one.</p> <p>When you add tags to an Amazon
     * Web Services resource, Amazon Web Services generates a cost allocation report
     * with usage and costs aggregated by tags. Tags can also be used to control access
     * to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline ReplicateKeyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_replicaRegion;
    bool m_replicaRegionHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    bool m_bypassPolicyLockoutSafetyCheck;
    bool m_bypassPolicyLockoutSafetyCheckHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
