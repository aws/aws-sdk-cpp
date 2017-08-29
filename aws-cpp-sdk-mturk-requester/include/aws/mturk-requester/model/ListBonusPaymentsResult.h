/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/BonusPayment.h>
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
  class AWS_MTURK_API ListBonusPaymentsResult
  {
  public:
    ListBonusPaymentsResult();
    ListBonusPaymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListBonusPaymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of bonus payments on this page in the filtered results list,
     * equivalent to the number of bonus payments being returned by this call. </p>
     */
    inline int GetNumResults() const{ return m_numResults; }

    /**
     * <p>The number of bonus payments on this page in the filtered results list,
     * equivalent to the number of bonus payments being returned by this call. </p>
     */
    inline void SetNumResults(int value) { m_numResults = value; }

    /**
     * <p>The number of bonus payments on this page in the filtered results list,
     * equivalent to the number of bonus payments being returned by this call. </p>
     */
    inline ListBonusPaymentsResult& WithNumResults(int value) { SetNumResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListBonusPaymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListBonusPaymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListBonusPaymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A successful request to the ListBonusPayments operation returns a list of
     * BonusPayment objects. </p>
     */
    inline const Aws::Vector<BonusPayment>& GetBonusPayments() const{ return m_bonusPayments; }

    /**
     * <p>A successful request to the ListBonusPayments operation returns a list of
     * BonusPayment objects. </p>
     */
    inline void SetBonusPayments(const Aws::Vector<BonusPayment>& value) { m_bonusPayments = value; }

    /**
     * <p>A successful request to the ListBonusPayments operation returns a list of
     * BonusPayment objects. </p>
     */
    inline void SetBonusPayments(Aws::Vector<BonusPayment>&& value) { m_bonusPayments = std::move(value); }

    /**
     * <p>A successful request to the ListBonusPayments operation returns a list of
     * BonusPayment objects. </p>
     */
    inline ListBonusPaymentsResult& WithBonusPayments(const Aws::Vector<BonusPayment>& value) { SetBonusPayments(value); return *this;}

    /**
     * <p>A successful request to the ListBonusPayments operation returns a list of
     * BonusPayment objects. </p>
     */
    inline ListBonusPaymentsResult& WithBonusPayments(Aws::Vector<BonusPayment>&& value) { SetBonusPayments(std::move(value)); return *this;}

    /**
     * <p>A successful request to the ListBonusPayments operation returns a list of
     * BonusPayment objects. </p>
     */
    inline ListBonusPaymentsResult& AddBonusPayments(const BonusPayment& value) { m_bonusPayments.push_back(value); return *this; }

    /**
     * <p>A successful request to the ListBonusPayments operation returns a list of
     * BonusPayment objects. </p>
     */
    inline ListBonusPaymentsResult& AddBonusPayments(BonusPayment&& value) { m_bonusPayments.push_back(std::move(value)); return *this; }

  private:

    int m_numResults;

    Aws::String m_nextToken;

    Aws::Vector<BonusPayment> m_bonusPayments;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
