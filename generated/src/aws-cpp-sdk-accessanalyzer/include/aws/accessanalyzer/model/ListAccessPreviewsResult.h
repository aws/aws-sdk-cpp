/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/AccessPreviewSummary.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class ListAccessPreviewsResult
  {
  public:
    AWS_ACCESSANALYZER_API ListAccessPreviewsResult() = default;
    AWS_ACCESSANALYZER_API ListAccessPreviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListAccessPreviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of access previews retrieved for the analyzer.</p>
     */
    inline const Aws::Vector<AccessPreviewSummary>& GetAccessPreviews() const { return m_accessPreviews; }
    template<typename AccessPreviewsT = Aws::Vector<AccessPreviewSummary>>
    void SetAccessPreviews(AccessPreviewsT&& value) { m_accessPreviewsHasBeenSet = true; m_accessPreviews = std::forward<AccessPreviewsT>(value); }
    template<typename AccessPreviewsT = Aws::Vector<AccessPreviewSummary>>
    ListAccessPreviewsResult& WithAccessPreviews(AccessPreviewsT&& value) { SetAccessPreviews(std::forward<AccessPreviewsT>(value)); return *this;}
    template<typename AccessPreviewsT = AccessPreviewSummary>
    ListAccessPreviewsResult& AddAccessPreviews(AccessPreviewsT&& value) { m_accessPreviewsHasBeenSet = true; m_accessPreviews.emplace_back(std::forward<AccessPreviewsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessPreviewsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccessPreviewsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccessPreviewSummary> m_accessPreviews;
    bool m_accessPreviewsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
