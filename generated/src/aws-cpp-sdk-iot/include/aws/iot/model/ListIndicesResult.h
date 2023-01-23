/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class ListIndicesResult
  {
  public:
    AWS_IOT_API ListIndicesResult();
    AWS_IOT_API ListIndicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListIndicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The index names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIndexNames() const{ return m_indexNames; }

    /**
     * <p>The index names.</p>
     */
    inline void SetIndexNames(const Aws::Vector<Aws::String>& value) { m_indexNames = value; }

    /**
     * <p>The index names.</p>
     */
    inline void SetIndexNames(Aws::Vector<Aws::String>&& value) { m_indexNames = std::move(value); }

    /**
     * <p>The index names.</p>
     */
    inline ListIndicesResult& WithIndexNames(const Aws::Vector<Aws::String>& value) { SetIndexNames(value); return *this;}

    /**
     * <p>The index names.</p>
     */
    inline ListIndicesResult& WithIndexNames(Aws::Vector<Aws::String>&& value) { SetIndexNames(std::move(value)); return *this;}

    /**
     * <p>The index names.</p>
     */
    inline ListIndicesResult& AddIndexNames(const Aws::String& value) { m_indexNames.push_back(value); return *this; }

    /**
     * <p>The index names.</p>
     */
    inline ListIndicesResult& AddIndexNames(Aws::String&& value) { m_indexNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The index names.</p>
     */
    inline ListIndicesResult& AddIndexNames(const char* value) { m_indexNames.push_back(value); return *this; }


    /**
     * <p>The token used to get the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to get the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to get the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to get the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to get the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline ListIndicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to get the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline ListIndicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to get the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline ListIndicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_indexNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
