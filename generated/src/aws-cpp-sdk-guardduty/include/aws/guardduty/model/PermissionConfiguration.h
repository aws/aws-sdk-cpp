/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/BucketLevelPermissions.h>
#include <aws/guardduty/model/AccountLevelPermissions.h>
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
   * <p>Contains information about how permissions are configured for the S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/PermissionConfiguration">AWS
   * API Reference</a></p>
   */
  class PermissionConfiguration
  {
  public:
    AWS_GUARDDUTY_API PermissionConfiguration();
    AWS_GUARDDUTY_API PermissionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API PermissionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about the bucket level permissions for the S3
     * bucket.</p>
     */
    inline const BucketLevelPermissions& GetBucketLevelPermissions() const{ return m_bucketLevelPermissions; }

    /**
     * <p>Contains information about the bucket level permissions for the S3
     * bucket.</p>
     */
    inline bool BucketLevelPermissionsHasBeenSet() const { return m_bucketLevelPermissionsHasBeenSet; }

    /**
     * <p>Contains information about the bucket level permissions for the S3
     * bucket.</p>
     */
    inline void SetBucketLevelPermissions(const BucketLevelPermissions& value) { m_bucketLevelPermissionsHasBeenSet = true; m_bucketLevelPermissions = value; }

    /**
     * <p>Contains information about the bucket level permissions for the S3
     * bucket.</p>
     */
    inline void SetBucketLevelPermissions(BucketLevelPermissions&& value) { m_bucketLevelPermissionsHasBeenSet = true; m_bucketLevelPermissions = std::move(value); }

    /**
     * <p>Contains information about the bucket level permissions for the S3
     * bucket.</p>
     */
    inline PermissionConfiguration& WithBucketLevelPermissions(const BucketLevelPermissions& value) { SetBucketLevelPermissions(value); return *this;}

    /**
     * <p>Contains information about the bucket level permissions for the S3
     * bucket.</p>
     */
    inline PermissionConfiguration& WithBucketLevelPermissions(BucketLevelPermissions&& value) { SetBucketLevelPermissions(std::move(value)); return *this;}


    /**
     * <p>Contains information about the account level permissions on the S3
     * bucket.</p>
     */
    inline const AccountLevelPermissions& GetAccountLevelPermissions() const{ return m_accountLevelPermissions; }

    /**
     * <p>Contains information about the account level permissions on the S3
     * bucket.</p>
     */
    inline bool AccountLevelPermissionsHasBeenSet() const { return m_accountLevelPermissionsHasBeenSet; }

    /**
     * <p>Contains information about the account level permissions on the S3
     * bucket.</p>
     */
    inline void SetAccountLevelPermissions(const AccountLevelPermissions& value) { m_accountLevelPermissionsHasBeenSet = true; m_accountLevelPermissions = value; }

    /**
     * <p>Contains information about the account level permissions on the S3
     * bucket.</p>
     */
    inline void SetAccountLevelPermissions(AccountLevelPermissions&& value) { m_accountLevelPermissionsHasBeenSet = true; m_accountLevelPermissions = std::move(value); }

    /**
     * <p>Contains information about the account level permissions on the S3
     * bucket.</p>
     */
    inline PermissionConfiguration& WithAccountLevelPermissions(const AccountLevelPermissions& value) { SetAccountLevelPermissions(value); return *this;}

    /**
     * <p>Contains information about the account level permissions on the S3
     * bucket.</p>
     */
    inline PermissionConfiguration& WithAccountLevelPermissions(AccountLevelPermissions&& value) { SetAccountLevelPermissions(std::move(value)); return *this;}

  private:

    BucketLevelPermissions m_bucketLevelPermissions;
    bool m_bucketLevelPermissionsHasBeenSet = false;

    AccountLevelPermissions m_accountLevelPermissions;
    bool m_accountLevelPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
