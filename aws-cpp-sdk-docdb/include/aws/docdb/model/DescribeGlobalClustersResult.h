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
    AWS_DOCDB_API DescribeGlobalClustersResult();
    AWS_DOCDB_API DescribeGlobalClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API DescribeGlobalClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p/>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p/>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p/>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p/>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p/>
     */
    inline DescribeGlobalClustersResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeGlobalClustersResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeGlobalClustersResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<GlobalCluster>& GetGlobalClusters() const{ return m_globalClusters; }

    /**
     * <p/>
     */
    inline void SetGlobalClusters(const Aws::Vector<GlobalCluster>& value) { m_globalClusters = value; }

    /**
     * <p/>
     */
    inline void SetGlobalClusters(Aws::Vector<GlobalCluster>&& value) { m_globalClusters = std::move(value); }

    /**
     * <p/>
     */
    inline DescribeGlobalClustersResult& WithGlobalClusters(const Aws::Vector<GlobalCluster>& value) { SetGlobalClusters(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeGlobalClustersResult& WithGlobalClusters(Aws::Vector<GlobalCluster>&& value) { SetGlobalClusters(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeGlobalClustersResult& AddGlobalClusters(const GlobalCluster& value) { m_globalClusters.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline DescribeGlobalClustersResult& AddGlobalClusters(GlobalCluster&& value) { m_globalClusters.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeGlobalClustersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeGlobalClustersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<GlobalCluster> m_globalClusters;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
