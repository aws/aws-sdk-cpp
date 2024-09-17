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
    AWS_GLUE_API ListDataQualityStatisticAnnotationsResult();
    AWS_GLUE_API ListDataQualityStatisticAnnotationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDataQualityStatisticAnnotationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>StatisticAnnotation</code> applied to the Statistic</p>
     */
    inline const Aws::Vector<StatisticAnnotation>& GetAnnotations() const{ return m_annotations; }
    inline void SetAnnotations(const Aws::Vector<StatisticAnnotation>& value) { m_annotations = value; }
    inline void SetAnnotations(Aws::Vector<StatisticAnnotation>&& value) { m_annotations = std::move(value); }
    inline ListDataQualityStatisticAnnotationsResult& WithAnnotations(const Aws::Vector<StatisticAnnotation>& value) { SetAnnotations(value); return *this;}
    inline ListDataQualityStatisticAnnotationsResult& WithAnnotations(Aws::Vector<StatisticAnnotation>&& value) { SetAnnotations(std::move(value)); return *this;}
    inline ListDataQualityStatisticAnnotationsResult& AddAnnotations(const StatisticAnnotation& value) { m_annotations.push_back(value); return *this; }
    inline ListDataQualityStatisticAnnotationsResult& AddAnnotations(StatisticAnnotation&& value) { m_annotations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataQualityStatisticAnnotationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataQualityStatisticAnnotationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataQualityStatisticAnnotationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataQualityStatisticAnnotationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataQualityStatisticAnnotationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataQualityStatisticAnnotationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StatisticAnnotation> m_annotations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
