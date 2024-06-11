﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/EngineVersionsSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListEngineVersionsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListEngineVersionsResult();
    AWS_MAINFRAMEMODERNIZATION_API ListEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the engine versions.</p>
     */
    inline const Aws::Vector<EngineVersionsSummary>& GetEngineVersions() const{ return m_engineVersions; }
    inline void SetEngineVersions(const Aws::Vector<EngineVersionsSummary>& value) { m_engineVersions = value; }
    inline void SetEngineVersions(Aws::Vector<EngineVersionsSummary>&& value) { m_engineVersions = std::move(value); }
    inline ListEngineVersionsResult& WithEngineVersions(const Aws::Vector<EngineVersionsSummary>& value) { SetEngineVersions(value); return *this;}
    inline ListEngineVersionsResult& WithEngineVersions(Aws::Vector<EngineVersionsSummary>&& value) { SetEngineVersions(std::move(value)); return *this;}
    inline ListEngineVersionsResult& AddEngineVersions(const EngineVersionsSummary& value) { m_engineVersions.push_back(value); return *this; }
    inline ListEngineVersionsResult& AddEngineVersions(EngineVersionsSummary&& value) { m_engineVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEngineVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngineVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngineVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEngineVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEngineVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEngineVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EngineVersionsSummary> m_engineVersions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
