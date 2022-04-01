﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkInsightsAccessScopeAnalysis.h>
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
  class AWS_EC2_API StartNetworkInsightsAccessScopeAnalysisResponse
  {
  public:
    StartNetworkInsightsAccessScopeAnalysisResponse();
    StartNetworkInsightsAccessScopeAnalysisResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    StartNetworkInsightsAccessScopeAnalysisResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Network Access Scope analysis.</p>
     */
    inline const NetworkInsightsAccessScopeAnalysis& GetNetworkInsightsAccessScopeAnalysis() const{ return m_networkInsightsAccessScopeAnalysis; }

    /**
     * <p>The Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysis(const NetworkInsightsAccessScopeAnalysis& value) { m_networkInsightsAccessScopeAnalysis = value; }

    /**
     * <p>The Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysis(NetworkInsightsAccessScopeAnalysis&& value) { m_networkInsightsAccessScopeAnalysis = std::move(value); }

    /**
     * <p>The Network Access Scope analysis.</p>
     */
    inline StartNetworkInsightsAccessScopeAnalysisResponse& WithNetworkInsightsAccessScopeAnalysis(const NetworkInsightsAccessScopeAnalysis& value) { SetNetworkInsightsAccessScopeAnalysis(value); return *this;}

    /**
     * <p>The Network Access Scope analysis.</p>
     */
    inline StartNetworkInsightsAccessScopeAnalysisResponse& WithNetworkInsightsAccessScopeAnalysis(NetworkInsightsAccessScopeAnalysis&& value) { SetNetworkInsightsAccessScopeAnalysis(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline StartNetworkInsightsAccessScopeAnalysisResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline StartNetworkInsightsAccessScopeAnalysisResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    NetworkInsightsAccessScopeAnalysis m_networkInsightsAccessScopeAnalysis;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
