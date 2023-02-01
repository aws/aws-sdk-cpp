/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedAgreement.h>
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
namespace Transfer
{
namespace Model
{
  class ListAgreementsResult
  {
  public:
    AWS_TRANSFER_API ListAgreementsResult();
    AWS_TRANSFER_API ListAgreementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListAgreementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a token that you can use to call <code>ListAgreements</code> again
     * and receive additional results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Returns a token that you can use to call <code>ListAgreements</code> again
     * and receive additional results, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Returns a token that you can use to call <code>ListAgreements</code> again
     * and receive additional results, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Returns a token that you can use to call <code>ListAgreements</code> again
     * and receive additional results, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Returns a token that you can use to call <code>ListAgreements</code> again
     * and receive additional results, if there are any.</p>
     */
    inline ListAgreementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Returns a token that you can use to call <code>ListAgreements</code> again
     * and receive additional results, if there are any.</p>
     */
    inline ListAgreementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Returns a token that you can use to call <code>ListAgreements</code> again
     * and receive additional results, if there are any.</p>
     */
    inline ListAgreementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns an array, where each item contains the details of an agreement.</p>
     */
    inline const Aws::Vector<ListedAgreement>& GetAgreements() const{ return m_agreements; }

    /**
     * <p>Returns an array, where each item contains the details of an agreement.</p>
     */
    inline void SetAgreements(const Aws::Vector<ListedAgreement>& value) { m_agreements = value; }

    /**
     * <p>Returns an array, where each item contains the details of an agreement.</p>
     */
    inline void SetAgreements(Aws::Vector<ListedAgreement>&& value) { m_agreements = std::move(value); }

    /**
     * <p>Returns an array, where each item contains the details of an agreement.</p>
     */
    inline ListAgreementsResult& WithAgreements(const Aws::Vector<ListedAgreement>& value) { SetAgreements(value); return *this;}

    /**
     * <p>Returns an array, where each item contains the details of an agreement.</p>
     */
    inline ListAgreementsResult& WithAgreements(Aws::Vector<ListedAgreement>&& value) { SetAgreements(std::move(value)); return *this;}

    /**
     * <p>Returns an array, where each item contains the details of an agreement.</p>
     */
    inline ListAgreementsResult& AddAgreements(const ListedAgreement& value) { m_agreements.push_back(value); return *this; }

    /**
     * <p>Returns an array, where each item contains the details of an agreement.</p>
     */
    inline ListAgreementsResult& AddAgreements(ListedAgreement&& value) { m_agreements.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListedAgreement> m_agreements;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
