/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/DetectorVersionStatus.h>
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
  class CreateDetectorVersionResult
  {
  public:
    AWS_FRAUDDETECTOR_API CreateDetectorVersionResult();
    AWS_FRAUDDETECTOR_API CreateDetectorVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API CreateDetectorVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for the created version's parent detector.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorId.assign(value); }
    inline CreateDetectorVersionResult& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline CreateDetectorVersionResult& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline CreateDetectorVersionResult& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the created detector. </p>
     */
    inline const Aws::String& GetDetectorVersionId() const{ return m_detectorVersionId; }
    inline void SetDetectorVersionId(const Aws::String& value) { m_detectorVersionId = value; }
    inline void SetDetectorVersionId(Aws::String&& value) { m_detectorVersionId = std::move(value); }
    inline void SetDetectorVersionId(const char* value) { m_detectorVersionId.assign(value); }
    inline CreateDetectorVersionResult& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}
    inline CreateDetectorVersionResult& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}
    inline CreateDetectorVersionResult& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the detector version.</p>
     */
    inline const DetectorVersionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DetectorVersionStatus& value) { m_status = value; }
    inline void SetStatus(DetectorVersionStatus&& value) { m_status = std::move(value); }
    inline CreateDetectorVersionResult& WithStatus(const DetectorVersionStatus& value) { SetStatus(value); return *this;}
    inline CreateDetectorVersionResult& WithStatus(DetectorVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDetectorVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDetectorVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDetectorVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;

    Aws::String m_detectorVersionId;

    DetectorVersionStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
