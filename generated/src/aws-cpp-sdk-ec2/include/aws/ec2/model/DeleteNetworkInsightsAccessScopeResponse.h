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
  class DeleteNetworkInsightsAccessScopeResponse
  {
  public:
    AWS_EC2_API DeleteNetworkInsightsAccessScopeResponse();
    AWS_EC2_API DeleteNetworkInsightsAccessScopeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteNetworkInsightsAccessScopeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeId() const{ return m_networkInsightsAccessScopeId; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(const Aws::String& value) { m_networkInsightsAccessScopeId = value; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(Aws::String&& value) { m_networkInsightsAccessScopeId = std::move(value); }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(const char* value) { m_networkInsightsAccessScopeId.assign(value); }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline DeleteNetworkInsightsAccessScopeResponse& WithNetworkInsightsAccessScopeId(const Aws::String& value) { SetNetworkInsightsAccessScopeId(value); return *this;}

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline DeleteNetworkInsightsAccessScopeResponse& WithNetworkInsightsAccessScopeId(Aws::String&& value) { SetNetworkInsightsAccessScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline DeleteNetworkInsightsAccessScopeResponse& WithNetworkInsightsAccessScopeId(const char* value) { SetNetworkInsightsAccessScopeId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteNetworkInsightsAccessScopeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteNetworkInsightsAccessScopeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_networkInsightsAccessScopeId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
