/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/BillingGroupListElement.h>
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
namespace BillingConductor
{
namespace Model
{
  class ListBillingGroupsResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListBillingGroupsResult();
    AWS_BILLINGCONDUCTOR_API ListBillingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListBillingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>BillingGroupListElement</code> retrieved. </p>
     */
    inline const Aws::Vector<BillingGroupListElement>& GetBillingGroups() const{ return m_billingGroups; }

    /**
     * <p>A list of <code>BillingGroupListElement</code> retrieved. </p>
     */
    inline void SetBillingGroups(const Aws::Vector<BillingGroupListElement>& value) { m_billingGroups = value; }

    /**
     * <p>A list of <code>BillingGroupListElement</code> retrieved. </p>
     */
    inline void SetBillingGroups(Aws::Vector<BillingGroupListElement>&& value) { m_billingGroups = std::move(value); }

    /**
     * <p>A list of <code>BillingGroupListElement</code> retrieved. </p>
     */
    inline ListBillingGroupsResult& WithBillingGroups(const Aws::Vector<BillingGroupListElement>& value) { SetBillingGroups(value); return *this;}

    /**
     * <p>A list of <code>BillingGroupListElement</code> retrieved. </p>
     */
    inline ListBillingGroupsResult& WithBillingGroups(Aws::Vector<BillingGroupListElement>&& value) { SetBillingGroups(std::move(value)); return *this;}

    /**
     * <p>A list of <code>BillingGroupListElement</code> retrieved. </p>
     */
    inline ListBillingGroupsResult& AddBillingGroups(const BillingGroupListElement& value) { m_billingGroups.push_back(value); return *this; }

    /**
     * <p>A list of <code>BillingGroupListElement</code> retrieved. </p>
     */
    inline ListBillingGroupsResult& AddBillingGroups(BillingGroupListElement&& value) { m_billingGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline ListBillingGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline ListBillingGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline ListBillingGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BillingGroupListElement> m_billingGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
