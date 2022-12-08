/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/TransactionDescription.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListTransactionsResult
  {
  public:
    AWS_LAKEFORMATION_API ListTransactionsResult();
    AWS_LAKEFORMATION_API ListTransactionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListTransactionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of transactions. The record for each transaction is a
     * <code>TransactionDescription</code> object.</p>
     */
    inline const Aws::Vector<TransactionDescription>& GetTransactions() const{ return m_transactions; }

    /**
     * <p>A list of transactions. The record for each transaction is a
     * <code>TransactionDescription</code> object.</p>
     */
    inline void SetTransactions(const Aws::Vector<TransactionDescription>& value) { m_transactions = value; }

    /**
     * <p>A list of transactions. The record for each transaction is a
     * <code>TransactionDescription</code> object.</p>
     */
    inline void SetTransactions(Aws::Vector<TransactionDescription>&& value) { m_transactions = std::move(value); }

    /**
     * <p>A list of transactions. The record for each transaction is a
     * <code>TransactionDescription</code> object.</p>
     */
    inline ListTransactionsResult& WithTransactions(const Aws::Vector<TransactionDescription>& value) { SetTransactions(value); return *this;}

    /**
     * <p>A list of transactions. The record for each transaction is a
     * <code>TransactionDescription</code> object.</p>
     */
    inline ListTransactionsResult& WithTransactions(Aws::Vector<TransactionDescription>&& value) { SetTransactions(std::move(value)); return *this;}

    /**
     * <p>A list of transactions. The record for each transaction is a
     * <code>TransactionDescription</code> object.</p>
     */
    inline ListTransactionsResult& AddTransactions(const TransactionDescription& value) { m_transactions.push_back(value); return *this; }

    /**
     * <p>A list of transactions. The record for each transaction is a
     * <code>TransactionDescription</code> object.</p>
     */
    inline ListTransactionsResult& AddTransactions(TransactionDescription&& value) { m_transactions.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline ListTransactionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline ListTransactionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline ListTransactionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TransactionDescription> m_transactions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
