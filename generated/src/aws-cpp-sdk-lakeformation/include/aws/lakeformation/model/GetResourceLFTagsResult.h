/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/LFTagPair.h>
#include <aws/lakeformation/model/ColumnLFTag.h>
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
  class GetResourceLFTagsResult
  {
  public:
    AWS_LAKEFORMATION_API GetResourceLFTagsResult();
    AWS_LAKEFORMATION_API GetResourceLFTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetResourceLFTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of LF-tags applied to a database resource.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTagOnDatabase() const{ return m_lFTagOnDatabase; }

    /**
     * <p>A list of LF-tags applied to a database resource.</p>
     */
    inline void SetLFTagOnDatabase(const Aws::Vector<LFTagPair>& value) { m_lFTagOnDatabase = value; }

    /**
     * <p>A list of LF-tags applied to a database resource.</p>
     */
    inline void SetLFTagOnDatabase(Aws::Vector<LFTagPair>&& value) { m_lFTagOnDatabase = std::move(value); }

    /**
     * <p>A list of LF-tags applied to a database resource.</p>
     */
    inline GetResourceLFTagsResult& WithLFTagOnDatabase(const Aws::Vector<LFTagPair>& value) { SetLFTagOnDatabase(value); return *this;}

    /**
     * <p>A list of LF-tags applied to a database resource.</p>
     */
    inline GetResourceLFTagsResult& WithLFTagOnDatabase(Aws::Vector<LFTagPair>&& value) { SetLFTagOnDatabase(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tags applied to a database resource.</p>
     */
    inline GetResourceLFTagsResult& AddLFTagOnDatabase(const LFTagPair& value) { m_lFTagOnDatabase.push_back(value); return *this; }

    /**
     * <p>A list of LF-tags applied to a database resource.</p>
     */
    inline GetResourceLFTagsResult& AddLFTagOnDatabase(LFTagPair&& value) { m_lFTagOnDatabase.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of LF-tags applied to a table resource.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTagsOnTable() const{ return m_lFTagsOnTable; }

    /**
     * <p>A list of LF-tags applied to a table resource.</p>
     */
    inline void SetLFTagsOnTable(const Aws::Vector<LFTagPair>& value) { m_lFTagsOnTable = value; }

    /**
     * <p>A list of LF-tags applied to a table resource.</p>
     */
    inline void SetLFTagsOnTable(Aws::Vector<LFTagPair>&& value) { m_lFTagsOnTable = std::move(value); }

    /**
     * <p>A list of LF-tags applied to a table resource.</p>
     */
    inline GetResourceLFTagsResult& WithLFTagsOnTable(const Aws::Vector<LFTagPair>& value) { SetLFTagsOnTable(value); return *this;}

    /**
     * <p>A list of LF-tags applied to a table resource.</p>
     */
    inline GetResourceLFTagsResult& WithLFTagsOnTable(Aws::Vector<LFTagPair>&& value) { SetLFTagsOnTable(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tags applied to a table resource.</p>
     */
    inline GetResourceLFTagsResult& AddLFTagsOnTable(const LFTagPair& value) { m_lFTagsOnTable.push_back(value); return *this; }

    /**
     * <p>A list of LF-tags applied to a table resource.</p>
     */
    inline GetResourceLFTagsResult& AddLFTagsOnTable(LFTagPair&& value) { m_lFTagsOnTable.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of LF-tags applied to a column resource.</p>
     */
    inline const Aws::Vector<ColumnLFTag>& GetLFTagsOnColumns() const{ return m_lFTagsOnColumns; }

    /**
     * <p>A list of LF-tags applied to a column resource.</p>
     */
    inline void SetLFTagsOnColumns(const Aws::Vector<ColumnLFTag>& value) { m_lFTagsOnColumns = value; }

    /**
     * <p>A list of LF-tags applied to a column resource.</p>
     */
    inline void SetLFTagsOnColumns(Aws::Vector<ColumnLFTag>&& value) { m_lFTagsOnColumns = std::move(value); }

    /**
     * <p>A list of LF-tags applied to a column resource.</p>
     */
    inline GetResourceLFTagsResult& WithLFTagsOnColumns(const Aws::Vector<ColumnLFTag>& value) { SetLFTagsOnColumns(value); return *this;}

    /**
     * <p>A list of LF-tags applied to a column resource.</p>
     */
    inline GetResourceLFTagsResult& WithLFTagsOnColumns(Aws::Vector<ColumnLFTag>&& value) { SetLFTagsOnColumns(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tags applied to a column resource.</p>
     */
    inline GetResourceLFTagsResult& AddLFTagsOnColumns(const ColumnLFTag& value) { m_lFTagsOnColumns.push_back(value); return *this; }

    /**
     * <p>A list of LF-tags applied to a column resource.</p>
     */
    inline GetResourceLFTagsResult& AddLFTagsOnColumns(ColumnLFTag&& value) { m_lFTagsOnColumns.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LFTagPair> m_lFTagOnDatabase;

    Aws::Vector<LFTagPair> m_lFTagsOnTable;

    Aws::Vector<ColumnLFTag> m_lFTagsOnColumns;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
