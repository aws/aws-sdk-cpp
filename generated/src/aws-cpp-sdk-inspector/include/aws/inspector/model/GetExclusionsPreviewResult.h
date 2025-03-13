/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/PreviewStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/ExclusionPreview.h>
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
namespace Inspector
{
namespace Model
{
  class GetExclusionsPreviewResult
  {
  public:
    AWS_INSPECTOR_API GetExclusionsPreviewResult() = default;
    AWS_INSPECTOR_API GetExclusionsPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API GetExclusionsPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the status of the request to generate an exclusions preview.</p>
     */
    inline PreviewStatus GetPreviewStatus() const { return m_previewStatus; }
    inline void SetPreviewStatus(PreviewStatus value) { m_previewStatusHasBeenSet = true; m_previewStatus = value; }
    inline GetExclusionsPreviewResult& WithPreviewStatus(PreviewStatus value) { SetPreviewStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the exclusions included in the preview.</p>
     */
    inline const Aws::Vector<ExclusionPreview>& GetExclusionPreviews() const { return m_exclusionPreviews; }
    template<typename ExclusionPreviewsT = Aws::Vector<ExclusionPreview>>
    void SetExclusionPreviews(ExclusionPreviewsT&& value) { m_exclusionPreviewsHasBeenSet = true; m_exclusionPreviews = std::forward<ExclusionPreviewsT>(value); }
    template<typename ExclusionPreviewsT = Aws::Vector<ExclusionPreview>>
    GetExclusionsPreviewResult& WithExclusionPreviews(ExclusionPreviewsT&& value) { SetExclusionPreviews(std::forward<ExclusionPreviewsT>(value)); return *this;}
    template<typename ExclusionPreviewsT = ExclusionPreview>
    GetExclusionsPreviewResult& AddExclusionPreviews(ExclusionPreviewsT&& value) { m_exclusionPreviewsHasBeenSet = true; m_exclusionPreviews.emplace_back(std::forward<ExclusionPreviewsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When a response is generated, if there is more data to be listed, this
     * parameters is present in the response and contains the value to use for the
     * nextToken parameter in a subsequent pagination request. If there is no more data
     * to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetExclusionsPreviewResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExclusionsPreviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PreviewStatus m_previewStatus{PreviewStatus::NOT_SET};
    bool m_previewStatusHasBeenSet = false;

    Aws::Vector<ExclusionPreview> m_exclusionPreviews;
    bool m_exclusionPreviewsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
