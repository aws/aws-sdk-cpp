/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/AccountLevelPermissions.h>
#include <aws/macie2/model/BucketLevelPermissions.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the account-level and bucket-level permissions
   * settings for an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketPermissionConfiguration">AWS
   * API Reference</a></p>
   */
  class BucketPermissionConfiguration
  {
  public:
    AWS_MACIE2_API BucketPermissionConfiguration() = default;
    AWS_MACIE2_API BucketPermissionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketPermissionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account-level permissions settings that apply to the bucket.</p>
     */
    inline const AccountLevelPermissions& GetAccountLevelPermissions() const { return m_accountLevelPermissions; }
    inline bool AccountLevelPermissionsHasBeenSet() const { return m_accountLevelPermissionsHasBeenSet; }
    template<typename AccountLevelPermissionsT = AccountLevelPermissions>
    void SetAccountLevelPermissions(AccountLevelPermissionsT&& value) { m_accountLevelPermissionsHasBeenSet = true; m_accountLevelPermissions = std::forward<AccountLevelPermissionsT>(value); }
    template<typename AccountLevelPermissionsT = AccountLevelPermissions>
    BucketPermissionConfiguration& WithAccountLevelPermissions(AccountLevelPermissionsT&& value) { SetAccountLevelPermissions(std::forward<AccountLevelPermissionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket-level permissions settings for the bucket.</p>
     */
    inline const BucketLevelPermissions& GetBucketLevelPermissions() const { return m_bucketLevelPermissions; }
    inline bool BucketLevelPermissionsHasBeenSet() const { return m_bucketLevelPermissionsHasBeenSet; }
    template<typename BucketLevelPermissionsT = BucketLevelPermissions>
    void SetBucketLevelPermissions(BucketLevelPermissionsT&& value) { m_bucketLevelPermissionsHasBeenSet = true; m_bucketLevelPermissions = std::forward<BucketLevelPermissionsT>(value); }
    template<typename BucketLevelPermissionsT = BucketLevelPermissions>
    BucketPermissionConfiguration& WithBucketLevelPermissions(BucketLevelPermissionsT&& value) { SetBucketLevelPermissions(std::forward<BucketLevelPermissionsT>(value)); return *this;}
    ///@}
  private:

    AccountLevelPermissions m_accountLevelPermissions;
    bool m_accountLevelPermissionsHasBeenSet = false;

    BucketLevelPermissions m_bucketLevelPermissions;
    bool m_bucketLevelPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
