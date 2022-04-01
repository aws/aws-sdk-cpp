﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/Result.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API DeleteMembersResult
  {
  public:
    DeleteMembersResult();
    DeleteMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of Amazon Web Services accounts that were not deleted. For each
     * account, the list includes the account ID and the email address.</p>
     */
    inline const Aws::Vector<Result>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>The list of Amazon Web Services accounts that were not deleted. For each
     * account, the list includes the account ID and the email address.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<Result>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>The list of Amazon Web Services accounts that were not deleted. For each
     * account, the list includes the account ID and the email address.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<Result>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>The list of Amazon Web Services accounts that were not deleted. For each
     * account, the list includes the account ID and the email address.</p>
     */
    inline DeleteMembersResult& WithUnprocessedAccounts(const Aws::Vector<Result>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>The list of Amazon Web Services accounts that were not deleted. For each
     * account, the list includes the account ID and the email address.</p>
     */
    inline DeleteMembersResult& WithUnprocessedAccounts(Aws::Vector<Result>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Web Services accounts that were not deleted. For each
     * account, the list includes the account ID and the email address.</p>
     */
    inline DeleteMembersResult& AddUnprocessedAccounts(const Result& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Web Services accounts that were not deleted. For each
     * account, the list includes the account ID and the email address.</p>
     */
    inline DeleteMembersResult& AddUnprocessedAccounts(Result&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Result> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
