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
  class DeleteNetworkInsightsAnalysisResponse
  {
  public:
    AWS_EC2_API DeleteNetworkInsightsAnalysisResponse();
    AWS_EC2_API DeleteNetworkInsightsAnalysisResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteNetworkInsightsAnalysisResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAnalysisId() const{ return m_networkInsightsAnalysisId; }

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysisId(const Aws::String& value) { m_networkInsightsAnalysisId = value; }

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysisId(Aws::String&& value) { m_networkInsightsAnalysisId = std::move(value); }

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysisId(const char* value) { m_networkInsightsAnalysisId.assign(value); }

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline DeleteNetworkInsightsAnalysisResponse& WithNetworkInsightsAnalysisId(const Aws::String& value) { SetNetworkInsightsAnalysisId(value); return *this;}

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline DeleteNetworkInsightsAnalysisResponse& WithNetworkInsightsAnalysisId(Aws::String&& value) { SetNetworkInsightsAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline DeleteNetworkInsightsAnalysisResponse& WithNetworkInsightsAnalysisId(const char* value) { SetNetworkInsightsAnalysisId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteNetworkInsightsAnalysisResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteNetworkInsightsAnalysisResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_networkInsightsAnalysisId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
