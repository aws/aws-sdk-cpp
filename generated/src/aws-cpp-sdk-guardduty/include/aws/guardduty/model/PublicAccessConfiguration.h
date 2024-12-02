/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/PublicAccessStatus.h>
#include <aws/guardduty/model/PublicAclIgnoreBehavior.h>
#include <aws/guardduty/model/PublicBucketRestrictBehavior.h>
#include <utility>

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
   * <p>Describes public access policies that apply to the Amazon S3 bucket.</p>
   * <p>For information about each of the following settings, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-control-block-public-access.html">Blocking
   * public access to your Amazon S3 storage</a> in the <i>Amazon S3 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/PublicAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class PublicAccessConfiguration
  {
  public:
    AWS_GUARDDUTY_API PublicAccessConfiguration();
    AWS_GUARDDUTY_API PublicAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API PublicAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether or not there is a setting that allows public access to the
     * Amazon S3 buckets through access control lists (ACLs).</p>
     */
    inline const PublicAccessStatus& GetPublicAclAccess() const{ return m_publicAclAccess; }
    inline bool PublicAclAccessHasBeenSet() const { return m_publicAclAccessHasBeenSet; }
    inline void SetPublicAclAccess(const PublicAccessStatus& value) { m_publicAclAccessHasBeenSet = true; m_publicAclAccess = value; }
    inline void SetPublicAclAccess(PublicAccessStatus&& value) { m_publicAclAccessHasBeenSet = true; m_publicAclAccess = std::move(value); }
    inline PublicAccessConfiguration& WithPublicAclAccess(const PublicAccessStatus& value) { SetPublicAclAccess(value); return *this;}
    inline PublicAccessConfiguration& WithPublicAclAccess(PublicAccessStatus&& value) { SetPublicAclAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not there is a setting that allows public access to the
     * Amazon S3 bucket policy.</p>
     */
    inline const PublicAccessStatus& GetPublicPolicyAccess() const{ return m_publicPolicyAccess; }
    inline bool PublicPolicyAccessHasBeenSet() const { return m_publicPolicyAccessHasBeenSet; }
    inline void SetPublicPolicyAccess(const PublicAccessStatus& value) { m_publicPolicyAccessHasBeenSet = true; m_publicPolicyAccess = value; }
    inline void SetPublicPolicyAccess(PublicAccessStatus&& value) { m_publicPolicyAccessHasBeenSet = true; m_publicPolicyAccess = std::move(value); }
    inline PublicAccessConfiguration& WithPublicPolicyAccess(const PublicAccessStatus& value) { SetPublicPolicyAccess(value); return *this;}
    inline PublicAccessConfiguration& WithPublicPolicyAccess(PublicAccessStatus&& value) { SetPublicPolicyAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not there is a setting that ignores all public access
     * control lists (ACLs) on the Amazon S3 bucket and the objects that it
     * contains.</p>
     */
    inline const PublicAclIgnoreBehavior& GetPublicAclIgnoreBehavior() const{ return m_publicAclIgnoreBehavior; }
    inline bool PublicAclIgnoreBehaviorHasBeenSet() const { return m_publicAclIgnoreBehaviorHasBeenSet; }
    inline void SetPublicAclIgnoreBehavior(const PublicAclIgnoreBehavior& value) { m_publicAclIgnoreBehaviorHasBeenSet = true; m_publicAclIgnoreBehavior = value; }
    inline void SetPublicAclIgnoreBehavior(PublicAclIgnoreBehavior&& value) { m_publicAclIgnoreBehaviorHasBeenSet = true; m_publicAclIgnoreBehavior = std::move(value); }
    inline PublicAccessConfiguration& WithPublicAclIgnoreBehavior(const PublicAclIgnoreBehavior& value) { SetPublicAclIgnoreBehavior(value); return *this;}
    inline PublicAccessConfiguration& WithPublicAclIgnoreBehavior(PublicAclIgnoreBehavior&& value) { SetPublicAclIgnoreBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not there is a setting that restricts access to the
     * bucket with specified policies.</p>
     */
    inline const PublicBucketRestrictBehavior& GetPublicBucketRestrictBehavior() const{ return m_publicBucketRestrictBehavior; }
    inline bool PublicBucketRestrictBehaviorHasBeenSet() const { return m_publicBucketRestrictBehaviorHasBeenSet; }
    inline void SetPublicBucketRestrictBehavior(const PublicBucketRestrictBehavior& value) { m_publicBucketRestrictBehaviorHasBeenSet = true; m_publicBucketRestrictBehavior = value; }
    inline void SetPublicBucketRestrictBehavior(PublicBucketRestrictBehavior&& value) { m_publicBucketRestrictBehaviorHasBeenSet = true; m_publicBucketRestrictBehavior = std::move(value); }
    inline PublicAccessConfiguration& WithPublicBucketRestrictBehavior(const PublicBucketRestrictBehavior& value) { SetPublicBucketRestrictBehavior(value); return *this;}
    inline PublicAccessConfiguration& WithPublicBucketRestrictBehavior(PublicBucketRestrictBehavior&& value) { SetPublicBucketRestrictBehavior(std::move(value)); return *this;}
    ///@}
  private:

    PublicAccessStatus m_publicAclAccess;
    bool m_publicAclAccessHasBeenSet = false;

    PublicAccessStatus m_publicPolicyAccess;
    bool m_publicPolicyAccessHasBeenSet = false;

    PublicAclIgnoreBehavior m_publicAclIgnoreBehavior;
    bool m_publicAclIgnoreBehaviorHasBeenSet = false;

    PublicBucketRestrictBehavior m_publicBucketRestrictBehavior;
    bool m_publicBucketRestrictBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
