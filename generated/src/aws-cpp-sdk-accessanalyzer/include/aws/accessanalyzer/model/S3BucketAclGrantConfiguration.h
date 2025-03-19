/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/AclPermission.h>
#include <aws/accessanalyzer/model/AclGrantee.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>A proposed access control list grant configuration for an Amazon S3 bucket.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#setting-acls">How
   * to Specify an ACL</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/S3BucketAclGrantConfiguration">AWS
   * API Reference</a></p>
   */
  class S3BucketAclGrantConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API S3BucketAclGrantConfiguration() = default;
    AWS_ACCESSANALYZER_API S3BucketAclGrantConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API S3BucketAclGrantConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The permissions being granted.</p>
     */
    inline AclPermission GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(AclPermission value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline S3BucketAclGrantConfiguration& WithPermission(AclPermission value) { SetPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grantee to whom you’re assigning access rights.</p>
     */
    inline const AclGrantee& GetGrantee() const { return m_grantee; }
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }
    template<typename GranteeT = AclGrantee>
    void SetGrantee(GranteeT&& value) { m_granteeHasBeenSet = true; m_grantee = std::forward<GranteeT>(value); }
    template<typename GranteeT = AclGrantee>
    S3BucketAclGrantConfiguration& WithGrantee(GranteeT&& value) { SetGrantee(std::forward<GranteeT>(value)); return *this;}
    ///@}
  private:

    AclPermission m_permission{AclPermission::NOT_SET};
    bool m_permissionHasBeenSet = false;

    AclGrantee m_grantee;
    bool m_granteeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
