/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/UnprocessedAccount.h>
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
namespace Macie2
{
namespace Model
{
  class CreateInvitationsResult
  {
  public:
    AWS_MACIE2_API CreateInvitationsResult();
    AWS_MACIE2_API CreateInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API CreateInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each account whose invitation hasn't been
     * processed. Each object identifies the account and explains why the invitation
     * hasn't been processed for the account.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>An array of objects, one for each account whose invitation hasn't been
     * processed. Each object identifies the account and explains why the invitation
     * hasn't been processed for the account.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>An array of objects, one for each account whose invitation hasn't been
     * processed. Each object identifies the account and explains why the invitation
     * hasn't been processed for the account.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>An array of objects, one for each account whose invitation hasn't been
     * processed. Each object identifies the account and explains why the invitation
     * hasn't been processed for the account.</p>
     */
    inline CreateInvitationsResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>An array of objects, one for each account whose invitation hasn't been
     * processed. Each object identifies the account and explains why the invitation
     * hasn't been processed for the account.</p>
     */
    inline CreateInvitationsResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each account whose invitation hasn't been
     * processed. Each object identifies the account and explains why the invitation
     * hasn't been processed for the account.</p>
     */
    inline CreateInvitationsResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each account whose invitation hasn't been
     * processed. Each object identifies the account and explains why the invitation
     * hasn't been processed for the account.</p>
     */
    inline CreateInvitationsResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
