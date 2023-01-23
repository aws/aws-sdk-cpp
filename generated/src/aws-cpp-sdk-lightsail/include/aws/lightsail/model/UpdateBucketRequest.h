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
    AWS_LIGHTSAIL_API UpdateBucketRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBucket"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the bucket to update.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the bucket to update.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the bucket to update.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the bucket to update.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the bucket to update.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the bucket to update.</p>
     */
    inline UpdateBucketRequest& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the bucket to update.</p>
     */
    inline UpdateBucketRequest& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket to update.</p>
     */
    inline UpdateBucketRequest& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>An object that sets the public accessibility of objects in the specified
     * bucket.</p>
     */
    inline const AccessRules& GetAccessRules() const{ return m_accessRules; }

    /**
     * <p>An object that sets the public accessibility of objects in the specified
     * bucket.</p>
     */
    inline bool AccessRulesHasBeenSet() const { return m_accessRulesHasBeenSet; }

    /**
     * <p>An object that sets the public accessibility of objects in the specified
     * bucket.</p>
     */
    inline void SetAccessRules(const AccessRules& value) { m_accessRulesHasBeenSet = true; m_accessRules = value; }

    /**
     * <p>An object that sets the public accessibility of objects in the specified
     * bucket.</p>
     */
    inline void SetAccessRules(AccessRules&& value) { m_accessRulesHasBeenSet = true; m_accessRules = std::move(value); }

    /**
     * <p>An object that sets the public accessibility of objects in the specified
     * bucket.</p>
     */
    inline UpdateBucketRequest& WithAccessRules(const AccessRules& value) { SetAccessRules(value); return *this;}

    /**
     * <p>An object that sets the public accessibility of objects in the specified
     * bucket.</p>
     */
    inline UpdateBucketRequest& WithAccessRules(AccessRules&& value) { SetAccessRules(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to enable or suspend versioning of objects in the
     * bucket.</p> <p>The following options can be specified:</p> <ul> <li> <p>
     * <code>Enabled</code> - Enables versioning of objects in the specified
     * bucket.</p> </li> <li> <p> <code>Suspended</code> - Suspends versioning of
     * objects in the specified bucket. Existing object versions are retained.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetVersioning() const{ return m_versioning; }

    /**
     * <p>Specifies whether to enable or suspend versioning of objects in the
     * bucket.</p> <p>The following options can be specified:</p> <ul> <li> <p>
     * <code>Enabled</code> - Enables versioning of objects in the specified
     * bucket.</p> </li> <li> <p> <code>Suspended</code> - Suspends versioning of
     * objects in the specified bucket. Existing object versions are retained.</p>
     * </li> </ul>
     */
    inline bool VersioningHasBeenSet() const { return m_versioningHasBeenSet; }

    /**
     * <p>Specifies whether to enable or suspend versioning of objects in the
     * bucket.</p> <p>The following options can be specified:</p> <ul> <li> <p>
     * <code>Enabled</code> - Enables versioning of objects in the specified
     * bucket.</p> </li> <li> <p> <code>Suspended</code> - Suspends versioning of
     * objects in the specified bucket. Existing object versions are retained.</p>
     * </li> </ul>
     */
    inline void SetVersioning(const Aws::String& value) { m_versioningHasBeenSet = true; m_versioning = value; }

    /**
     * <p>Specifies whether to enable or suspend versioning of objects in the
     * bucket.</p> <p>The following options can be specified:</p> <ul> <li> <p>
     * <code>Enabled</code> - Enables versioning of objects in the specified
     * bucket.</p> </li> <li> <p> <code>Suspended</code> - Suspends versioning of
     * objects in the specified bucket. Existing object versions are retained.</p>
     * </li> </ul>
     */
    inline void SetVersioning(Aws::String&& value) { m_versioningHasBeenSet = true; m_versioning = std::move(value); }

    /**
     * <p>Specifies whether to enable or suspend versioning of objects in the
     * bucket.</p> <p>The following options can be specified:</p> <ul> <li> <p>
     * <code>Enabled</code> - Enables versioning of objects in the specified
     * bucket.</p> </li> <li> <p> <code>Suspended</code> - Suspends versioning of
     * objects in the specified bucket. Existing object versions are retained.</p>
     * </li> </ul>
     */
    inline void SetVersioning(const char* value) { m_versioningHasBeenSet = true; m_versioning.assign(value); }

    /**
     * <p>Specifies whether to enable or suspend versioning of objects in the
     * bucket.</p> <p>The following options can be specified:</p> <ul> <li> <p>
     * <code>Enabled</code> - Enables versioning of objects in the specified
     * bucket.</p> </li> <li> <p> <code>Suspended</code> - Suspends versioning of
     * objects in the specified bucket. Existing object versions are retained.</p>
     * </li> </ul>
     */
    inline UpdateBucketRequest& WithVersioning(const Aws::String& value) { SetVersioning(value); return *this;}

    /**
     * <p>Specifies whether to enable or suspend versioning of objects in the
     * bucket.</p> <p>The following options can be specified:</p> <ul> <li> <p>
     * <code>Enabled</code> - Enables versioning of objects in the specified
     * bucket.</p> </li> <li> <p> <code>Suspended</code> - Suspends versioning of
     * objects in the specified bucket. Existing object versions are retained.</p>
     * </li> </ul>
     */
    inline UpdateBucketRequest& WithVersioning(Aws::String&& value) { SetVersioning(std::move(value)); return *this;}

    /**
     * <p>Specifies whether to enable or suspend versioning of objects in the
     * bucket.</p> <p>The following options can be specified:</p> <ul> <li> <p>
     * <code>Enabled</code> - Enables versioning of objects in the specified
     * bucket.</p> </li> <li> <p> <code>Suspended</code> - Suspends versioning of
     * objects in the specified bucket. Existing object versions are retained.</p>
     * </li> </ul>
     */
    inline UpdateBucketRequest& WithVersioning(const char* value) { SetVersioning(value); return *this;}


    /**
     * <p>An array of strings to specify the Amazon Web Services account IDs that can
     * access the bucket.</p> <p>You can give a maximum of 10 Amazon Web Services
     * accounts access to a bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadonlyAccessAccounts() const{ return m_readonlyAccessAccounts; }

    /**
     * <p>An array of strings to specify the Amazon Web Services account IDs that can
     * access the bucket.</p> <p>You can give a maximum of 10 Amazon Web Services
     * accounts access to a bucket.</p>
     */
    inline bool ReadonlyAccessAccountsHasBeenSet() const { return m_readonlyAccessAccountsHasBeenSet; }

    /**
     * <p>An array of strings to specify the Amazon Web Services account IDs that can
     * access the bucket.</p> <p>You can give a maximum of 10 Amazon Web Services
     * accounts access to a bucket.</p>
     */
    inline void SetReadonlyAccessAccounts(const Aws::Vector<Aws::String>& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts = value; }

    /**
     * <p>An array of strings to specify the Amazon Web Services account IDs that can
     * access the bucket.</p> <p>You can give a maximum of 10 Amazon Web Services
     * accounts access to a bucket.</p>
     */
    inline void SetReadonlyAccessAccounts(Aws::Vector<Aws::String>&& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts = std::move(value); }

    /**
     * <p>An array of strings to specify the Amazon Web Services account IDs that can
     * access the bucket.</p> <p>You can give a maximum of 10 Amazon Web Services
     * accounts access to a bucket.</p>
     */
    inline UpdateBucketRequest& WithReadonlyAccessAccounts(const Aws::Vector<Aws::String>& value) { SetReadonlyAccessAccounts(value); return *this;}

    /**
     * <p>An array of strings to specify the Amazon Web Services account IDs that can
     * access the bucket.</p> <p>You can give a maximum of 10 Amazon Web Services
     * accounts access to a bucket.</p>
     */
    inline UpdateBucketRequest& WithReadonlyAccessAccounts(Aws::Vector<Aws::String>&& value) { SetReadonlyAccessAccounts(std::move(value)); return *this;}

    /**
     * <p>An array of strings to specify the Amazon Web Services account IDs that can
     * access the bucket.</p> <p>You can give a maximum of 10 Amazon Web Services
     * accounts access to a bucket.</p>
     */
    inline UpdateBucketRequest& AddReadonlyAccessAccounts(const Aws::String& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts.push_back(value); return *this; }

    /**
     * <p>An array of strings to specify the Amazon Web Services account IDs that can
     * access the bucket.</p> <p>You can give a maximum of 10 Amazon Web Services
     * accounts access to a bucket.</p>
     */
    inline UpdateBucketRequest& AddReadonlyAccessAccounts(Aws::String&& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings to specify the Amazon Web Services account IDs that can
     * access the bucket.</p> <p>You can give a maximum of 10 Amazon Web Services
     * accounts access to a bucket.</p>
     */
    inline UpdateBucketRequest& AddReadonlyAccessAccounts(const char* value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts.push_back(value); return *this; }


    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline const BucketAccessLogConfig& GetAccessLogConfig() const{ return m_accessLogConfig; }

    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline bool AccessLogConfigHasBeenSet() const { return m_accessLogConfigHasBeenSet; }

    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline void SetAccessLogConfig(const BucketAccessLogConfig& value) { m_accessLogConfigHasBeenSet = true; m_accessLogConfig = value; }

    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline void SetAccessLogConfig(BucketAccessLogConfig&& value) { m_accessLogConfigHasBeenSet = true; m_accessLogConfig = std::move(value); }

    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline UpdateBucketRequest& WithAccessLogConfig(const BucketAccessLogConfig& value) { SetAccessLogConfig(value); return *this;}

    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline UpdateBucketRequest& WithAccessLogConfig(BucketAccessLogConfig&& value) { SetAccessLogConfig(std::move(value)); return *this;}

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
