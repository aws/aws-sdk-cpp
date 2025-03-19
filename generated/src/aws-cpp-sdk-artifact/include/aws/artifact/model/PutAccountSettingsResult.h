/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/AccountSettings.h>
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
namespace Artifact
{
namespace Model
{
  class PutAccountSettingsResult
  {
  public:
    AWS_ARTIFACT_API PutAccountSettingsResult() = default;
    AWS_ARTIFACT_API PutAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API PutAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const AccountSettings& GetAccountSettings() const { return m_accountSettings; }
    template<typename AccountSettingsT = AccountSettings>
    void SetAccountSettings(AccountSettingsT&& value) { m_accountSettingsHasBeenSet = true; m_accountSettings = std::forward<AccountSettingsT>(value); }
    template<typename AccountSettingsT = AccountSettings>
    PutAccountSettingsResult& WithAccountSettings(AccountSettingsT&& value) { SetAccountSettings(std::forward<AccountSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutAccountSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountSettings m_accountSettings;
    bool m_accountSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
