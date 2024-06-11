﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream
{
namespace Model
{
  class ListAssociatedStacksResult
  {
  public:
    AWS_APPSTREAM_API ListAssociatedStacksResult();
    AWS_APPSTREAM_API ListAssociatedStacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API ListAssociatedStacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the stack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_names = value; }
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_names = std::move(value); }
    inline ListAssociatedStacksResult& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}
    inline ListAssociatedStacksResult& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}
    inline ListAssociatedStacksResult& AddNames(const Aws::String& value) { m_names.push_back(value); return *this; }
    inline ListAssociatedStacksResult& AddNames(Aws::String&& value) { m_names.push_back(std::move(value)); return *this; }
    inline ListAssociatedStacksResult& AddNames(const char* value) { m_names.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssociatedStacksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssociatedStacksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssociatedStacksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssociatedStacksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssociatedStacksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssociatedStacksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_names;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
