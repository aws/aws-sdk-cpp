/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/detective/model/MembershipDatasources.h>
#include <aws/detective/model/UnprocessedAccount.h>
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
namespace Detective
{
namespace Model
{
  class BatchGetGraphMemberDatasourcesResult
  {
  public:
    AWS_DETECTIVE_API BatchGetGraphMemberDatasourcesResult();
    AWS_DETECTIVE_API BatchGetGraphMemberDatasourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API BatchGetGraphMemberDatasourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details on the status of data source packages for members of the behavior
     * graph.</p>
     */
    inline const Aws::Vector<MembershipDatasources>& GetMemberDatasources() const{ return m_memberDatasources; }

    /**
     * <p>Details on the status of data source packages for members of the behavior
     * graph.</p>
     */
    inline void SetMemberDatasources(const Aws::Vector<MembershipDatasources>& value) { m_memberDatasources = value; }

    /**
     * <p>Details on the status of data source packages for members of the behavior
     * graph.</p>
     */
    inline void SetMemberDatasources(Aws::Vector<MembershipDatasources>&& value) { m_memberDatasources = std::move(value); }

    /**
     * <p>Details on the status of data source packages for members of the behavior
     * graph.</p>
     */
    inline BatchGetGraphMemberDatasourcesResult& WithMemberDatasources(const Aws::Vector<MembershipDatasources>& value) { SetMemberDatasources(value); return *this;}

    /**
     * <p>Details on the status of data source packages for members of the behavior
     * graph.</p>
     */
    inline BatchGetGraphMemberDatasourcesResult& WithMemberDatasources(Aws::Vector<MembershipDatasources>&& value) { SetMemberDatasources(std::move(value)); return *this;}

    /**
     * <p>Details on the status of data source packages for members of the behavior
     * graph.</p>
     */
    inline BatchGetGraphMemberDatasourcesResult& AddMemberDatasources(const MembershipDatasources& value) { m_memberDatasources.push_back(value); return *this; }

    /**
     * <p>Details on the status of data source packages for members of the behavior
     * graph.</p>
     */
    inline BatchGetGraphMemberDatasourcesResult& AddMemberDatasources(MembershipDatasources&& value) { m_memberDatasources.push_back(std::move(value)); return *this; }


    /**
     * <p>Accounts that data source package information could not be retrieved for.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>Accounts that data source package information could not be retrieved for.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>Accounts that data source package information could not be retrieved for.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>Accounts that data source package information could not be retrieved for.</p>
     */
    inline BatchGetGraphMemberDatasourcesResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>Accounts that data source package information could not be retrieved for.</p>
     */
    inline BatchGetGraphMemberDatasourcesResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>Accounts that data source package information could not be retrieved for.</p>
     */
    inline BatchGetGraphMemberDatasourcesResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>Accounts that data source package information could not be retrieved for.</p>
     */
    inline BatchGetGraphMemberDatasourcesResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MembershipDatasources> m_memberDatasources;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
