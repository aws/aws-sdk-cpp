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
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-entitlement/model/Entitlement.h>
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
namespace MarketplaceEntitlementService
{
namespace Model
{
  /**
   * <p>The GetEntitlementsRequest contains results from the GetEntitlements
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entitlement.marketplace-2017-01-11/GetEntitlementsResult">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACEENTITLEMENTSERVICE_API GetEntitlementsResult
  {
  public:
    GetEntitlementsResult();
    GetEntitlementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEntitlementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The set of entitlements found through the GetEntitlements operation. If the
     * result contains an empty set of entitlements, NextToken might still be present
     * and should be used.</p>
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const{ return m_entitlements; }

    /**
     * <p>The set of entitlements found through the GetEntitlements operation. If the
     * result contains an empty set of entitlements, NextToken might still be present
     * and should be used.</p>
     */
    inline void SetEntitlements(const Aws::Vector<Entitlement>& value) { m_entitlements = value; }

    /**
     * <p>The set of entitlements found through the GetEntitlements operation. If the
     * result contains an empty set of entitlements, NextToken might still be present
     * and should be used.</p>
     */
    inline void SetEntitlements(Aws::Vector<Entitlement>&& value) { m_entitlements = std::move(value); }

    /**
     * <p>The set of entitlements found through the GetEntitlements operation. If the
     * result contains an empty set of entitlements, NextToken might still be present
     * and should be used.</p>
     */
    inline GetEntitlementsResult& WithEntitlements(const Aws::Vector<Entitlement>& value) { SetEntitlements(value); return *this;}

    /**
     * <p>The set of entitlements found through the GetEntitlements operation. If the
     * result contains an empty set of entitlements, NextToken might still be present
     * and should be used.</p>
     */
    inline GetEntitlementsResult& WithEntitlements(Aws::Vector<Entitlement>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * <p>The set of entitlements found through the GetEntitlements operation. If the
     * result contains an empty set of entitlements, NextToken might still be present
     * and should be used.</p>
     */
    inline GetEntitlementsResult& AddEntitlements(const Entitlement& value) { m_entitlements.push_back(value); return *this; }

    /**
     * <p>The set of entitlements found through the GetEntitlements operation. If the
     * result contains an empty set of entitlements, NextToken might still be present
     * and should be used.</p>
     */
    inline GetEntitlementsResult& AddEntitlements(Entitlement&& value) { m_entitlements.push_back(std::move(value)); return *this; }


    /**
     * <p>For paginated results, use NextToken in subsequent calls to GetEntitlements.
     * If the result contains an empty set of entitlements, NextToken might still be
     * present and should be used.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For paginated results, use NextToken in subsequent calls to GetEntitlements.
     * If the result contains an empty set of entitlements, NextToken might still be
     * present and should be used.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>For paginated results, use NextToken in subsequent calls to GetEntitlements.
     * If the result contains an empty set of entitlements, NextToken might still be
     * present and should be used.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>For paginated results, use NextToken in subsequent calls to GetEntitlements.
     * If the result contains an empty set of entitlements, NextToken might still be
     * present and should be used.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>For paginated results, use NextToken in subsequent calls to GetEntitlements.
     * If the result contains an empty set of entitlements, NextToken might still be
     * present and should be used.</p>
     */
    inline GetEntitlementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For paginated results, use NextToken in subsequent calls to GetEntitlements.
     * If the result contains an empty set of entitlements, NextToken might still be
     * present and should be used.</p>
     */
    inline GetEntitlementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For paginated results, use NextToken in subsequent calls to GetEntitlements.
     * If the result contains an empty set of entitlements, NextToken might still be
     * present and should be used.</p>
     */
    inline GetEntitlementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Entitlement> m_entitlements;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
