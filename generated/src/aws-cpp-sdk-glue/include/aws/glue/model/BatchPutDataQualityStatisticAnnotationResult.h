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
    AWS_GLUE_API BatchPutDataQualityStatisticAnnotationResult();
    AWS_GLUE_API BatchPutDataQualityStatisticAnnotationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchPutDataQualityStatisticAnnotationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>AnnotationError</code>'s.</p>
     */
    inline const Aws::Vector<AnnotationError>& GetFailedInclusionAnnotations() const{ return m_failedInclusionAnnotations; }
    inline void SetFailedInclusionAnnotations(const Aws::Vector<AnnotationError>& value) { m_failedInclusionAnnotations = value; }
    inline void SetFailedInclusionAnnotations(Aws::Vector<AnnotationError>&& value) { m_failedInclusionAnnotations = std::move(value); }
    inline BatchPutDataQualityStatisticAnnotationResult& WithFailedInclusionAnnotations(const Aws::Vector<AnnotationError>& value) { SetFailedInclusionAnnotations(value); return *this;}
    inline BatchPutDataQualityStatisticAnnotationResult& WithFailedInclusionAnnotations(Aws::Vector<AnnotationError>&& value) { SetFailedInclusionAnnotations(std::move(value)); return *this;}
    inline BatchPutDataQualityStatisticAnnotationResult& AddFailedInclusionAnnotations(const AnnotationError& value) { m_failedInclusionAnnotations.push_back(value); return *this; }
    inline BatchPutDataQualityStatisticAnnotationResult& AddFailedInclusionAnnotations(AnnotationError&& value) { m_failedInclusionAnnotations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchPutDataQualityStatisticAnnotationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchPutDataQualityStatisticAnnotationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchPutDataQualityStatisticAnnotationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AnnotationError> m_failedInclusionAnnotations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
