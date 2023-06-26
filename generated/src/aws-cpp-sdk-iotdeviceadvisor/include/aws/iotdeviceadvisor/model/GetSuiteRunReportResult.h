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
    AWS_IOTDEVICEADVISOR_API GetSuiteRunReportResult();
    AWS_IOTDEVICEADVISOR_API GetSuiteRunReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API GetSuiteRunReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Download URL of the qualification report.</p>
     */
    inline const Aws::String& GetQualificationReportDownloadUrl() const{ return m_qualificationReportDownloadUrl; }

    /**
     * <p>Download URL of the qualification report.</p>
     */
    inline void SetQualificationReportDownloadUrl(const Aws::String& value) { m_qualificationReportDownloadUrl = value; }

    /**
     * <p>Download URL of the qualification report.</p>
     */
    inline void SetQualificationReportDownloadUrl(Aws::String&& value) { m_qualificationReportDownloadUrl = std::move(value); }

    /**
     * <p>Download URL of the qualification report.</p>
     */
    inline void SetQualificationReportDownloadUrl(const char* value) { m_qualificationReportDownloadUrl.assign(value); }

    /**
     * <p>Download URL of the qualification report.</p>
     */
    inline GetSuiteRunReportResult& WithQualificationReportDownloadUrl(const Aws::String& value) { SetQualificationReportDownloadUrl(value); return *this;}

    /**
     * <p>Download URL of the qualification report.</p>
     */
    inline GetSuiteRunReportResult& WithQualificationReportDownloadUrl(Aws::String&& value) { SetQualificationReportDownloadUrl(std::move(value)); return *this;}

    /**
     * <p>Download URL of the qualification report.</p>
     */
    inline GetSuiteRunReportResult& WithQualificationReportDownloadUrl(const char* value) { SetQualificationReportDownloadUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSuiteRunReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSuiteRunReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSuiteRunReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_qualificationReportDownloadUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
