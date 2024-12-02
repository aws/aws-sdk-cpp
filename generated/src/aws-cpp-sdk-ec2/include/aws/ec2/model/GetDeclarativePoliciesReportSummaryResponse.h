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
    AWS_EC2_API GetDeclarativePoliciesReportSummaryResponse();
    AWS_EC2_API GetDeclarativePoliciesReportSummaryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetDeclarativePoliciesReportSummaryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the report.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }
    inline void SetReportId(const char* value) { m_reportId.assign(value); }
    inline GetDeclarativePoliciesReportSummaryResponse& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithReportId(const char* value) { SetReportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where the report is located.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    inline void SetS3Bucket(const Aws::String& value) { m_s3Bucket = value; }
    inline void SetS3Bucket(Aws::String&& value) { m_s3Bucket = std::move(value); }
    inline void SetS3Bucket(const char* value) { m_s3Bucket.assign(value); }
    inline GetDeclarativePoliciesReportSummaryResponse& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for your S3 object.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }
    inline void SetS3Prefix(const Aws::String& value) { m_s3Prefix = value; }
    inline void SetS3Prefix(Aws::String&& value) { m_s3Prefix = std::move(value); }
    inline void SetS3Prefix(const char* value) { m_s3Prefix.assign(value); }
    inline GetDeclarativePoliciesReportSummaryResponse& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root ID, organizational unit ID, or account ID.</p> <p>Format:</p> <ul>
     * <li> <p>For root: <code>r-ab12</code> </p> </li> <li> <p>For OU:
     * <code>ou-ab12-cdef1234</code> </p> </li> <li> <p>For account:
     * <code>123456789012</code> </p> </li> </ul>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }
    inline void SetTargetId(const Aws::String& value) { m_targetId = value; }
    inline void SetTargetId(Aws::String&& value) { m_targetId = std::move(value); }
    inline void SetTargetId(const char* value) { m_targetId.assign(value); }
    inline GetDeclarativePoliciesReportSummaryResponse& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithTargetId(const char* value) { SetTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the report generation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetDeclarativePoliciesReportSummaryResponse& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the report generation ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetDeclarativePoliciesReportSummaryResponse& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of accounts associated with the specified
     * <code>targetId</code>.</p>
     */
    inline int GetNumberOfAccounts() const{ return m_numberOfAccounts; }
    inline void SetNumberOfAccounts(int value) { m_numberOfAccounts = value; }
    inline GetDeclarativePoliciesReportSummaryResponse& WithNumberOfAccounts(int value) { SetNumberOfAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of accounts where attributes could not be retrieved in any
     * Region.</p>
     */
    inline int GetNumberOfFailedAccounts() const{ return m_numberOfFailedAccounts; }
    inline void SetNumberOfFailedAccounts(int value) { m_numberOfFailedAccounts = value; }
    inline GetDeclarativePoliciesReportSummaryResponse& WithNumberOfFailedAccounts(int value) { SetNumberOfFailedAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes described in the report.</p>
     */
    inline const Aws::Vector<AttributeSummary>& GetAttributeSummaries() const{ return m_attributeSummaries; }
    inline void SetAttributeSummaries(const Aws::Vector<AttributeSummary>& value) { m_attributeSummaries = value; }
    inline void SetAttributeSummaries(Aws::Vector<AttributeSummary>&& value) { m_attributeSummaries = std::move(value); }
    inline GetDeclarativePoliciesReportSummaryResponse& WithAttributeSummaries(const Aws::Vector<AttributeSummary>& value) { SetAttributeSummaries(value); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithAttributeSummaries(Aws::Vector<AttributeSummary>&& value) { SetAttributeSummaries(std::move(value)); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& AddAttributeSummaries(const AttributeSummary& value) { m_attributeSummaries.push_back(value); return *this; }
    inline GetDeclarativePoliciesReportSummaryResponse& AddAttributeSummaries(AttributeSummary&& value) { m_attributeSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetDeclarativePoliciesReportSummaryResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetDeclarativePoliciesReportSummaryResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportId;

    Aws::String m_s3Bucket;

    Aws::String m_s3Prefix;

    Aws::String m_targetId;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    int m_numberOfAccounts;

    int m_numberOfFailedAccounts;

    Aws::Vector<AttributeSummary> m_attributeSummaries;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
