/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/AttributeSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class GetDeclarativePoliciesReportSummaryResponse
  {
  public:
    AWS_EC2_API GetDeclarativePoliciesReportSummaryResponse() = default;
    AWS_EC2_API GetDeclarativePoliciesReportSummaryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetDeclarativePoliciesReportSummaryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the report.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    GetDeclarativePoliciesReportSummaryResponse& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where the report is located.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    GetDeclarativePoliciesReportSummaryResponse& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for your S3 object.</p>
     */
    inline const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
    template<typename S3PrefixT = Aws::String>
    void SetS3Prefix(S3PrefixT&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::forward<S3PrefixT>(value); }
    template<typename S3PrefixT = Aws::String>
    GetDeclarativePoliciesReportSummaryResponse& WithS3Prefix(S3PrefixT&& value) { SetS3Prefix(std::forward<S3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root ID, organizational unit ID, or account ID.</p> <p>Format:</p> <ul>
     * <li> <p>For root: <code>r-ab12</code> </p> </li> <li> <p>For OU:
     * <code>ou-ab12-cdef1234</code> </p> </li> <li> <p>For account:
     * <code>123456789012</code> </p> </li> </ul>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    GetDeclarativePoliciesReportSummaryResponse& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the report generation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetDeclarativePoliciesReportSummaryResponse& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the report generation ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetDeclarativePoliciesReportSummaryResponse& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of accounts associated with the specified
     * <code>targetId</code>.</p>
     */
    inline int GetNumberOfAccounts() const { return m_numberOfAccounts; }
    inline void SetNumberOfAccounts(int value) { m_numberOfAccountsHasBeenSet = true; m_numberOfAccounts = value; }
    inline GetDeclarativePoliciesReportSummaryResponse& WithNumberOfAccounts(int value) { SetNumberOfAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of accounts where attributes could not be retrieved in any
     * Region.</p>
     */
    inline int GetNumberOfFailedAccounts() const { return m_numberOfFailedAccounts; }
    inline void SetNumberOfFailedAccounts(int value) { m_numberOfFailedAccountsHasBeenSet = true; m_numberOfFailedAccounts = value; }
    inline GetDeclarativePoliciesReportSummaryResponse& WithNumberOfFailedAccounts(int value) { SetNumberOfFailedAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes described in the report.</p>
     */
    inline const Aws::Vector<AttributeSummary>& GetAttributeSummaries() const { return m_attributeSummaries; }
    template<typename AttributeSummariesT = Aws::Vector<AttributeSummary>>
    void SetAttributeSummaries(AttributeSummariesT&& value) { m_attributeSummariesHasBeenSet = true; m_attributeSummaries = std::forward<AttributeSummariesT>(value); }
    template<typename AttributeSummariesT = Aws::Vector<AttributeSummary>>
    GetDeclarativePoliciesReportSummaryResponse& WithAttributeSummaries(AttributeSummariesT&& value) { SetAttributeSummaries(std::forward<AttributeSummariesT>(value)); return *this;}
    template<typename AttributeSummariesT = AttributeSummary>
    GetDeclarativePoliciesReportSummaryResponse& AddAttributeSummaries(AttributeSummariesT&& value) { m_attributeSummariesHasBeenSet = true; m_attributeSummaries.emplace_back(std::forward<AttributeSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetDeclarativePoliciesReportSummaryResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_numberOfAccounts{0};
    bool m_numberOfAccountsHasBeenSet = false;

    int m_numberOfFailedAccounts{0};
    bool m_numberOfFailedAccountsHasBeenSet = false;

    Aws::Vector<AttributeSummary> m_attributeSummaries;
    bool m_attributeSummariesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
