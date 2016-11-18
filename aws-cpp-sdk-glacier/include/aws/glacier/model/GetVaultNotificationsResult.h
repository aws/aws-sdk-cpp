﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/VaultNotificationConfig.h>

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
   * <p>Contains the Amazon Glacier response to your request.</p>
   */
  class AWS_GLACIER_API GetVaultNotificationsResult
  {
  public:
    GetVaultNotificationsResult();
    GetVaultNotificationsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetVaultNotificationsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetVaultNotificationConfig(VaultNotificationConfig&& value) { m_vaultNotificationConfig = value; }

    /**
     * <p>Returns the notification configuration set on the vault.</p>
     */
    inline GetVaultNotificationsResult& WithVaultNotificationConfig(const VaultNotificationConfig& value) { SetVaultNotificationConfig(value); return *this;}

    /**
     * <p>Returns the notification configuration set on the vault.</p>
     */
    inline GetVaultNotificationsResult& WithVaultNotificationConfig(VaultNotificationConfig&& value) { SetVaultNotificationConfig(value); return *this;}

  private:
    VaultNotificationConfig m_vaultNotificationConfig;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
