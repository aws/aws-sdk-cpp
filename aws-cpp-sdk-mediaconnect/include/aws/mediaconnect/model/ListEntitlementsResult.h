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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/ListedEntitlement.h>
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
namespace MediaConnect
{
namespace Model
{
  class AWS_MEDIACONNECT_API ListEntitlementsResult
  {
  public:
    ListEntitlementsResult();
    ListEntitlementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListEntitlementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of entitlements that have been granted to you from other AWS accounts.
     */
    inline const Aws::Vector<ListedEntitlement>& GetEntitlements() const{ return m_entitlements; }

    /**
     * A list of entitlements that have been granted to you from other AWS accounts.
     */
    inline void SetEntitlements(const Aws::Vector<ListedEntitlement>& value) { m_entitlements = value; }

    /**
     * A list of entitlements that have been granted to you from other AWS accounts.
     */
    inline void SetEntitlements(Aws::Vector<ListedEntitlement>&& value) { m_entitlements = std::move(value); }

    /**
     * A list of entitlements that have been granted to you from other AWS accounts.
     */
    inline ListEntitlementsResult& WithEntitlements(const Aws::Vector<ListedEntitlement>& value) { SetEntitlements(value); return *this;}

    /**
     * A list of entitlements that have been granted to you from other AWS accounts.
     */
    inline ListEntitlementsResult& WithEntitlements(Aws::Vector<ListedEntitlement>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * A list of entitlements that have been granted to you from other AWS accounts.
     */
    inline ListEntitlementsResult& AddEntitlements(const ListedEntitlement& value) { m_entitlements.push_back(value); return *this; }

    /**
     * A list of entitlements that have been granted to you from other AWS accounts.
     */
    inline ListEntitlementsResult& AddEntitlements(ListedEntitlement&& value) { m_entitlements.push_back(std::move(value)); return *this; }


    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline ListEntitlementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline ListEntitlementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline ListEntitlementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListedEntitlement> m_entitlements;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
