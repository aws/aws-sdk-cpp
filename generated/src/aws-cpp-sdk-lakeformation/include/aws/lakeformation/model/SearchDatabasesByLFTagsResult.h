﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/TaggedDatabase.h>
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
namespace LakeFormation
{
namespace Model
{
  class SearchDatabasesByLFTagsResult
  {
  public:
    AWS_LAKEFORMATION_API SearchDatabasesByLFTagsResult();
    AWS_LAKEFORMATION_API SearchDatabasesByLFTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API SearchDatabasesByLFTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchDatabasesByLFTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchDatabasesByLFTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchDatabasesByLFTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of databases that meet the LF-tag conditions.</p>
     */
    inline const Aws::Vector<TaggedDatabase>& GetDatabaseList() const{ return m_databaseList; }
    inline void SetDatabaseList(const Aws::Vector<TaggedDatabase>& value) { m_databaseList = value; }
    inline void SetDatabaseList(Aws::Vector<TaggedDatabase>&& value) { m_databaseList = std::move(value); }
    inline SearchDatabasesByLFTagsResult& WithDatabaseList(const Aws::Vector<TaggedDatabase>& value) { SetDatabaseList(value); return *this;}
    inline SearchDatabasesByLFTagsResult& WithDatabaseList(Aws::Vector<TaggedDatabase>&& value) { SetDatabaseList(std::move(value)); return *this;}
    inline SearchDatabasesByLFTagsResult& AddDatabaseList(const TaggedDatabase& value) { m_databaseList.push_back(value); return *this; }
    inline SearchDatabasesByLFTagsResult& AddDatabaseList(TaggedDatabase&& value) { m_databaseList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchDatabasesByLFTagsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchDatabasesByLFTagsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchDatabasesByLFTagsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<TaggedDatabase> m_databaseList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
