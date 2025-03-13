/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/AccountPreferences.h>
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
namespace chatbot
{
namespace Model
{
  class UpdateAccountPreferencesResult
  {
  public:
    AWS_CHATBOT_API UpdateAccountPreferencesResult() = default;
    AWS_CHATBOT_API UpdateAccountPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API UpdateAccountPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Preferences related to AWS Chatbot usage in the calling AWS account.</p>
     */
    inline const AccountPreferences& GetAccountPreferences() const { return m_accountPreferences; }
    template<typename AccountPreferencesT = AccountPreferences>
    void SetAccountPreferences(AccountPreferencesT&& value) { m_accountPreferencesHasBeenSet = true; m_accountPreferences = std::forward<AccountPreferencesT>(value); }
    template<typename AccountPreferencesT = AccountPreferences>
    UpdateAccountPreferencesResult& WithAccountPreferences(AccountPreferencesT&& value) { SetAccountPreferences(std::forward<AccountPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAccountPreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountPreferences m_accountPreferences;
    bool m_accountPreferencesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
