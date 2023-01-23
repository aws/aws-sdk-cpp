/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkInsightsAccessScope.h>
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
  class CreateNetworkInsightsAccessScopeResponse
  {
  public:
    AWS_EC2_API CreateNetworkInsightsAccessScopeResponse();
    AWS_EC2_API CreateNetworkInsightsAccessScopeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateNetworkInsightsAccessScopeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Network Access Scope.</p>
     */
    inline const NetworkInsightsAccessScope& GetNetworkInsightsAccessScope() const{ return m_networkInsightsAccessScope; }

    /**
     * <p>The Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScope(const NetworkInsightsAccessScope& value) { m_networkInsightsAccessScope = value; }

    /**
     * <p>The Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScope(NetworkInsightsAccessScope&& value) { m_networkInsightsAccessScope = std::move(value); }

    /**
     * <p>The Network Access Scope.</p>
     */
    inline CreateNetworkInsightsAccessScopeResponse& WithNetworkInsightsAccessScope(const NetworkInsightsAccessScope& value) { SetNetworkInsightsAccessScope(value); return *this;}

    /**
     * <p>The Network Access Scope.</p>
     */
    inline CreateNetworkInsightsAccessScopeResponse& WithNetworkInsightsAccessScope(NetworkInsightsAccessScope&& value) { SetNetworkInsightsAccessScope(std::move(value)); return *this;}


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
    inline CreateNetworkInsightsAccessScopeResponse& WithNetworkInsightsAccessScopeContent(const NetworkInsightsAccessScopeContent& value) { SetNetworkInsightsAccessScopeContent(value); return *this;}

    /**
     * <p>The Network Access Scope content.</p>
     */
    inline CreateNetworkInsightsAccessScopeResponse& WithNetworkInsightsAccessScopeContent(NetworkInsightsAccessScopeContent&& value) { SetNetworkInsightsAccessScopeContent(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateNetworkInsightsAccessScopeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateNetworkInsightsAccessScopeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    NetworkInsightsAccessScope m_networkInsightsAccessScope;

    NetworkInsightsAccessScopeContent m_networkInsightsAccessScopeContent;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
