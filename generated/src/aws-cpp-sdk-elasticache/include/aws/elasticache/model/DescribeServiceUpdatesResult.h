/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/ServiceUpdate.h>
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
namespace ElastiCache
{
namespace Model
{
  class DescribeServiceUpdatesResult
  {
  public:
    AWS_ELASTICACHE_API DescribeServiceUpdatesResult() = default;
    AWS_ELASTICACHE_API DescribeServiceUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeServiceUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeServiceUpdatesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of service updates</p>
     */
    inline const Aws::Vector<ServiceUpdate>& GetServiceUpdates() const { return m_serviceUpdates; }
    template<typename ServiceUpdatesT = Aws::Vector<ServiceUpdate>>
    void SetServiceUpdates(ServiceUpdatesT&& value) { m_serviceUpdatesHasBeenSet = true; m_serviceUpdates = std::forward<ServiceUpdatesT>(value); }
    template<typename ServiceUpdatesT = Aws::Vector<ServiceUpdate>>
    DescribeServiceUpdatesResult& WithServiceUpdates(ServiceUpdatesT&& value) { SetServiceUpdates(std::forward<ServiceUpdatesT>(value)); return *this;}
    template<typename ServiceUpdatesT = ServiceUpdate>
    DescribeServiceUpdatesResult& AddServiceUpdates(ServiceUpdatesT&& value) { m_serviceUpdatesHasBeenSet = true; m_serviceUpdates.emplace_back(std::forward<ServiceUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeServiceUpdatesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ServiceUpdate> m_serviceUpdates;
    bool m_serviceUpdatesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
