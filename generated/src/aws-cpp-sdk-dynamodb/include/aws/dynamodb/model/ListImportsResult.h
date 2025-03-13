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
    AWS_DYNAMODB_API ListImportsResult() = default;
    AWS_DYNAMODB_API ListImportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListImportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of <code>ImportSummary</code> objects. </p>
     */
    inline const Aws::Vector<ImportSummary>& GetImportSummaryList() const { return m_importSummaryList; }
    template<typename ImportSummaryListT = Aws::Vector<ImportSummary>>
    void SetImportSummaryList(ImportSummaryListT&& value) { m_importSummaryListHasBeenSet = true; m_importSummaryList = std::forward<ImportSummaryListT>(value); }
    template<typename ImportSummaryListT = Aws::Vector<ImportSummary>>
    ListImportsResult& WithImportSummaryList(ImportSummaryListT&& value) { SetImportSummaryList(std::forward<ImportSummaryListT>(value)); return *this;}
    template<typename ImportSummaryListT = ImportSummary>
    ListImportsResult& AddImportSummaryList(ImportSummaryListT&& value) { m_importSummaryListHasBeenSet = true; m_importSummaryList.emplace_back(std::forward<ImportSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListImports</code> again, with <code>NextToken</code>
     * set to this value. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImportSummary> m_importSummaryList;
    bool m_importSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
