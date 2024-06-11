﻿/**
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
    AWS_GLACIER_API GetVaultNotificationsResult();
    AWS_GLACIER_API GetVaultNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API GetVaultNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the notification configuration set on the vault.</p>
     */
    inline const VaultNotificationConfig& GetVaultNotificationConfig() const{ return m_vaultNotificationConfig; }
    inline void SetVaultNotificationConfig(const VaultNotificationConfig& value) { m_vaultNotificationConfig = value; }
    inline void SetVaultNotificationConfig(VaultNotificationConfig&& value) { m_vaultNotificationConfig = std::move(value); }
    inline GetVaultNotificationsResult& WithVaultNotificationConfig(const VaultNotificationConfig& value) { SetVaultNotificationConfig(value); return *this;}
    inline GetVaultNotificationsResult& WithVaultNotificationConfig(VaultNotificationConfig&& value) { SetVaultNotificationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetVaultNotificationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetVaultNotificationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetVaultNotificationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    VaultNotificationConfig m_vaultNotificationConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
