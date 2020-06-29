/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information on how the bucker owner's S3 Block Public Access
   * settings are being applied to the S3 bucket. See <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">S3
   * Block Public Access</a> for more information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/BlockPublicAccess">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API BlockPublicAccess
  {
  public:
    BlockPublicAccess();
    BlockPublicAccess(Aws::Utils::Json::JsonView jsonValue);
    BlockPublicAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>IgnorePublicAcls</code>.</p>
     */
    inline bool GetIgnorePublicAcls() const{ return m_ignorePublicAcls; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>IgnorePublicAcls</code>.</p>
     */
    inline bool IgnorePublicAclsHasBeenSet() const { return m_ignorePublicAclsHasBeenSet; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>IgnorePublicAcls</code>.</p>
     */
    inline void SetIgnorePublicAcls(bool value) { m_ignorePublicAclsHasBeenSet = true; m_ignorePublicAcls = value; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>IgnorePublicAcls</code>.</p>
     */
    inline BlockPublicAccess& WithIgnorePublicAcls(bool value) { SetIgnorePublicAcls(value); return *this;}


    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>RestrictPublicBuckets</code>.</p>
     */
    inline bool GetRestrictPublicBuckets() const{ return m_restrictPublicBuckets; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>RestrictPublicBuckets</code>.</p>
     */
    inline bool RestrictPublicBucketsHasBeenSet() const { return m_restrictPublicBucketsHasBeenSet; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>RestrictPublicBuckets</code>.</p>
     */
    inline void SetRestrictPublicBuckets(bool value) { m_restrictPublicBucketsHasBeenSet = true; m_restrictPublicBuckets = value; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>RestrictPublicBuckets</code>.</p>
     */
    inline BlockPublicAccess& WithRestrictPublicBuckets(bool value) { SetRestrictPublicBuckets(value); return *this;}


    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>BlockPublicAcls</code>.</p>
     */
    inline bool GetBlockPublicAcls() const{ return m_blockPublicAcls; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>BlockPublicAcls</code>.</p>
     */
    inline bool BlockPublicAclsHasBeenSet() const { return m_blockPublicAclsHasBeenSet; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>BlockPublicAcls</code>.</p>
     */
    inline void SetBlockPublicAcls(bool value) { m_blockPublicAclsHasBeenSet = true; m_blockPublicAcls = value; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>BlockPublicAcls</code>.</p>
     */
    inline BlockPublicAccess& WithBlockPublicAcls(bool value) { SetBlockPublicAcls(value); return *this;}


    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>BlockPublicPolicy</code>.</p>
     */
    inline bool GetBlockPublicPolicy() const{ return m_blockPublicPolicy; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>BlockPublicPolicy</code>.</p>
     */
    inline bool BlockPublicPolicyHasBeenSet() const { return m_blockPublicPolicyHasBeenSet; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>BlockPublicPolicy</code>.</p>
     */
    inline void SetBlockPublicPolicy(bool value) { m_blockPublicPolicyHasBeenSet = true; m_blockPublicPolicy = value; }

    /**
     * <p>Indicates if S3 Block Public Access is set to
     * <code>BlockPublicPolicy</code>.</p>
     */
    inline BlockPublicAccess& WithBlockPublicPolicy(bool value) { SetBlockPublicPolicy(value); return *this;}

  private:

    bool m_ignorePublicAcls;
    bool m_ignorePublicAclsHasBeenSet;

    bool m_restrictPublicBuckets;
    bool m_restrictPublicBucketsHasBeenSet;

    bool m_blockPublicAcls;
    bool m_blockPublicAclsHasBeenSet;

    bool m_blockPublicPolicy;
    bool m_blockPublicPolicyHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
