/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkInsightsAccessScopeContent.h>
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
  class GetNetworkInsightsAccessScopeContentResponse
  {
  public:
    AWS_EC2_API GetNetworkInsightsAccessScopeContentResponse();
    AWS_EC2_API GetNetworkInsightsAccessScopeContentResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetNetworkInsightsAccessScopeContentResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Network Access Scope content.</p>
     */
    inline const NetworkInsightsAccessScopeContent& GetNetworkInsightsAccessScopeContent() const{ return m_networkInsightsAccessScopeContent; }

    /**
     * <p>The Network Access Scope content.</p>
     */
    inline void SetNetworkInsightsAccessScopeContent(const NetworkInsightsAccessScopeContent& value) { m_networkInsightsAccessScopeContent = value; }

    /**
     * <p>The Network Access Scope content.</p>
     */
    inline void SetNetworkInsightsAccessScopeContent(NetworkInsightsAccessScopeContent&& value) { m_networkInsightsAccessScopeContent = std::move(value); }

    /**
     * <p>The Network Access Scope content.</p>
     */
    inline GetNetworkInsightsAccessScopeContentResponse& WithNetworkInsightsAccessScopeContent(const NetworkInsightsAccessScopeContent& value) { SetNetworkInsightsAccessScopeContent(value); return *this;}

    /**
     * <p>The Network Access Scope content.</p>
     */
    inline GetNetworkInsightsAccessScopeContentResponse& WithNetworkInsightsAccessScopeContent(NetworkInsightsAccessScopeContent&& value) { SetNetworkInsightsAccessScopeContent(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetNetworkInsightsAccessScopeContentResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetNetworkInsightsAccessScopeContentResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    NetworkInsightsAccessScopeContent m_networkInsightsAccessScopeContent;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
