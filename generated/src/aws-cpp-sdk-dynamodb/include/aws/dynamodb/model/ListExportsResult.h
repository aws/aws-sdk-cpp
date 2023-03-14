/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ExportSummary.h>
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
namespace DynamoDB
{
namespace Model
{
  class ListExportsResult
  {
  public:
    AWS_DYNAMODB_API ListExportsResult();
    AWS_DYNAMODB_API ListExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>ExportSummary</code> objects.</p>
     */
    inline const Aws::Vector<ExportSummary>& GetExportSummaries() const{ return m_exportSummaries; }

    /**
     * <p>A list of <code>ExportSummary</code> objects.</p>
     */
    inline void SetExportSummaries(const Aws::Vector<ExportSummary>& value) { m_exportSummaries = value; }

    /**
     * <p>A list of <code>ExportSummary</code> objects.</p>
     */
    inline void SetExportSummaries(Aws::Vector<ExportSummary>&& value) { m_exportSummaries = std::move(value); }

    /**
     * <p>A list of <code>ExportSummary</code> objects.</p>
     */
    inline ListExportsResult& WithExportSummaries(const Aws::Vector<ExportSummary>& value) { SetExportSummaries(value); return *this;}

    /**
     * <p>A list of <code>ExportSummary</code> objects.</p>
     */
    inline ListExportsResult& WithExportSummaries(Aws::Vector<ExportSummary>&& value) { SetExportSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ExportSummary</code> objects.</p>
     */
    inline ListExportsResult& AddExportSummaries(const ExportSummary& value) { m_exportSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>ExportSummary</code> objects.</p>
     */
    inline ListExportsResult& AddExportSummaries(ExportSummary&& value) { m_exportSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListExports</code> again, with <code>NextToken</code>
     * set to this value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListExports</code> again, with <code>NextToken</code>
     * set to this value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListExports</code> again, with <code>NextToken</code>
     * set to this value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListExports</code> again, with <code>NextToken</code>
     * set to this value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListExports</code> again, with <code>NextToken</code>
     * set to this value.</p>
     */
    inline ListExportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListExports</code> again, with <code>NextToken</code>
     * set to this value.</p>
     */
    inline ListExportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListExports</code> again, with <code>NextToken</code>
     * set to this value.</p>
     */
    inline ListExportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListExportsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListExportsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListExportsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ExportSummary> m_exportSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
