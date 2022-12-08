/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBProxyEndpoint.h>
#include <aws/rds/model/ResponseMetadata.h>
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
namespace RDS
{
namespace Model
{
  class CreateDBProxyEndpointResult
  {
  public:
    AWS_RDS_API CreateDBProxyEndpointResult();
    AWS_RDS_API CreateDBProxyEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateDBProxyEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The <code>DBProxyEndpoint</code> object that is created by the API operation.
     * The DB proxy endpoint that you create might provide capabilities such as
     * read/write or read-only operations, or using a different VPC than the proxy's
     * default VPC.</p>
     */
    inline const DBProxyEndpoint& GetDBProxyEndpoint() const{ return m_dBProxyEndpoint; }

    /**
     * <p>The <code>DBProxyEndpoint</code> object that is created by the API operation.
     * The DB proxy endpoint that you create might provide capabilities such as
     * read/write or read-only operations, or using a different VPC than the proxy's
     * default VPC.</p>
     */
    inline void SetDBProxyEndpoint(const DBProxyEndpoint& value) { m_dBProxyEndpoint = value; }

    /**
     * <p>The <code>DBProxyEndpoint</code> object that is created by the API operation.
     * The DB proxy endpoint that you create might provide capabilities such as
     * read/write or read-only operations, or using a different VPC than the proxy's
     * default VPC.</p>
     */
    inline void SetDBProxyEndpoint(DBProxyEndpoint&& value) { m_dBProxyEndpoint = std::move(value); }

    /**
     * <p>The <code>DBProxyEndpoint</code> object that is created by the API operation.
     * The DB proxy endpoint that you create might provide capabilities such as
     * read/write or read-only operations, or using a different VPC than the proxy's
     * default VPC.</p>
     */
    inline CreateDBProxyEndpointResult& WithDBProxyEndpoint(const DBProxyEndpoint& value) { SetDBProxyEndpoint(value); return *this;}

    /**
     * <p>The <code>DBProxyEndpoint</code> object that is created by the API operation.
     * The DB proxy endpoint that you create might provide capabilities such as
     * read/write or read-only operations, or using a different VPC than the proxy's
     * default VPC.</p>
     */
    inline CreateDBProxyEndpointResult& WithDBProxyEndpoint(DBProxyEndpoint&& value) { SetDBProxyEndpoint(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateDBProxyEndpointResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateDBProxyEndpointResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBProxyEndpoint m_dBProxyEndpoint;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
