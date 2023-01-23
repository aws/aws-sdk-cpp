/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EKS
{
namespace Model
{
  class ListAddonsResult
  {
  public:
    AWS_EKS_API ListAddonsResult();
    AWS_EKS_API ListAddonsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListAddonsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of available add-ons.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddons() const{ return m_addons; }

    /**
     * <p>A list of available add-ons.</p>
     */
    inline void SetAddons(const Aws::Vector<Aws::String>& value) { m_addons = value; }

    /**
     * <p>A list of available add-ons.</p>
     */
    inline void SetAddons(Aws::Vector<Aws::String>&& value) { m_addons = std::move(value); }

    /**
     * <p>A list of available add-ons.</p>
     */
    inline ListAddonsResult& WithAddons(const Aws::Vector<Aws::String>& value) { SetAddons(value); return *this;}

    /**
     * <p>A list of available add-ons.</p>
     */
    inline ListAddonsResult& WithAddons(Aws::Vector<Aws::String>&& value) { SetAddons(std::move(value)); return *this;}

    /**
     * <p>A list of available add-ons.</p>
     */
    inline ListAddonsResult& AddAddons(const Aws::String& value) { m_addons.push_back(value); return *this; }

    /**
     * <p>A list of available add-ons.</p>
     */
    inline ListAddonsResult& AddAddons(Aws::String&& value) { m_addons.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of available add-ons.</p>
     */
    inline ListAddonsResult& AddAddons(const char* value) { m_addons.push_back(value); return *this; }


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAddonsResponse</code> where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAddonsResponse</code> where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAddonsResponse</code> where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAddonsResponse</code> where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAddonsResponse</code> where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListAddonsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAddonsResponse</code> where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListAddonsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAddonsResponse</code> where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     *  <p>This token should be treated as an opaque identifier that is used only
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListAddonsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_addons;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
