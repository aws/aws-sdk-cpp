/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/AccountSettings.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the account settings return values from the
   * <code>GetAccountSettings</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetAccountSettingsResult">AWS
   * API Reference</a></p>
   */
  class GetAccountSettingsResult
  {
  public:
    AWS_DEVICEFARM_API GetAccountSettingsResult();
    AWS_DEVICEFARM_API GetAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account settings.</p>
     */
    inline const AccountSettings& GetAccountSettings() const{ return m_accountSettings; }

    /**
     * <p>The account settings.</p>
     */
    inline void SetAccountSettings(const AccountSettings& value) { m_accountSettings = value; }

    /**
     * <p>The account settings.</p>
     */
    inline void SetAccountSettings(AccountSettings&& value) { m_accountSettings = std::move(value); }

    /**
     * <p>The account settings.</p>
     */
    inline GetAccountSettingsResult& WithAccountSettings(const AccountSettings& value) { SetAccountSettings(value); return *this;}

    /**
     * <p>The account settings.</p>
     */
    inline GetAccountSettingsResult& WithAccountSettings(AccountSettings&& value) { SetAccountSettings(std::move(value)); return *this;}

  private:

    AccountSettings m_accountSettings;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
