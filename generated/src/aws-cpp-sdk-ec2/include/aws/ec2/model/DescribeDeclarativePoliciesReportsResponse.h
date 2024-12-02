/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DeclarativePoliciesReport.h>
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
  class DescribeDeclarativePoliciesReportsResponse
  {
  public:
    AWS_EC2_API DescribeDeclarativePoliciesReportsResponse();
    AWS_EC2_API DescribeDeclarativePoliciesReportsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeDeclarativePoliciesReportsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeDeclarativePoliciesReportsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDeclarativePoliciesReportsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDeclarativePoliciesReportsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The report metadata.</p>
     */
    inline const Aws::Vector<DeclarativePoliciesReport>& GetReports() const{ return m_reports; }
    inline void SetReports(const Aws::Vector<DeclarativePoliciesReport>& value) { m_reports = value; }
    inline void SetReports(Aws::Vector<DeclarativePoliciesReport>&& value) { m_reports = std::move(value); }
    inline DescribeDeclarativePoliciesReportsResponse& WithReports(const Aws::Vector<DeclarativePoliciesReport>& value) { SetReports(value); return *this;}
    inline DescribeDeclarativePoliciesReportsResponse& WithReports(Aws::Vector<DeclarativePoliciesReport>&& value) { SetReports(std::move(value)); return *this;}
    inline DescribeDeclarativePoliciesReportsResponse& AddReports(const DeclarativePoliciesReport& value) { m_reports.push_back(value); return *this; }
    inline DescribeDeclarativePoliciesReportsResponse& AddReports(DeclarativePoliciesReport&& value) { m_reports.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeDeclarativePoliciesReportsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeDeclarativePoliciesReportsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<DeclarativePoliciesReport> m_reports;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
