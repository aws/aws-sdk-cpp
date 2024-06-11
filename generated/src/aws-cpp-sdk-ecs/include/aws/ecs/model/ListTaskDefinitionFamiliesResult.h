﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListTaskDefinitionFamiliesResult
  {
  public:
    AWS_ECS_API ListTaskDefinitionFamiliesResult();
    AWS_ECS_API ListTaskDefinitionFamiliesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListTaskDefinitionFamiliesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of task definition family names that match the
     * <code>ListTaskDefinitionFamilies</code> request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFamilies() const{ return m_families; }
    inline void SetFamilies(const Aws::Vector<Aws::String>& value) { m_families = value; }
    inline void SetFamilies(Aws::Vector<Aws::String>&& value) { m_families = std::move(value); }
    inline ListTaskDefinitionFamiliesResult& WithFamilies(const Aws::Vector<Aws::String>& value) { SetFamilies(value); return *this;}
    inline ListTaskDefinitionFamiliesResult& WithFamilies(Aws::Vector<Aws::String>&& value) { SetFamilies(std::move(value)); return *this;}
    inline ListTaskDefinitionFamiliesResult& AddFamilies(const Aws::String& value) { m_families.push_back(value); return *this; }
    inline ListTaskDefinitionFamiliesResult& AddFamilies(Aws::String&& value) { m_families.push_back(std::move(value)); return *this; }
    inline ListTaskDefinitionFamiliesResult& AddFamilies(const char* value) { m_families.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitionFamilies</code> request. When the results of a
     * <code>ListTaskDefinitionFamilies</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTaskDefinitionFamiliesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTaskDefinitionFamiliesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTaskDefinitionFamiliesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTaskDefinitionFamiliesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTaskDefinitionFamiliesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTaskDefinitionFamiliesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_families;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
