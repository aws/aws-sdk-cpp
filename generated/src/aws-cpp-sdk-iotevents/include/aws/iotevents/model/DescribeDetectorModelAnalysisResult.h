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
    AWS_IOTEVENTS_API DescribeDetectorModelAnalysisResult();
    AWS_IOTEVENTS_API DescribeDetectorModelAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API DescribeDetectorModelAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the analysis activity. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>RUNNING</code> - AWS IoT Events is analyzing
     * your detector model. This process can take several minutes to complete.</p>
     * </li> <li> <p> <code>COMPLETE</code> - AWS IoT Events finished analyzing your
     * detector model.</p> </li> <li> <p> <code>FAILED</code> - AWS IoT Events couldn't
     * analyze your detector model. Try again later.</p> </li> </ul>
     */
    inline const AnalysisStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the analysis activity. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>RUNNING</code> - AWS IoT Events is analyzing
     * your detector model. This process can take several minutes to complete.</p>
     * </li> <li> <p> <code>COMPLETE</code> - AWS IoT Events finished analyzing your
     * detector model.</p> </li> <li> <p> <code>FAILED</code> - AWS IoT Events couldn't
     * analyze your detector model. Try again later.</p> </li> </ul>
     */
    inline void SetStatus(const AnalysisStatus& value) { m_status = value; }

    /**
     * <p>The status of the analysis activity. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>RUNNING</code> - AWS IoT Events is analyzing
     * your detector model. This process can take several minutes to complete.</p>
     * </li> <li> <p> <code>COMPLETE</code> - AWS IoT Events finished analyzing your
     * detector model.</p> </li> <li> <p> <code>FAILED</code> - AWS IoT Events couldn't
     * analyze your detector model. Try again later.</p> </li> </ul>
     */
    inline void SetStatus(AnalysisStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the analysis activity. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>RUNNING</code> - AWS IoT Events is analyzing
     * your detector model. This process can take several minutes to complete.</p>
     * </li> <li> <p> <code>COMPLETE</code> - AWS IoT Events finished analyzing your
     * detector model.</p> </li> <li> <p> <code>FAILED</code> - AWS IoT Events couldn't
     * analyze your detector model. Try again later.</p> </li> </ul>
     */
    inline DescribeDetectorModelAnalysisResult& WithStatus(const AnalysisStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the analysis activity. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>RUNNING</code> - AWS IoT Events is analyzing
     * your detector model. This process can take several minutes to complete.</p>
     * </li> <li> <p> <code>COMPLETE</code> - AWS IoT Events finished analyzing your
     * detector model.</p> </li> <li> <p> <code>FAILED</code> - AWS IoT Events couldn't
     * analyze your detector model. Try again later.</p> </li> </ul>
     */
    inline DescribeDetectorModelAnalysisResult& WithStatus(AnalysisStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDetectorModelAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDetectorModelAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDetectorModelAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AnalysisStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
