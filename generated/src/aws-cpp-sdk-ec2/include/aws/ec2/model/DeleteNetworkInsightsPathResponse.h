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
  class DeleteNetworkInsightsPathResponse
  {
  public:
    AWS_EC2_API DeleteNetworkInsightsPathResponse();
    AWS_EC2_API DeleteNetworkInsightsPathResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteNetworkInsightsPathResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathId() const{ return m_networkInsightsPathId; }

    /**
     * <p>The ID of the path.</p>
     */
    inline void SetNetworkInsightsPathId(const Aws::String& value) { m_networkInsightsPathId = value; }

    /**
     * <p>The ID of the path.</p>
     */
    inline void SetNetworkInsightsPathId(Aws::String&& value) { m_networkInsightsPathId = std::move(value); }

    /**
     * <p>The ID of the path.</p>
     */
    inline void SetNetworkInsightsPathId(const char* value) { m_networkInsightsPathId.assign(value); }

    /**
     * <p>The ID of the path.</p>
     */
    inline DeleteNetworkInsightsPathResponse& WithNetworkInsightsPathId(const Aws::String& value) { SetNetworkInsightsPathId(value); return *this;}

    /**
     * <p>The ID of the path.</p>
     */
    inline DeleteNetworkInsightsPathResponse& WithNetworkInsightsPathId(Aws::String&& value) { SetNetworkInsightsPathId(std::move(value)); return *this;}

    /**
     * <p>The ID of the path.</p>
     */
    inline DeleteNetworkInsightsPathResponse& WithNetworkInsightsPathId(const char* value) { SetNetworkInsightsPathId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteNetworkInsightsPathResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteNetworkInsightsPathResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_networkInsightsPathId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
