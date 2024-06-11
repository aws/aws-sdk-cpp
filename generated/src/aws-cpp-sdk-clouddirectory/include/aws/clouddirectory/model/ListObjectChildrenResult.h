﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudDirectory
{
namespace Model
{
  class ListObjectChildrenResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListObjectChildrenResult();
    AWS_CLOUDDIRECTORY_API ListObjectChildrenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListObjectChildrenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChildren() const{ return m_children; }
    inline void SetChildren(const Aws::Map<Aws::String, Aws::String>& value) { m_children = value; }
    inline void SetChildren(Aws::Map<Aws::String, Aws::String>&& value) { m_children = std::move(value); }
    inline ListObjectChildrenResult& WithChildren(const Aws::Map<Aws::String, Aws::String>& value) { SetChildren(value); return *this;}
    inline ListObjectChildrenResult& WithChildren(Aws::Map<Aws::String, Aws::String>&& value) { SetChildren(std::move(value)); return *this;}
    inline ListObjectChildrenResult& AddChildren(const Aws::String& key, const Aws::String& value) { m_children.emplace(key, value); return *this; }
    inline ListObjectChildrenResult& AddChildren(Aws::String&& key, const Aws::String& value) { m_children.emplace(std::move(key), value); return *this; }
    inline ListObjectChildrenResult& AddChildren(const Aws::String& key, Aws::String&& value) { m_children.emplace(key, std::move(value)); return *this; }
    inline ListObjectChildrenResult& AddChildren(Aws::String&& key, Aws::String&& value) { m_children.emplace(std::move(key), std::move(value)); return *this; }
    inline ListObjectChildrenResult& AddChildren(const char* key, Aws::String&& value) { m_children.emplace(key, std::move(value)); return *this; }
    inline ListObjectChildrenResult& AddChildren(Aws::String&& key, const char* value) { m_children.emplace(std::move(key), value); return *this; }
    inline ListObjectChildrenResult& AddChildren(const char* key, const char* value) { m_children.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListObjectChildrenResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListObjectChildrenResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListObjectChildrenResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListObjectChildrenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListObjectChildrenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListObjectChildrenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_children;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
