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
  class DeleteNetworkInsightsAccessScopeAnalysisResponse
  {
  public:
    AWS_EC2_API DeleteNetworkInsightsAccessScopeAnalysisResponse();
    AWS_EC2_API DeleteNetworkInsightsAccessScopeAnalysisResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteNetworkInsightsAccessScopeAnalysisResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeAnalysisId() const{ return m_networkInsightsAccessScopeAnalysisId; }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisId(const Aws::String& value) { m_networkInsightsAccessScopeAnalysisId = value; }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisId(Aws::String&& value) { m_networkInsightsAccessScopeAnalysisId = std::move(value); }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisId(const char* value) { m_networkInsightsAccessScopeAnalysisId.assign(value); }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline DeleteNetworkInsightsAccessScopeAnalysisResponse& WithNetworkInsightsAccessScopeAnalysisId(const Aws::String& value) { SetNetworkInsightsAccessScopeAnalysisId(value); return *this;}

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline DeleteNetworkInsightsAccessScopeAnalysisResponse& WithNetworkInsightsAccessScopeAnalysisId(Aws::String&& value) { SetNetworkInsightsAccessScopeAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline DeleteNetworkInsightsAccessScopeAnalysisResponse& WithNetworkInsightsAccessScopeAnalysisId(const char* value) { SetNetworkInsightsAccessScopeAnalysisId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteNetworkInsightsAccessScopeAnalysisResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteNetworkInsightsAccessScopeAnalysisResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_networkInsightsAccessScopeAnalysisId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
