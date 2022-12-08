/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBProxy.h>
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
  class CreateDBProxyResult
  {
  public:
    AWS_RDS_API CreateDBProxyResult();
    AWS_RDS_API CreateDBProxyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateDBProxyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The <code>DBProxy</code> structure corresponding to the new proxy.</p>
     */
    inline const DBProxy& GetDBProxy() const{ return m_dBProxy; }

    /**
     * <p>The <code>DBProxy</code> structure corresponding to the new proxy.</p>
     */
    inline void SetDBProxy(const DBProxy& value) { m_dBProxy = value; }

    /**
     * <p>The <code>DBProxy</code> structure corresponding to the new proxy.</p>
     */
    inline void SetDBProxy(DBProxy&& value) { m_dBProxy = std::move(value); }

    /**
     * <p>The <code>DBProxy</code> structure corresponding to the new proxy.</p>
     */
    inline CreateDBProxyResult& WithDBProxy(const DBProxy& value) { SetDBProxy(value); return *this;}

    /**
     * <p>The <code>DBProxy</code> structure corresponding to the new proxy.</p>
     */
    inline CreateDBProxyResult& WithDBProxy(DBProxy&& value) { SetDBProxy(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateDBProxyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateDBProxyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBProxy m_dBProxy;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
