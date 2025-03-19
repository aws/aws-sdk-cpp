/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{
  class GetSuiteRunReportResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API GetSuiteRunReportResult() = default;
    AWS_IOTDEVICEADVISOR_API GetSuiteRunReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API GetSuiteRunReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Download URL of the qualification report.</p>
     */
    inline const Aws::String& GetQualificationReportDownloadUrl() const { return m_qualificationReportDownloadUrl; }
    template<typename QualificationReportDownloadUrlT = Aws::String>
    void SetQualificationReportDownloadUrl(QualificationReportDownloadUrlT&& value) { m_qualificationReportDownloadUrlHasBeenSet = true; m_qualificationReportDownloadUrl = std::forward<QualificationReportDownloadUrlT>(value); }
    template<typename QualificationReportDownloadUrlT = Aws::String>
    GetSuiteRunReportResult& WithQualificationReportDownloadUrl(QualificationReportDownloadUrlT&& value) { SetQualificationReportDownloadUrl(std::forward<QualificationReportDownloadUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSuiteRunReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_qualificationReportDownloadUrl;
    bool m_qualificationReportDownloadUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
