/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/DetectorVersionSummary.h>
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
namespace FraudDetector
{
namespace Model
{
  class DescribeDetectorResult
  {
  public:
    AWS_FRAUDDETECTOR_API DescribeDetectorResult() = default;
    AWS_FRAUDDETECTOR_API DescribeDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API DescribeDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detector ID.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    DescribeDetectorResult& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status and description for each detector version.</p>
     */
    inline const Aws::Vector<DetectorVersionSummary>& GetDetectorVersionSummaries() const { return m_detectorVersionSummaries; }
    template<typename DetectorVersionSummariesT = Aws::Vector<DetectorVersionSummary>>
    void SetDetectorVersionSummaries(DetectorVersionSummariesT&& value) { m_detectorVersionSummariesHasBeenSet = true; m_detectorVersionSummaries = std::forward<DetectorVersionSummariesT>(value); }
    template<typename DetectorVersionSummariesT = Aws::Vector<DetectorVersionSummary>>
    DescribeDetectorResult& WithDetectorVersionSummaries(DetectorVersionSummariesT&& value) { SetDetectorVersionSummaries(std::forward<DetectorVersionSummariesT>(value)); return *this;}
    template<typename DetectorVersionSummariesT = DetectorVersionSummary>
    DescribeDetectorResult& AddDetectorVersionSummaries(DetectorVersionSummariesT&& value) { m_detectorVersionSummariesHasBeenSet = true; m_detectorVersionSummaries.emplace_back(std::forward<DetectorVersionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token to be used for subsequent requests.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDetectorResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeDetectorResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDetectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<DetectorVersionSummary> m_detectorVersionSummaries;
    bool m_detectorVersionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
