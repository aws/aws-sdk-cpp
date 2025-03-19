/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/AccessRules.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/BucketAccessLogConfig.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class UpdateBucketRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API UpdateBucketRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBucket"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the bucket to update.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    UpdateBucketRequest& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that sets the public accessibility of objects in the specified
     * bucket.</p>
     */
    inline const AccessRules& GetAccessRules() const { return m_accessRules; }
    inline bool AccessRulesHasBeenSet() const { return m_accessRulesHasBeenSet; }
    template<typename AccessRulesT = AccessRules>
    void SetAccessRules(AccessRulesT&& value) { m_accessRulesHasBeenSet = true; m_accessRules = std::forward<AccessRulesT>(value); }
    template<typename AccessRulesT = AccessRules>
    UpdateBucketRequest& WithAccessRules(AccessRulesT&& value) { SetAccessRules(std::forward<AccessRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable or suspend versioning of objects in the
     * bucket.</p> <p>The following options can be specified:</p> <ul> <li> <p>
     * <code>Enabled</code> - Enables versioning of objects in the specified
     * bucket.</p> </li> <li> <p> <code>Suspended</code> - Suspends versioning of
     * objects in the specified bucket. Existing object versions are retained.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetVersioning() const { return m_versioning; }
    inline bool VersioningHasBeenSet() const { return m_versioningHasBeenSet; }
    template<typename VersioningT = Aws::String>
    void SetVersioning(VersioningT&& value) { m_versioningHasBeenSet = true; m_versioning = std::forward<VersioningT>(value); }
    template<typename VersioningT = Aws::String>
    UpdateBucketRequest& WithVersioning(VersioningT&& value) { SetVersioning(std::forward<VersioningT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings to specify the Amazon Web Services account IDs that can
     * access the bucket.</p> <p>You can give a maximum of 10 Amazon Web Services
     * accounts access to a bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadonlyAccessAccounts() const { return m_readonlyAccessAccounts; }
    inline bool ReadonlyAccessAccountsHasBeenSet() const { return m_readonlyAccessAccountsHasBeenSet; }
    template<typename ReadonlyAccessAccountsT = Aws::Vector<Aws::String>>
    void SetReadonlyAccessAccounts(ReadonlyAccessAccountsT&& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts = std::forward<ReadonlyAccessAccountsT>(value); }
    template<typename ReadonlyAccessAccountsT = Aws::Vector<Aws::String>>
    UpdateBucketRequest& WithReadonlyAccessAccounts(ReadonlyAccessAccountsT&& value) { SetReadonlyAccessAccounts(std::forward<ReadonlyAccessAccountsT>(value)); return *this;}
    template<typename ReadonlyAccessAccountsT = Aws::String>
    UpdateBucketRequest& AddReadonlyAccessAccounts(ReadonlyAccessAccountsT&& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts.emplace_back(std::forward<ReadonlyAccessAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline const BucketAccessLogConfig& GetAccessLogConfig() const { return m_accessLogConfig; }
    inline bool AccessLogConfigHasBeenSet() const { return m_accessLogConfigHasBeenSet; }
    template<typename AccessLogConfigT = BucketAccessLogConfig>
    void SetAccessLogConfig(AccessLogConfigT&& value) { m_accessLogConfigHasBeenSet = true; m_accessLogConfig = std::forward<AccessLogConfigT>(value); }
    template<typename AccessLogConfigT = BucketAccessLogConfig>
    UpdateBucketRequest& WithAccessLogConfig(AccessLogConfigT&& value) { SetAccessLogConfig(std::forward<AccessLogConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    AccessRules m_accessRules;
    bool m_accessRulesHasBeenSet = false;

    Aws::String m_versioning;
    bool m_versioningHasBeenSet = false;

    Aws::Vector<Aws::String> m_readonlyAccessAccounts;
    bool m_readonlyAccessAccountsHasBeenSet = false;

    BucketAccessLogConfig m_accessLogConfig;
    bool m_accessLogConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
