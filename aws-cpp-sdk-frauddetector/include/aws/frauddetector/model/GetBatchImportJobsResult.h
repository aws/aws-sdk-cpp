/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/BatchImport.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetBatchImportJobsResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetBatchImportJobsResult();
    AWS_FRAUDDETECTOR_API GetBatchImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetBatchImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array containing the details of each batch import job.</p>
     */
    inline const Aws::Vector<BatchImport>& GetBatchImports() const{ return m_batchImports; }

    /**
     * <p>An array containing the details of each batch import job.</p>
     */
    inline void SetBatchImports(const Aws::Vector<BatchImport>& value) { m_batchImports = value; }

    /**
     * <p>An array containing the details of each batch import job.</p>
     */
    inline void SetBatchImports(Aws::Vector<BatchImport>&& value) { m_batchImports = std::move(value); }

    /**
     * <p>An array containing the details of each batch import job.</p>
     */
    inline GetBatchImportJobsResult& WithBatchImports(const Aws::Vector<BatchImport>& value) { SetBatchImports(value); return *this;}

    /**
     * <p>An array containing the details of each batch import job.</p>
     */
    inline GetBatchImportJobsResult& WithBatchImports(Aws::Vector<BatchImport>&& value) { SetBatchImports(std::move(value)); return *this;}

    /**
     * <p>An array containing the details of each batch import job.</p>
     */
    inline GetBatchImportJobsResult& AddBatchImports(const BatchImport& value) { m_batchImports.push_back(value); return *this; }

    /**
     * <p>An array containing the details of each batch import job.</p>
     */
    inline GetBatchImportJobsResult& AddBatchImports(BatchImport&& value) { m_batchImports.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token for the subsequent resquest.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token for the subsequent resquest.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token for the subsequent resquest.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token for the subsequent resquest.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token for the subsequent resquest.</p>
     */
    inline GetBatchImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token for the subsequent resquest.</p>
     */
    inline GetBatchImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token for the subsequent resquest.</p>
     */
    inline GetBatchImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BatchImport> m_batchImports;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
