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
  class CreatePublicIpv4PoolResponse
  {
  public:
    AWS_EC2_API CreatePublicIpv4PoolResponse();
    AWS_EC2_API CreatePublicIpv4PoolResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreatePublicIpv4PoolResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the public IPv4 pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The ID of the public IPv4 pool.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolId = value; }

    /**
     * <p>The ID of the public IPv4 pool.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolId = std::move(value); }

    /**
     * <p>The ID of the public IPv4 pool.</p>
     */
    inline void SetPoolId(const char* value) { m_poolId.assign(value); }

    /**
     * <p>The ID of the public IPv4 pool.</p>
     */
    inline CreatePublicIpv4PoolResponse& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the public IPv4 pool.</p>
     */
    inline CreatePublicIpv4PoolResponse& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the public IPv4 pool.</p>
     */
    inline CreatePublicIpv4PoolResponse& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreatePublicIpv4PoolResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreatePublicIpv4PoolResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_poolId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
