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
  class ModifyDBProxyEndpointResult
  {
  public:
    AWS_RDS_API ModifyDBProxyEndpointResult();
    AWS_RDS_API ModifyDBProxyEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyDBProxyEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The <code>DBProxyEndpoint</code> object representing the new settings for the
     * DB proxy endpoint.</p>
     */
    inline const DBProxyEndpoint& GetDBProxyEndpoint() const{ return m_dBProxyEndpoint; }

    /**
     * <p>The <code>DBProxyEndpoint</code> object representing the new settings for the
     * DB proxy endpoint.</p>
     */
    inline void SetDBProxyEndpoint(const DBProxyEndpoint& value) { m_dBProxyEndpoint = value; }

    /**
     * <p>The <code>DBProxyEndpoint</code> object representing the new settings for the
     * DB proxy endpoint.</p>
     */
    inline void SetDBProxyEndpoint(DBProxyEndpoint&& value) { m_dBProxyEndpoint = std::move(value); }

    /**
     * <p>The <code>DBProxyEndpoint</code> object representing the new settings for the
     * DB proxy endpoint.</p>
     */
    inline ModifyDBProxyEndpointResult& WithDBProxyEndpoint(const DBProxyEndpoint& value) { SetDBProxyEndpoint(value); return *this;}

    /**
     * <p>The <code>DBProxyEndpoint</code> object representing the new settings for the
     * DB proxy endpoint.</p>
     */
    inline ModifyDBProxyEndpointResult& WithDBProxyEndpoint(DBProxyEndpoint&& value) { SetDBProxyEndpoint(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyDBProxyEndpointResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyDBProxyEndpointResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBProxyEndpoint m_dBProxyEndpoint;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
