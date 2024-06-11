﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/PathToObjectIdentifiers.h>
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
  class ListObjectParentPathsResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListObjectParentPathsResult();
    AWS_CLOUDDIRECTORY_API ListObjectParentPathsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListObjectParentPathsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the path to the <code>ObjectIdentifiers</code> that are associated
     * with the directory.</p>
     */
    inline const Aws::Vector<PathToObjectIdentifiers>& GetPathToObjectIdentifiersList() const{ return m_pathToObjectIdentifiersList; }
    inline void SetPathToObjectIdentifiersList(const Aws::Vector<PathToObjectIdentifiers>& value) { m_pathToObjectIdentifiersList = value; }
    inline void SetPathToObjectIdentifiersList(Aws::Vector<PathToObjectIdentifiers>&& value) { m_pathToObjectIdentifiersList = std::move(value); }
    inline ListObjectParentPathsResult& WithPathToObjectIdentifiersList(const Aws::Vector<PathToObjectIdentifiers>& value) { SetPathToObjectIdentifiersList(value); return *this;}
    inline ListObjectParentPathsResult& WithPathToObjectIdentifiersList(Aws::Vector<PathToObjectIdentifiers>&& value) { SetPathToObjectIdentifiersList(std::move(value)); return *this;}
    inline ListObjectParentPathsResult& AddPathToObjectIdentifiersList(const PathToObjectIdentifiers& value) { m_pathToObjectIdentifiersList.push_back(value); return *this; }
    inline ListObjectParentPathsResult& AddPathToObjectIdentifiersList(PathToObjectIdentifiers&& value) { m_pathToObjectIdentifiersList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListObjectParentPathsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListObjectParentPathsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListObjectParentPathsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListObjectParentPathsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListObjectParentPathsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListObjectParentPathsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PathToObjectIdentifiers> m_pathToObjectIdentifiersList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
