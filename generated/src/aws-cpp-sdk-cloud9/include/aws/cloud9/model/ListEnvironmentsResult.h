﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
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
namespace Cloud9
{
namespace Model
{
  class ListEnvironmentsResult
  {
  public:
    AWS_CLOUD9_API ListEnvironmentsResult();
    AWS_CLOUD9_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUD9_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more than 25 items in the list, only the first 25 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of environment identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironmentIds() const{ return m_environmentIds; }
    inline void SetEnvironmentIds(const Aws::Vector<Aws::String>& value) { m_environmentIds = value; }
    inline void SetEnvironmentIds(Aws::Vector<Aws::String>&& value) { m_environmentIds = std::move(value); }
    inline ListEnvironmentsResult& WithEnvironmentIds(const Aws::Vector<Aws::String>& value) { SetEnvironmentIds(value); return *this;}
    inline ListEnvironmentsResult& WithEnvironmentIds(Aws::Vector<Aws::String>&& value) { SetEnvironmentIds(std::move(value)); return *this;}
    inline ListEnvironmentsResult& AddEnvironmentIds(const Aws::String& value) { m_environmentIds.push_back(value); return *this; }
    inline ListEnvironmentsResult& AddEnvironmentIds(Aws::String&& value) { m_environmentIds.push_back(std::move(value)); return *this; }
    inline ListEnvironmentsResult& AddEnvironmentIds(const char* value) { m_environmentIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEnvironmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEnvironmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEnvironmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_environmentIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
