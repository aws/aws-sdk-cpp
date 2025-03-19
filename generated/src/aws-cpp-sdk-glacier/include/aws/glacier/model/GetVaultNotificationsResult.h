/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/VaultNotificationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_GLACIER_API GetVaultNotificationsResult() = default;
    AWS_GLACIER_API GetVaultNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API GetVaultNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the notification configuration set on the vault.</p>
     */
    inline const VaultNotificationConfig& GetVaultNotificationConfig() const { return m_vaultNotificationConfig; }
    template<typename VaultNotificationConfigT = VaultNotificationConfig>
    void SetVaultNotificationConfig(VaultNotificationConfigT&& value) { m_vaultNotificationConfigHasBeenSet = true; m_vaultNotificationConfig = std::forward<VaultNotificationConfigT>(value); }
    template<typename VaultNotificationConfigT = VaultNotificationConfig>
    GetVaultNotificationsResult& WithVaultNotificationConfig(VaultNotificationConfigT&& value) { SetVaultNotificationConfig(std::forward<VaultNotificationConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVaultNotificationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VaultNotificationConfig m_vaultNotificationConfig;
    bool m_vaultNotificationConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
