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
    AWS_FRAUDDETECTOR_API GetBatchImportJobsResult() = default;
    AWS_FRAUDDETECTOR_API GetBatchImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetBatchImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing the details of each batch import job.</p>
     */
    inline const Aws::Vector<BatchImport>& GetBatchImports() const { return m_batchImports; }
    template<typename BatchImportsT = Aws::Vector<BatchImport>>
    void SetBatchImports(BatchImportsT&& value) { m_batchImportsHasBeenSet = true; m_batchImports = std::forward<BatchImportsT>(value); }
    template<typename BatchImportsT = Aws::Vector<BatchImport>>
    GetBatchImportJobsResult& WithBatchImports(BatchImportsT&& value) { SetBatchImports(std::forward<BatchImportsT>(value)); return *this;}
    template<typename BatchImportsT = BatchImport>
    GetBatchImportJobsResult& AddBatchImports(BatchImportsT&& value) { m_batchImportsHasBeenSet = true; m_batchImports.emplace_back(std::forward<BatchImportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token for the subsequent resquest.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBatchImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBatchImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchImport> m_batchImports;
    bool m_batchImportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
