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
    AWS_ARTIFACT_API GetReportMetadataResult() = default;
    AWS_ARTIFACT_API GetReportMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API GetReportMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Report resource detail.</p>
     */
    inline const ReportDetail& GetReportDetails() const { return m_reportDetails; }
    template<typename ReportDetailsT = ReportDetail>
    void SetReportDetails(ReportDetailsT&& value) { m_reportDetailsHasBeenSet = true; m_reportDetails = std::forward<ReportDetailsT>(value); }
    template<typename ReportDetailsT = ReportDetail>
    GetReportMetadataResult& WithReportDetails(ReportDetailsT&& value) { SetReportDetails(std::forward<ReportDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReportMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReportDetail m_reportDetails;
    bool m_reportDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
