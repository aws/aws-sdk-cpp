/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/AccessPreview.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetAccessPreviewResult
  {
  public:
    AWS_ACCESSANALYZER_API GetAccessPreviewResult() = default;
    AWS_ACCESSANALYZER_API GetAccessPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetAccessPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about the access preview.</p>
     */
    inline const AccessPreview& GetAccessPreview() const { return m_accessPreview; }
    template<typename AccessPreviewT = AccessPreview>
    void SetAccessPreview(AccessPreviewT&& value) { m_accessPreviewHasBeenSet = true; m_accessPreview = std::forward<AccessPreviewT>(value); }
    template<typename AccessPreviewT = AccessPreview>
    GetAccessPreviewResult& WithAccessPreview(AccessPreviewT&& value) { SetAccessPreview(std::forward<AccessPreviewT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccessPreviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccessPreview m_accessPreview;
    bool m_accessPreviewHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
