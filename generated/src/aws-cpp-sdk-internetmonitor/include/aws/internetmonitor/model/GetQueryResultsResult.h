/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/model/QueryField.h>
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
namespace InternetMonitor
{
namespace Model
{
  class GetQueryResultsResult
  {
  public:
    AWS_INTERNETMONITOR_API GetQueryResultsResult();
    AWS_INTERNETMONITOR_API GetQueryResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API GetQueryResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The fields that the query returns data for. Fields are name-data type pairs,
     * such as <code>availability_score</code>-<code>float</code>.</p>
     */
    inline const Aws::Vector<QueryField>& GetFields() const{ return m_fields; }

    /**
     * <p>The fields that the query returns data for. Fields are name-data type pairs,
     * such as <code>availability_score</code>-<code>float</code>.</p>
     */
    inline void SetFields(const Aws::Vector<QueryField>& value) { m_fields = value; }

    /**
     * <p>The fields that the query returns data for. Fields are name-data type pairs,
     * such as <code>availability_score</code>-<code>float</code>.</p>
     */
    inline void SetFields(Aws::Vector<QueryField>&& value) { m_fields = std::move(value); }

    /**
     * <p>The fields that the query returns data for. Fields are name-data type pairs,
     * such as <code>availability_score</code>-<code>float</code>.</p>
     */
    inline GetQueryResultsResult& WithFields(const Aws::Vector<QueryField>& value) { SetFields(value); return *this;}

    /**
     * <p>The fields that the query returns data for. Fields are name-data type pairs,
     * such as <code>availability_score</code>-<code>float</code>.</p>
     */
    inline GetQueryResultsResult& WithFields(Aws::Vector<QueryField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>The fields that the query returns data for. Fields are name-data type pairs,
     * such as <code>availability_score</code>-<code>float</code>.</p>
     */
    inline GetQueryResultsResult& AddFields(const QueryField& value) { m_fields.push_back(value); return *this; }

    /**
     * <p>The fields that the query returns data for. Fields are name-data type pairs,
     * such as <code>availability_score</code>-<code>float</code>.</p>
     */
    inline GetQueryResultsResult& AddFields(QueryField&& value) { m_fields.push_back(std::move(value)); return *this; }


    /**
     * <p>The data results that the query returns. Data is returned in arrays, aligned
     * with the <code>Fields</code> for the query, which creates a repository of Amazon
     * CloudWatch Internet Monitor information for your application. Then, you can
     * filter the information in the repository by using <code>FilterParameters</code>
     * that you define.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetData() const{ return m_data; }

    /**
     * <p>The data results that the query returns. Data is returned in arrays, aligned
     * with the <code>Fields</code> for the query, which creates a repository of Amazon
     * CloudWatch Internet Monitor information for your application. Then, you can
     * filter the information in the repository by using <code>FilterParameters</code>
     * that you define.</p>
     */
    inline void SetData(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_data = value; }

    /**
     * <p>The data results that the query returns. Data is returned in arrays, aligned
     * with the <code>Fields</code> for the query, which creates a repository of Amazon
     * CloudWatch Internet Monitor information for your application. Then, you can
     * filter the information in the repository by using <code>FilterParameters</code>
     * that you define.</p>
     */
    inline void SetData(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_data = std::move(value); }

    /**
     * <p>The data results that the query returns. Data is returned in arrays, aligned
     * with the <code>Fields</code> for the query, which creates a repository of Amazon
     * CloudWatch Internet Monitor information for your application. Then, you can
     * filter the information in the repository by using <code>FilterParameters</code>
     * that you define.</p>
     */
    inline GetQueryResultsResult& WithData(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetData(value); return *this;}

    /**
     * <p>The data results that the query returns. Data is returned in arrays, aligned
     * with the <code>Fields</code> for the query, which creates a repository of Amazon
     * CloudWatch Internet Monitor information for your application. Then, you can
     * filter the information in the repository by using <code>FilterParameters</code>
     * that you define.</p>
     */
    inline GetQueryResultsResult& WithData(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The data results that the query returns. Data is returned in arrays, aligned
     * with the <code>Fields</code> for the query, which creates a repository of Amazon
     * CloudWatch Internet Monitor information for your application. Then, you can
     * filter the information in the repository by using <code>FilterParameters</code>
     * that you define.</p>
     */
    inline GetQueryResultsResult& AddData(const Aws::Vector<Aws::String>& value) { m_data.push_back(value); return *this; }

    /**
     * <p>The data results that the query returns. Data is returned in arrays, aligned
     * with the <code>Fields</code> for the query, which creates a repository of Amazon
     * CloudWatch Internet Monitor information for your application. Then, you can
     * filter the information in the repository by using <code>FilterParameters</code>
     * that you define.</p>
     */
    inline GetQueryResultsResult& AddData(Aws::Vector<Aws::String>&& value) { m_data.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline GetQueryResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline GetQueryResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline GetQueryResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetQueryResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetQueryResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetQueryResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<QueryField> m_fields;

    Aws::Vector<Aws::Vector<Aws::String>> m_data;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
