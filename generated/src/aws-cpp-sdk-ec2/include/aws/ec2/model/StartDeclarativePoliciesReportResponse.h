/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class StartDeclarativePoliciesReportResponse
  {
  public:
    AWS_EC2_API StartDeclarativePoliciesReportResponse();
    AWS_EC2_API StartDeclarativePoliciesReportResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API StartDeclarativePoliciesReportResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the report.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }
    inline void SetReportId(const char* value) { m_reportId.assign(value); }
    inline StartDeclarativePoliciesReportResponse& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}
    inline StartDeclarativePoliciesReportResponse& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}
    inline StartDeclarativePoliciesReportResponse& WithReportId(const char* value) { SetReportId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline StartDeclarativePoliciesReportResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline StartDeclarativePoliciesReportResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
