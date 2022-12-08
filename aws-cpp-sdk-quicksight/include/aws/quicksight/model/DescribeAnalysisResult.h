/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Analysis.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeAnalysisResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeAnalysisResult();
    AWS_QUICKSIGHT_API DescribeAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A metadata structure that contains summary information for the analysis that
     * you're describing.</p>
     */
    inline const Analysis& GetAnalysis() const{ return m_analysis; }

    /**
     * <p>A metadata structure that contains summary information for the analysis that
     * you're describing.</p>
     */
    inline void SetAnalysis(const Analysis& value) { m_analysis = value; }

    /**
     * <p>A metadata structure that contains summary information for the analysis that
     * you're describing.</p>
     */
    inline void SetAnalysis(Analysis&& value) { m_analysis = std::move(value); }

    /**
     * <p>A metadata structure that contains summary information for the analysis that
     * you're describing.</p>
     */
    inline DescribeAnalysisResult& WithAnalysis(const Analysis& value) { SetAnalysis(value); return *this;}

    /**
     * <p>A metadata structure that contains summary information for the analysis that
     * you're describing.</p>
     */
    inline DescribeAnalysisResult& WithAnalysis(Analysis&& value) { SetAnalysis(std::move(value)); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeAnalysisResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Analysis m_analysis;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
