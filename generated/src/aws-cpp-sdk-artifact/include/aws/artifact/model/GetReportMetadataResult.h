/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/ReportDetail.h>
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
namespace Artifact
{
namespace Model
{
  class GetReportMetadataResult
  {
  public:
    AWS_ARTIFACT_API GetReportMetadataResult();
    AWS_ARTIFACT_API GetReportMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API GetReportMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Report resource detail.</p>
     */
    inline const ReportDetail& GetReportDetails() const{ return m_reportDetails; }

    /**
     * <p>Report resource detail.</p>
     */
    inline void SetReportDetails(const ReportDetail& value) { m_reportDetails = value; }

    /**
     * <p>Report resource detail.</p>
     */
    inline void SetReportDetails(ReportDetail&& value) { m_reportDetails = std::move(value); }

    /**
     * <p>Report resource detail.</p>
     */
    inline GetReportMetadataResult& WithReportDetails(const ReportDetail& value) { SetReportDetails(value); return *this;}

    /**
     * <p>Report resource detail.</p>
     */
    inline GetReportMetadataResult& WithReportDetails(ReportDetail&& value) { SetReportDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetReportMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetReportMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetReportMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReportDetail m_reportDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
