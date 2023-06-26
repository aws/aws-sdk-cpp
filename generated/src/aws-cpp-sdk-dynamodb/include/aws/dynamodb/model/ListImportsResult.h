/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ImportSummary.h>
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
  class ListImportsResult
  {
  public:
    AWS_DYNAMODB_API ListImportsResult();
    AWS_DYNAMODB_API ListImportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListImportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of <code>ImportSummary</code> objects. </p>
     */
    inline const Aws::Vector<ImportSummary>& GetImportSummaryList() const{ return m_importSummaryList; }

    /**
     * <p> A list of <code>ImportSummary</code> objects. </p>
     */
    inline void SetImportSummaryList(const Aws::Vector<ImportSummary>& value) { m_importSummaryList = value; }

    /**
     * <p> A list of <code>ImportSummary</code> objects. </p>
     */
    inline void SetImportSummaryList(Aws::Vector<ImportSummary>&& value) { m_importSummaryList = std::move(value); }

    /**
     * <p> A list of <code>ImportSummary</code> objects. </p>
     */
    inline ListImportsResult& WithImportSummaryList(const Aws::Vector<ImportSummary>& value) { SetImportSummaryList(value); return *this;}

    /**
     * <p> A list of <code>ImportSummary</code> objects. </p>
     */
    inline ListImportsResult& WithImportSummaryList(Aws::Vector<ImportSummary>&& value) { SetImportSummaryList(std::move(value)); return *this;}

    /**
     * <p> A list of <code>ImportSummary</code> objects. </p>
     */
    inline ListImportsResult& AddImportSummaryList(const ImportSummary& value) { m_importSummaryList.push_back(value); return *this; }

    /**
     * <p> A list of <code>ImportSummary</code> objects. </p>
     */
    inline ListImportsResult& AddImportSummaryList(ImportSummary&& value) { m_importSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p> If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListImports</code> again, with <code>NextToken</code>
     * set to this value. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListImports</code> again, with <code>NextToken</code>
     * set to this value. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListImports</code> again, with <code>NextToken</code>
     * set to this value. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListImports</code> again, with <code>NextToken</code>
     * set to this value. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListImports</code> again, with <code>NextToken</code>
     * set to this value. </p>
     */
    inline ListImportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListImports</code> again, with <code>NextToken</code>
     * set to this value. </p>
     */
    inline ListImportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListImports</code> again, with <code>NextToken</code>
     * set to this value. </p>
     */
    inline ListImportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListImportsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListImportsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListImportsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ImportSummary> m_importSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
