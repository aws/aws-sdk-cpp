/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/CustomLineItemListElement.h>
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
  class ListCustomLineItemsResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsResult();
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of <code>FreeFormLineItemListElements</code> received. </p>
     */
    inline const Aws::Vector<CustomLineItemListElement>& GetCustomLineItems() const{ return m_customLineItems; }

    /**
     * <p> A list of <code>FreeFormLineItemListElements</code> received. </p>
     */
    inline void SetCustomLineItems(const Aws::Vector<CustomLineItemListElement>& value) { m_customLineItems = value; }

    /**
     * <p> A list of <code>FreeFormLineItemListElements</code> received. </p>
     */
    inline void SetCustomLineItems(Aws::Vector<CustomLineItemListElement>&& value) { m_customLineItems = std::move(value); }

    /**
     * <p> A list of <code>FreeFormLineItemListElements</code> received. </p>
     */
    inline ListCustomLineItemsResult& WithCustomLineItems(const Aws::Vector<CustomLineItemListElement>& value) { SetCustomLineItems(value); return *this;}

    /**
     * <p> A list of <code>FreeFormLineItemListElements</code> received. </p>
     */
    inline ListCustomLineItemsResult& WithCustomLineItems(Aws::Vector<CustomLineItemListElement>&& value) { SetCustomLineItems(std::move(value)); return *this;}

    /**
     * <p> A list of <code>FreeFormLineItemListElements</code> received. </p>
     */
    inline ListCustomLineItemsResult& AddCustomLineItems(const CustomLineItemListElement& value) { m_customLineItems.push_back(value); return *this; }

    /**
     * <p> A list of <code>FreeFormLineItemListElements</code> received. </p>
     */
    inline ListCustomLineItemsResult& AddCustomLineItems(CustomLineItemListElement&& value) { m_customLineItems.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that's used on subsequent calls to get custom line
     * items (FFLIs). </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used on subsequent calls to get custom line
     * items (FFLIs). </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that's used on subsequent calls to get custom line
     * items (FFLIs). </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used on subsequent calls to get custom line
     * items (FFLIs). </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used on subsequent calls to get custom line
     * items (FFLIs). </p>
     */
    inline ListCustomLineItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used on subsequent calls to get custom line
     * items (FFLIs). </p>
     */
    inline ListCustomLineItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used on subsequent calls to get custom line
     * items (FFLIs). </p>
     */
    inline ListCustomLineItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CustomLineItemListElement> m_customLineItems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
