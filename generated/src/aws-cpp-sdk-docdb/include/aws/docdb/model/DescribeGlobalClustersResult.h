/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/ResponseMetadata.h>
#include <aws/docdb/model/GlobalCluster.h>
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
namespace DocDB
{
namespace Model
{
  class DescribeGlobalClustersResult
  {
  public:
    AWS_DOCDB_API DescribeGlobalClustersResult() = default;
    AWS_DOCDB_API DescribeGlobalClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API DescribeGlobalClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeGlobalClustersResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<GlobalCluster>& GetGlobalClusters() const { return m_globalClusters; }
    template<typename GlobalClustersT = Aws::Vector<GlobalCluster>>
    void SetGlobalClusters(GlobalClustersT&& value) { m_globalClustersHasBeenSet = true; m_globalClusters = std::forward<GlobalClustersT>(value); }
    template<typename GlobalClustersT = Aws::Vector<GlobalCluster>>
    DescribeGlobalClustersResult& WithGlobalClusters(GlobalClustersT&& value) { SetGlobalClusters(std::forward<GlobalClustersT>(value)); return *this;}
    template<typename GlobalClustersT = GlobalCluster>
    DescribeGlobalClustersResult& AddGlobalClusters(GlobalClustersT&& value) { m_globalClustersHasBeenSet = true; m_globalClusters.emplace_back(std::forward<GlobalClustersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeGlobalClustersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<GlobalCluster> m_globalClusters;
    bool m_globalClustersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
