/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkInsightsPath.h>
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
  class CreateNetworkInsightsPathResponse
  {
  public:
    AWS_EC2_API CreateNetworkInsightsPathResponse();
    AWS_EC2_API CreateNetworkInsightsPathResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateNetworkInsightsPathResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the path.</p>
     */
    inline const NetworkInsightsPath& GetNetworkInsightsPath() const{ return m_networkInsightsPath; }

    /**
     * <p>Information about the path.</p>
     */
    inline void SetNetworkInsightsPath(const NetworkInsightsPath& value) { m_networkInsightsPath = value; }

    /**
     * <p>Information about the path.</p>
     */
    inline void SetNetworkInsightsPath(NetworkInsightsPath&& value) { m_networkInsightsPath = std::move(value); }

    /**
     * <p>Information about the path.</p>
     */
    inline CreateNetworkInsightsPathResponse& WithNetworkInsightsPath(const NetworkInsightsPath& value) { SetNetworkInsightsPath(value); return *this;}

    /**
     * <p>Information about the path.</p>
     */
    inline CreateNetworkInsightsPathResponse& WithNetworkInsightsPath(NetworkInsightsPath&& value) { SetNetworkInsightsPath(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateNetworkInsightsPathResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateNetworkInsightsPathResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    NetworkInsightsPath m_networkInsightsPath;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
