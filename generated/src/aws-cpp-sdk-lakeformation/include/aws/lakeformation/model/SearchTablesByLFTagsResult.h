/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/TaggedTable.h>
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
  class SearchTablesByLFTagsResult
  {
  public:
    AWS_LAKEFORMATION_API SearchTablesByLFTagsResult();
    AWS_LAKEFORMATION_API SearchTablesByLFTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API SearchTablesByLFTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A continuation token, present if the current list segment is not the last. On
     * the first run, if you include a not null (a value) token you can get empty
     * pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, present if the current list segment is not the last. On
     * the first run, if you include a not null (a value) token you can get empty
     * pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, present if the current list segment is not the last. On
     * the first run, if you include a not null (a value) token you can get empty
     * pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, present if the current list segment is not the last. On
     * the first run, if you include a not null (a value) token you can get empty
     * pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, present if the current list segment is not the last. On
     * the first run, if you include a not null (a value) token you can get empty
     * pages.</p>
     */
    inline SearchTablesByLFTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the last. On
     * the first run, if you include a not null (a value) token you can get empty
     * pages.</p>
     */
    inline SearchTablesByLFTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the last. On
     * the first run, if you include a not null (a value) token you can get empty
     * pages.</p>
     */
    inline SearchTablesByLFTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of tables that meet the LF-tag conditions.</p>
     */
    inline const Aws::Vector<TaggedTable>& GetTableList() const{ return m_tableList; }

    /**
     * <p>A list of tables that meet the LF-tag conditions.</p>
     */
    inline void SetTableList(const Aws::Vector<TaggedTable>& value) { m_tableList = value; }

    /**
     * <p>A list of tables that meet the LF-tag conditions.</p>
     */
    inline void SetTableList(Aws::Vector<TaggedTable>&& value) { m_tableList = std::move(value); }

    /**
     * <p>A list of tables that meet the LF-tag conditions.</p>
     */
    inline SearchTablesByLFTagsResult& WithTableList(const Aws::Vector<TaggedTable>& value) { SetTableList(value); return *this;}

    /**
     * <p>A list of tables that meet the LF-tag conditions.</p>
     */
    inline SearchTablesByLFTagsResult& WithTableList(Aws::Vector<TaggedTable>&& value) { SetTableList(std::move(value)); return *this;}

    /**
     * <p>A list of tables that meet the LF-tag conditions.</p>
     */
    inline SearchTablesByLFTagsResult& AddTableList(const TaggedTable& value) { m_tableList.push_back(value); return *this; }

    /**
     * <p>A list of tables that meet the LF-tag conditions.</p>
     */
    inline SearchTablesByLFTagsResult& AddTableList(TaggedTable&& value) { m_tableList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchTablesByLFTagsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchTablesByLFTagsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchTablesByLFTagsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<TaggedTable> m_tableList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
