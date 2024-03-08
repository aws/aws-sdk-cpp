/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeBuild
{
namespace Model
{
  class ListFleetsResult
  {
  public:
    AWS_CODEBUILD_API ListFleetsResult();
    AWS_CODEBUILD_API ListFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>nextToken</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>nextToken</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>nextToken</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>nextToken</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>nextToken</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline ListFleetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>nextToken</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline ListFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>nextToken</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline ListFleetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of compute fleet names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleets() const{ return m_fleets; }

    /**
     * <p>The list of compute fleet names.</p>
     */
    inline void SetFleets(const Aws::Vector<Aws::String>& value) { m_fleets = value; }

    /**
     * <p>The list of compute fleet names.</p>
     */
    inline void SetFleets(Aws::Vector<Aws::String>&& value) { m_fleets = std::move(value); }

    /**
     * <p>The list of compute fleet names.</p>
     */
    inline ListFleetsResult& WithFleets(const Aws::Vector<Aws::String>& value) { SetFleets(value); return *this;}

    /**
     * <p>The list of compute fleet names.</p>
     */
    inline ListFleetsResult& WithFleets(Aws::Vector<Aws::String>&& value) { SetFleets(std::move(value)); return *this;}

    /**
     * <p>The list of compute fleet names.</p>
     */
    inline ListFleetsResult& AddFleets(const Aws::String& value) { m_fleets.push_back(value); return *this; }

    /**
     * <p>The list of compute fleet names.</p>
     */
    inline ListFleetsResult& AddFleets(Aws::String&& value) { m_fleets.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of compute fleet names.</p>
     */
    inline ListFleetsResult& AddFleets(const char* value) { m_fleets.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFleetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFleetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFleetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_fleets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
