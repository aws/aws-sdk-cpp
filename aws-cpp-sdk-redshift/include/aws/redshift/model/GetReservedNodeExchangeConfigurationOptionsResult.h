/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ReservedNodeConfigurationOption.h>
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
namespace Redshift
{
namespace Model
{
  class GetReservedNodeExchangeConfigurationOptionsResult
  {
  public:
    AWS_REDSHIFT_API GetReservedNodeExchangeConfigurationOptionsResult();
    AWS_REDSHIFT_API GetReservedNodeExchangeConfigurationOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API GetReservedNodeExchangeConfigurationOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>the configuration options for the reserved-node exchange. These options
     * include information about the source reserved node and target reserved node.
     * Details include the node type, the price, the node count, and the offering
     * type.</p>
     */
    inline const Aws::Vector<ReservedNodeConfigurationOption>& GetReservedNodeConfigurationOptionList() const{ return m_reservedNodeConfigurationOptionList; }

    /**
     * <p>the configuration options for the reserved-node exchange. These options
     * include information about the source reserved node and target reserved node.
     * Details include the node type, the price, the node count, and the offering
     * type.</p>
     */
    inline void SetReservedNodeConfigurationOptionList(const Aws::Vector<ReservedNodeConfigurationOption>& value) { m_reservedNodeConfigurationOptionList = value; }

    /**
     * <p>the configuration options for the reserved-node exchange. These options
     * include information about the source reserved node and target reserved node.
     * Details include the node type, the price, the node count, and the offering
     * type.</p>
     */
    inline void SetReservedNodeConfigurationOptionList(Aws::Vector<ReservedNodeConfigurationOption>&& value) { m_reservedNodeConfigurationOptionList = std::move(value); }

    /**
     * <p>the configuration options for the reserved-node exchange. These options
     * include information about the source reserved node and target reserved node.
     * Details include the node type, the price, the node count, and the offering
     * type.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsResult& WithReservedNodeConfigurationOptionList(const Aws::Vector<ReservedNodeConfigurationOption>& value) { SetReservedNodeConfigurationOptionList(value); return *this;}

    /**
     * <p>the configuration options for the reserved-node exchange. These options
     * include information about the source reserved node and target reserved node.
     * Details include the node type, the price, the node count, and the offering
     * type.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsResult& WithReservedNodeConfigurationOptionList(Aws::Vector<ReservedNodeConfigurationOption>&& value) { SetReservedNodeConfigurationOptionList(std::move(value)); return *this;}

    /**
     * <p>the configuration options for the reserved-node exchange. These options
     * include information about the source reserved node and target reserved node.
     * Details include the node type, the price, the node count, and the offering
     * type.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsResult& AddReservedNodeConfigurationOptionList(const ReservedNodeConfigurationOption& value) { m_reservedNodeConfigurationOptionList.push_back(value); return *this; }

    /**
     * <p>the configuration options for the reserved-node exchange. These options
     * include information about the source reserved node and target reserved node.
     * Details include the node type, the price, the node count, and the offering
     * type.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsResult& AddReservedNodeConfigurationOptionList(ReservedNodeConfigurationOption&& value) { m_reservedNodeConfigurationOptionList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetReservedNodeExchangeConfigurationOptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetReservedNodeExchangeConfigurationOptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ReservedNodeConfigurationOption> m_reservedNodeConfigurationOptionList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
