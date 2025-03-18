/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{
  class CreateExclusionsPreviewResult
  {
  public:
    AWS_INSPECTOR_API CreateExclusionsPreviewResult() = default;
    AWS_INSPECTOR_API CreateExclusionsPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API CreateExclusionsPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline const Aws::String& GetPreviewToken() const { return m_previewToken; }
    template<typename PreviewTokenT = Aws::String>
    void SetPreviewToken(PreviewTokenT&& value) { m_previewTokenHasBeenSet = true; m_previewToken = std::forward<PreviewTokenT>(value); }
    template<typename PreviewTokenT = Aws::String>
    CreateExclusionsPreviewResult& WithPreviewToken(PreviewTokenT&& value) { SetPreviewToken(std::forward<PreviewTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateExclusionsPreviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_previewToken;
    bool m_previewTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
