/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{
  class GetAccountBalanceResult
  {
  public:
    AWS_MTURK_API GetAccountBalanceResult();
    AWS_MTURK_API GetAccountBalanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API GetAccountBalanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetAvailableBalance() const{ return m_availableBalance; }

    
    inline void SetAvailableBalance(const Aws::String& value) { m_availableBalance = value; }

    
    inline void SetAvailableBalance(Aws::String&& value) { m_availableBalance = std::move(value); }

    
    inline void SetAvailableBalance(const char* value) { m_availableBalance.assign(value); }

    
    inline GetAccountBalanceResult& WithAvailableBalance(const Aws::String& value) { SetAvailableBalance(value); return *this;}

    
    inline GetAccountBalanceResult& WithAvailableBalance(Aws::String&& value) { SetAvailableBalance(std::move(value)); return *this;}

    
    inline GetAccountBalanceResult& WithAvailableBalance(const char* value) { SetAvailableBalance(value); return *this;}


    
    inline const Aws::String& GetOnHoldBalance() const{ return m_onHoldBalance; }

    
    inline void SetOnHoldBalance(const Aws::String& value) { m_onHoldBalance = value; }

    
    inline void SetOnHoldBalance(Aws::String&& value) { m_onHoldBalance = std::move(value); }

    
    inline void SetOnHoldBalance(const char* value) { m_onHoldBalance.assign(value); }

    
    inline GetAccountBalanceResult& WithOnHoldBalance(const Aws::String& value) { SetOnHoldBalance(value); return *this;}

    
    inline GetAccountBalanceResult& WithOnHoldBalance(Aws::String&& value) { SetOnHoldBalance(std::move(value)); return *this;}

    
    inline GetAccountBalanceResult& WithOnHoldBalance(const char* value) { SetOnHoldBalance(value); return *this;}

  private:

    Aws::String m_availableBalance;

    Aws::String m_onHoldBalance;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
