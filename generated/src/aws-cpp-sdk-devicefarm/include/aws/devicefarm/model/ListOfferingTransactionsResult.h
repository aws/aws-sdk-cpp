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
    AWS_DEVICEFARM_API ListOfferingTransactionsResult();
    AWS_DEVICEFARM_API ListOfferingTransactionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListOfferingTransactionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The audit log of subscriptions you have purchased and modified through AWS
     * Device Farm.</p>
     */
    inline const Aws::Vector<OfferingTransaction>& GetOfferingTransactions() const{ return m_offeringTransactions; }

    /**
     * <p>The audit log of subscriptions you have purchased and modified through AWS
     * Device Farm.</p>
     */
    inline void SetOfferingTransactions(const Aws::Vector<OfferingTransaction>& value) { m_offeringTransactions = value; }

    /**
     * <p>The audit log of subscriptions you have purchased and modified through AWS
     * Device Farm.</p>
     */
    inline void SetOfferingTransactions(Aws::Vector<OfferingTransaction>&& value) { m_offeringTransactions = std::move(value); }

    /**
     * <p>The audit log of subscriptions you have purchased and modified through AWS
     * Device Farm.</p>
     */
    inline ListOfferingTransactionsResult& WithOfferingTransactions(const Aws::Vector<OfferingTransaction>& value) { SetOfferingTransactions(value); return *this;}

    /**
     * <p>The audit log of subscriptions you have purchased and modified through AWS
     * Device Farm.</p>
     */
    inline ListOfferingTransactionsResult& WithOfferingTransactions(Aws::Vector<OfferingTransaction>&& value) { SetOfferingTransactions(std::move(value)); return *this;}

    /**
     * <p>The audit log of subscriptions you have purchased and modified through AWS
     * Device Farm.</p>
     */
    inline ListOfferingTransactionsResult& AddOfferingTransactions(const OfferingTransaction& value) { m_offeringTransactions.push_back(value); return *this; }

    /**
     * <p>The audit log of subscriptions you have purchased and modified through AWS
     * Device Farm.</p>
     */
    inline ListOfferingTransactionsResult& AddOfferingTransactions(OfferingTransaction&& value) { m_offeringTransactions.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListOfferingTransactionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListOfferingTransactionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListOfferingTransactionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OfferingTransaction> m_offeringTransactions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
