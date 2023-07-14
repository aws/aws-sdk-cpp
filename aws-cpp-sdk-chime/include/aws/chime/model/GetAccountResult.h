﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Account.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API GetAccountResult
  {
  public:
    GetAccountResult();
    GetAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Chime account details.</p>
     */
    inline const Account& GetAccount() const{ return m_account; }

    /**
     * <p>The Amazon Chime account details.</p>
     */
    inline void SetAccount(const Account& value) { m_account = value; }

    /**
     * <p>The Amazon Chime account details.</p>
     */
    inline void SetAccount(Account&& value) { m_account = std::move(value); }

    /**
     * <p>The Amazon Chime account details.</p>
     */
    inline GetAccountResult& WithAccount(const Account& value) { SetAccount(value); return *this;}

    /**
     * <p>The Amazon Chime account details.</p>
     */
    inline GetAccountResult& WithAccount(Account&& value) { SetAccount(std::move(value)); return *this;}

  private:

    Account m_account;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
