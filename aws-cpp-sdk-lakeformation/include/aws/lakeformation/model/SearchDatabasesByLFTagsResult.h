/**
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


    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline SearchDatabasesByLFTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline SearchDatabasesByLFTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline SearchDatabasesByLFTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of databases that meet the LF-tag conditions.</p>
     */
    inline const Aws::Vector<TaggedDatabase>& GetDatabaseList() const{ return m_databaseList; }

    /**
     * <p>A list of databases that meet the LF-tag conditions.</p>
     */
    inline void SetDatabaseList(const Aws::Vector<TaggedDatabase>& value) { m_databaseList = value; }

    /**
     * <p>A list of databases that meet the LF-tag conditions.</p>
     */
    inline void SetDatabaseList(Aws::Vector<TaggedDatabase>&& value) { m_databaseList = std::move(value); }

    /**
     * <p>A list of databases that meet the LF-tag conditions.</p>
     */
    inline SearchDatabasesByLFTagsResult& WithDatabaseList(const Aws::Vector<TaggedDatabase>& value) { SetDatabaseList(value); return *this;}

    /**
     * <p>A list of databases that meet the LF-tag conditions.</p>
     */
    inline SearchDatabasesByLFTagsResult& WithDatabaseList(Aws::Vector<TaggedDatabase>&& value) { SetDatabaseList(std::move(value)); return *this;}

    /**
     * <p>A list of databases that meet the LF-tag conditions.</p>
     */
    inline SearchDatabasesByLFTagsResult& AddDatabaseList(const TaggedDatabase& value) { m_databaseList.push_back(value); return *this; }

    /**
     * <p>A list of databases that meet the LF-tag conditions.</p>
     */
    inline SearchDatabasesByLFTagsResult& AddDatabaseList(TaggedDatabase&& value) { m_databaseList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TaggedDatabase> m_databaseList;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
