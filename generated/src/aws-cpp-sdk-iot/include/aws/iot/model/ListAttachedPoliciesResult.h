/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Policy.h>
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
namespace IoT
{
namespace Model
{
  class ListAttachedPoliciesResult
  {
  public:
    AWS_IOT_API ListAttachedPoliciesResult();
    AWS_IOT_API ListAttachedPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAttachedPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The policies.</p>
     */
    inline const Aws::Vector<Policy>& GetPolicies() const{ return m_policies; }

    /**
     * <p>The policies.</p>
     */
    inline void SetPolicies(const Aws::Vector<Policy>& value) { m_policies = value; }

    /**
     * <p>The policies.</p>
     */
    inline void SetPolicies(Aws::Vector<Policy>&& value) { m_policies = std::move(value); }

    /**
     * <p>The policies.</p>
     */
    inline ListAttachedPoliciesResult& WithPolicies(const Aws::Vector<Policy>& value) { SetPolicies(value); return *this;}

    /**
     * <p>The policies.</p>
     */
    inline ListAttachedPoliciesResult& WithPolicies(Aws::Vector<Policy>&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>The policies.</p>
     */
    inline ListAttachedPoliciesResult& AddPolicies(const Policy& value) { m_policies.push_back(value); return *this; }

    /**
     * <p>The policies.</p>
     */
    inline ListAttachedPoliciesResult& AddPolicies(Policy&& value) { m_policies.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results, or ``null`` if there are no
     * more results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The token to retrieve the next set of results, or ``null`` if there are no
     * more results.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The token to retrieve the next set of results, or ``null`` if there are no
     * more results.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results, or ``null`` if there are no
     * more results.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The token to retrieve the next set of results, or ``null`` if there are no
     * more results.</p>
     */
    inline ListAttachedPoliciesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or ``null`` if there are no
     * more results.</p>
     */
    inline ListAttachedPoliciesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or ``null`` if there are no
     * more results.</p>
     */
    inline ListAttachedPoliciesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<Policy> m_policies;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
