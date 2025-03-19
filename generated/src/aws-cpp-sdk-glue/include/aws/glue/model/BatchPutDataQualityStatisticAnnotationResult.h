/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/AnnotationError.h>
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
namespace Glue
{
namespace Model
{
  class BatchPutDataQualityStatisticAnnotationResult
  {
  public:
    AWS_GLUE_API BatchPutDataQualityStatisticAnnotationResult() = default;
    AWS_GLUE_API BatchPutDataQualityStatisticAnnotationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchPutDataQualityStatisticAnnotationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>AnnotationError</code>'s.</p>
     */
    inline const Aws::Vector<AnnotationError>& GetFailedInclusionAnnotations() const { return m_failedInclusionAnnotations; }
    template<typename FailedInclusionAnnotationsT = Aws::Vector<AnnotationError>>
    void SetFailedInclusionAnnotations(FailedInclusionAnnotationsT&& value) { m_failedInclusionAnnotationsHasBeenSet = true; m_failedInclusionAnnotations = std::forward<FailedInclusionAnnotationsT>(value); }
    template<typename FailedInclusionAnnotationsT = Aws::Vector<AnnotationError>>
    BatchPutDataQualityStatisticAnnotationResult& WithFailedInclusionAnnotations(FailedInclusionAnnotationsT&& value) { SetFailedInclusionAnnotations(std::forward<FailedInclusionAnnotationsT>(value)); return *this;}
    template<typename FailedInclusionAnnotationsT = AnnotationError>
    BatchPutDataQualityStatisticAnnotationResult& AddFailedInclusionAnnotations(FailedInclusionAnnotationsT&& value) { m_failedInclusionAnnotationsHasBeenSet = true; m_failedInclusionAnnotations.emplace_back(std::forward<FailedInclusionAnnotationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchPutDataQualityStatisticAnnotationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnnotationError> m_failedInclusionAnnotations;
    bool m_failedInclusionAnnotationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
