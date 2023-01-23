/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/VaultNotificationConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetVaultNotificationsOutput">AWS
   * API Reference</a></p>
   */
  class GetVaultNotificationsResult
  {
  public:
    AWS_GLACIER_API GetVaultNotificationsResult();
    AWS_GLACIER_API GetVaultNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API GetVaultNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the notification configuration set on the vault.</p>
     */
    inline const VaultNotificationConfig& GetVaultNotificationConfig() const{ return m_vaultNotificationConfig; }

    /**
     * <p>Returns the notification configuration set on the vault.</p>
     */
    inline void SetVaultNotificationConfig(const VaultNotificationConfig& value) { m_vaultNotificationConfig = value; }

    /**
     * <p>Returns the notification configuration set on the vault.</p>
     */
    inline void SetVaultNotificationConfig(VaultNotificationConfig&& value) { m_vaultNotificationConfig = std::move(value); }

    /**
     * <p>Returns the notification configuration set on the vault.</p>
     */
    inline GetVaultNotificationsResult& WithVaultNotificationConfig(const VaultNotificationConfig& value) { SetVaultNotificationConfig(value); return *this;}

    /**
     * <p>Returns the notification configuration set on the vault.</p>
     */
    inline GetVaultNotificationsResult& WithVaultNotificationConfig(VaultNotificationConfig&& value) { SetVaultNotificationConfig(std::move(value)); return *this;}

  private:

    VaultNotificationConfig m_vaultNotificationConfig;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
