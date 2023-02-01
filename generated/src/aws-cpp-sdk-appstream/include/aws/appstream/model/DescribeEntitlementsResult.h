/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/Entitlement.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeEntitlementsResult
  {
  public:
    AWS_APPSTREAM_API DescribeEntitlementsResult();
    AWS_APPSTREAM_API DescribeEntitlementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeEntitlementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entitlements.</p>
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const{ return m_entitlements; }

    /**
     * <p>The entitlements.</p>
     */
    inline void SetEntitlements(const Aws::Vector<Entitlement>& value) { m_entitlements = value; }

    /**
     * <p>The entitlements.</p>
     */
    inline void SetEntitlements(Aws::Vector<Entitlement>&& value) { m_entitlements = std::move(value); }

    /**
     * <p>The entitlements.</p>
     */
    inline DescribeEntitlementsResult& WithEntitlements(const Aws::Vector<Entitlement>& value) { SetEntitlements(value); return *this;}

    /**
     * <p>The entitlements.</p>
     */
    inline DescribeEntitlementsResult& WithEntitlements(Aws::Vector<Entitlement>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * <p>The entitlements.</p>
     */
    inline DescribeEntitlementsResult& AddEntitlements(const Entitlement& value) { m_entitlements.push_back(value); return *this; }

    /**
     * <p>The entitlements.</p>
     */
    inline DescribeEntitlementsResult& AddEntitlements(Entitlement&& value) { m_entitlements.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeEntitlementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeEntitlementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeEntitlementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Entitlement> m_entitlements;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
