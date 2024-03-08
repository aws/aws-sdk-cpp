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
  class GetAccountPreferencesResult
  {
  public:
    AWS_CHATBOT_API GetAccountPreferencesResult();
    AWS_CHATBOT_API GetAccountPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API GetAccountPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Preferences which apply for AWS Chatbot usage in the calling AWS account.
     */
    inline const AccountPreferences& GetAccountPreferences() const{ return m_accountPreferences; }

    /**
     * Preferences which apply for AWS Chatbot usage in the calling AWS account.
     */
    inline void SetAccountPreferences(const AccountPreferences& value) { m_accountPreferences = value; }

    /**
     * Preferences which apply for AWS Chatbot usage in the calling AWS account.
     */
    inline void SetAccountPreferences(AccountPreferences&& value) { m_accountPreferences = std::move(value); }

    /**
     * Preferences which apply for AWS Chatbot usage in the calling AWS account.
     */
    inline GetAccountPreferencesResult& WithAccountPreferences(const AccountPreferences& value) { SetAccountPreferences(value); return *this;}

    /**
     * Preferences which apply for AWS Chatbot usage in the calling AWS account.
     */
    inline GetAccountPreferencesResult& WithAccountPreferences(AccountPreferences&& value) { SetAccountPreferences(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccountPreferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccountPreferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccountPreferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountPreferences m_accountPreferences;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
