/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/AnalysisStatus.h>
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
namespace IoTEvents
{
namespace Model
{
  class DescribeDetectorModelAnalysisResult
  {
  public:
    AWS_IOTEVENTS_API DescribeDetectorModelAnalysisResult() = default;
    AWS_IOTEVENTS_API DescribeDetectorModelAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API DescribeDetectorModelAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the analysis activity. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>RUNNING</code> - AWS IoT Events is analyzing
     * your detector model. This process can take several minutes to complete.</p>
     * </li> <li> <p> <code>COMPLETE</code> - AWS IoT Events finished analyzing your
     * detector model.</p> </li> <li> <p> <code>FAILED</code> - AWS IoT Events couldn't
     * analyze your detector model. Try again later.</p> </li> </ul>
     */
    inline AnalysisStatus GetStatus() const { return m_status; }
    inline void SetStatus(AnalysisStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDetectorModelAnalysisResult& WithStatus(AnalysisStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDetectorModelAnalysisResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AnalysisStatus m_status{AnalysisStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
