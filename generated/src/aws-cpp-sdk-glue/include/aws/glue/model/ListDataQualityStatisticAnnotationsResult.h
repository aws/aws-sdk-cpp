/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/StatisticAnnotation.h>
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
  class ListDataQualityStatisticAnnotationsResult
  {
  public:
    AWS_GLUE_API ListDataQualityStatisticAnnotationsResult() = default;
    AWS_GLUE_API ListDataQualityStatisticAnnotationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDataQualityStatisticAnnotationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>StatisticAnnotation</code> applied to the Statistic</p>
     */
    inline const Aws::Vector<StatisticAnnotation>& GetAnnotations() const { return m_annotations; }
    template<typename AnnotationsT = Aws::Vector<StatisticAnnotation>>
    void SetAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations = std::forward<AnnotationsT>(value); }
    template<typename AnnotationsT = Aws::Vector<StatisticAnnotation>>
    ListDataQualityStatisticAnnotationsResult& WithAnnotations(AnnotationsT&& value) { SetAnnotations(std::forward<AnnotationsT>(value)); return *this;}
    template<typename AnnotationsT = StatisticAnnotation>
    ListDataQualityStatisticAnnotationsResult& AddAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations.emplace_back(std::forward<AnnotationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataQualityStatisticAnnotationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataQualityStatisticAnnotationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StatisticAnnotation> m_annotations;
    bool m_annotationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
