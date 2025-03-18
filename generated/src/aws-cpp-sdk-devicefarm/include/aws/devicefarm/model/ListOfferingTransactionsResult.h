/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/OfferingTransaction.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Returns the transaction log of the specified offerings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferingTransactionsResult">AWS
   * API Reference</a></p>
   */
  class ListOfferingTransactionsResult
  {
  public:
    AWS_DEVICEFARM_API ListOfferingTransactionsResult() = default;
    AWS_DEVICEFARM_API ListOfferingTransactionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListOfferingTransactionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The audit log of subscriptions you have purchased and modified through AWS
     * Device Farm.</p>
     */
    inline const Aws::Vector<OfferingTransaction>& GetOfferingTransactions() const { return m_offeringTransactions; }
    template<typename OfferingTransactionsT = Aws::Vector<OfferingTransaction>>
    void SetOfferingTransactions(OfferingTransactionsT&& value) { m_offeringTransactionsHasBeenSet = true; m_offeringTransactions = std::forward<OfferingTransactionsT>(value); }
    template<typename OfferingTransactionsT = Aws::Vector<OfferingTransaction>>
    ListOfferingTransactionsResult& WithOfferingTransactions(OfferingTransactionsT&& value) { SetOfferingTransactions(std::forward<OfferingTransactionsT>(value)); return *this;}
    template<typename OfferingTransactionsT = OfferingTransaction>
    ListOfferingTransactionsResult& AddOfferingTransactions(OfferingTransactionsT&& value) { m_offeringTransactionsHasBeenSet = true; m_offeringTransactions.emplace_back(std::forward<OfferingTransactionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOfferingTransactionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOfferingTransactionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OfferingTransaction> m_offeringTransactions;
    bool m_offeringTransactionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
