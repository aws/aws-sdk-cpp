﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{
  class ListFindingsResult
  {
  public:
    AWS_MACIE2_API ListFindingsResult();
    AWS_MACIE2_API ListFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of strings, where each string is the unique identifier for a finding
     * that matches the filter criteria specified in the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const{ return m_findingIds; }
    inline void SetFindingIds(const Aws::Vector<Aws::String>& value) { m_findingIds = value; }
    inline void SetFindingIds(Aws::Vector<Aws::String>&& value) { m_findingIds = std::move(value); }
    inline ListFindingsResult& WithFindingIds(const Aws::Vector<Aws::String>& value) { SetFindingIds(value); return *this;}
    inline ListFindingsResult& WithFindingIds(Aws::Vector<Aws::String>&& value) { SetFindingIds(std::move(value)); return *this;}
    inline ListFindingsResult& AddFindingIds(const Aws::String& value) { m_findingIds.push_back(value); return *this; }
    inline ListFindingsResult& AddFindingIds(Aws::String&& value) { m_findingIds.push_back(std::move(value)); return *this; }
    inline ListFindingsResult& AddFindingIds(const char* value) { m_findingIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFindingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFindingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFindingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFindingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFindingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFindingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_findingIds;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
