/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/AclGrantee.h>
#include <aws/accessanalyzer/model/AclPermission.h>
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
  class AWS_ACCESSANALYZER_API S3BucketAclGrantConfiguration
  {
  public:
    S3BucketAclGrantConfiguration();
    S3BucketAclGrantConfiguration(Aws::Utils::Json::JsonView jsonValue);
    S3BucketAclGrantConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The grantee to whom you’re assigning access rights.</p>
     */
    inline const AclGrantee& GetGrantee() const{ return m_grantee; }

    /**
     * <p>The grantee to whom you’re assigning access rights.</p>
     */
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }

    /**
     * <p>The grantee to whom you’re assigning access rights.</p>
     */
    inline void SetGrantee(const AclGrantee& value) { m_granteeHasBeenSet = true; m_grantee = value; }

    /**
     * <p>The grantee to whom you’re assigning access rights.</p>
     */
    inline void SetGrantee(AclGrantee&& value) { m_granteeHasBeenSet = true; m_grantee = std::move(value); }

    /**
     * <p>The grantee to whom you’re assigning access rights.</p>
     */
    inline S3BucketAclGrantConfiguration& WithGrantee(const AclGrantee& value) { SetGrantee(value); return *this;}

    /**
     * <p>The grantee to whom you’re assigning access rights.</p>
     */
    inline S3BucketAclGrantConfiguration& WithGrantee(AclGrantee&& value) { SetGrantee(std::move(value)); return *this;}


    /**
     * <p>The permissions being granted.</p>
     */
    inline const AclPermission& GetPermission() const{ return m_permission; }

    /**
     * <p>The permissions being granted.</p>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>The permissions being granted.</p>
     */
    inline void SetPermission(const AclPermission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>The permissions being granted.</p>
     */
    inline void SetPermission(AclPermission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>The permissions being granted.</p>
     */
    inline S3BucketAclGrantConfiguration& WithPermission(const AclPermission& value) { SetPermission(value); return *this;}

    /**
     * <p>The permissions being granted.</p>
     */
    inline S3BucketAclGrantConfiguration& WithPermission(AclPermission&& value) { SetPermission(std::move(value)); return *this;}

  private:

    AclGrantee m_grantee;
    bool m_granteeHasBeenSet;

    AclPermission m_permission;
    bool m_permissionHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
