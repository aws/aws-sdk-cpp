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
    AWS_LAKEFORMATION_API ListTransactionsResult() = default;
    AWS_LAKEFORMATION_API ListTransactionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListTransactionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of transactions. The record for each transaction is a
     * <code>TransactionDescription</code> object.</p>
     */
    inline const Aws::Vector<TransactionDescription>& GetTransactions() const { return m_transactions; }
    template<typename TransactionsT = Aws::Vector<TransactionDescription>>
    void SetTransactions(TransactionsT&& value) { m_transactionsHasBeenSet = true; m_transactions = std::forward<TransactionsT>(value); }
    template<typename TransactionsT = Aws::Vector<TransactionDescription>>
    ListTransactionsResult& WithTransactions(TransactionsT&& value) { SetTransactions(std::forward<TransactionsT>(value)); return *this;}
    template<typename TransactionsT = TransactionDescription>
    ListTransactionsResult& AddTransactions(TransactionsT&& value) { m_transactionsHasBeenSet = true; m_transactions.emplace_back(std::forward<TransactionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTransactionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTransactionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransactionDescription> m_transactions;
    bool m_transactionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
