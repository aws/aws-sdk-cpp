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
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{
  class AWS_ECS_API ListTaskDefinitionFamiliesResult
  {
  public:
    ListTaskDefinitionFamiliesResult();
    ListTaskDefinitionFamiliesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTaskDefinitionFamiliesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of task definition family names that match the
     * <code>ListTaskDefinitionFamilies</code> request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFamilies() const{ return m_families; }

    /**
     * <p>The list of task definition family names that match the
     * <code>ListTaskDefinitionFamilies</code> request.</p>
     */
    inline void SetFamilies(const Aws::Vector<Aws::String>& value) { m_families = value; }

    /**
     * <p>The list of task definition family names that match the
     * <code>ListTaskDefinitionFamilies</code> request.</p>
     */
    inline void SetFamilies(Aws::Vector<Aws::String>&& value) { m_families = std::move(value); }

    /**
     * <p>The list of task definition family names that match the
     * <code>ListTaskDefinitionFamilies</code> request.</p>
     */
    inline ListTaskDefinitionFamiliesResult& WithFamilies(const Aws::Vector<Aws::String>& value) { SetFamilies(value); return *this;}

    /**
     * <p>The list of task definition family names that match the
     * <code>ListTaskDefinitionFamilies</code> request.</p>
     */
    inline ListTaskDefinitionFamiliesResult& WithFamilies(Aws::Vector<Aws::String>&& value) { SetFamilies(std::move(value)); return *this;}

    /**
     * <p>The list of task definition family names that match the
     * <code>ListTaskDefinitionFamilies</code> request.</p>
     */
    inline ListTaskDefinitionFamiliesResult& AddFamilies(const Aws::String& value) { m_families.push_back(value); return *this; }

    /**
     * <p>The list of task definition family names that match the
     * <code>ListTaskDefinitionFamilies</code> request.</p>
     */
    inline ListTaskDefinitionFamiliesResult& AddFamilies(Aws::String&& value) { m_families.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of task definition family names that match the
     * <code>ListTaskDefinitionFamilies</code> request.</p>
     */
    inline ListTaskDefinitionFamiliesResult& AddFamilies(const char* value) { m_families.push_back(value); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitionFamilies</code> request. When the results of a
     * <code>ListTaskDefinitionFamilies</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitionFamilies</code> request. When the results of a
     * <code>ListTaskDefinitionFamilies</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitionFamilies</code> request. When the results of a
     * <code>ListTaskDefinitionFamilies</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitionFamilies</code> request. When the results of a
     * <code>ListTaskDefinitionFamilies</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitionFamilies</code> request. When the results of a
     * <code>ListTaskDefinitionFamilies</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListTaskDefinitionFamiliesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitionFamilies</code> request. When the results of a
     * <code>ListTaskDefinitionFamilies</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListTaskDefinitionFamiliesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitionFamilies</code> request. When the results of a
     * <code>ListTaskDefinitionFamilies</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListTaskDefinitionFamiliesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_families;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
