/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/AccountSettings.h>
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
    AWS_DEVICEFARM_API GetAccountSettingsResult() = default;
    AWS_DEVICEFARM_API GetAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The account settings.</p>
     */
    inline const AccountSettings& GetAccountSettings() const { return m_accountSettings; }
    template<typename AccountSettingsT = AccountSettings>
    void SetAccountSettings(AccountSettingsT&& value) { m_accountSettingsHasBeenSet = true; m_accountSettings = std::forward<AccountSettingsT>(value); }
    template<typename AccountSettingsT = AccountSettings>
    GetAccountSettingsResult& WithAccountSettings(AccountSettingsT&& value) { SetAccountSettings(std::forward<AccountSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountSettings m_accountSettings;
    bool m_accountSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
