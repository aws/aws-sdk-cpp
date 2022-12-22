/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-data/model/ColumnMetadata.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{
  class DescribeTableResult
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API DescribeTableResult();
    AWS_REDSHIFTDATAAPISERVICE_API DescribeTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API DescribeTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of columns in the table. </p>
     */
    inline const Aws::Vector<ColumnMetadata>& GetColumnList() const{ return m_columnList; }

    /**
     * <p>A list of columns in the table. </p>
     */
    inline void SetColumnList(const Aws::Vector<ColumnMetadata>& value) { m_columnList = value; }

    /**
     * <p>A list of columns in the table. </p>
     */
    inline void SetColumnList(Aws::Vector<ColumnMetadata>&& value) { m_columnList = std::move(value); }

    /**
     * <p>A list of columns in the table. </p>
     */
    inline DescribeTableResult& WithColumnList(const Aws::Vector<ColumnMetadata>& value) { SetColumnList(value); return *this;}

    /**
     * <p>A list of columns in the table. </p>
     */
    inline DescribeTableResult& WithColumnList(Aws::Vector<ColumnMetadata>&& value) { SetColumnList(std::move(value)); return *this;}

    /**
     * <p>A list of columns in the table. </p>
     */
    inline DescribeTableResult& AddColumnList(const ColumnMetadata& value) { m_columnList.push_back(value); return *this; }

    /**
     * <p>A list of columns in the table. </p>
     */
    inline DescribeTableResult& AddColumnList(ColumnMetadata&& value) { m_columnList.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline DescribeTableResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline DescribeTableResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline DescribeTableResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The table name. </p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The table name. </p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }

    /**
     * <p>The table name. </p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }

    /**
     * <p>The table name. </p>
     */
    inline void SetTableName(const char* value) { m_tableName.assign(value); }

    /**
     * <p>The table name. </p>
     */
    inline DescribeTableResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The table name. </p>
     */
    inline DescribeTableResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The table name. </p>
     */
    inline DescribeTableResult& WithTableName(const char* value) { SetTableName(value); return *this;}

  private:

    Aws::Vector<ColumnMetadata> m_columnList;

    Aws::String m_nextToken;

    Aws::String m_tableName;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
