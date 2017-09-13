/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/ReservedCacheNode.h>
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
  /**
   * <p>Represents the output of a <code>DescribeReservedCacheNodes</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReservedCacheNodeMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API DescribeReservedCacheNodesResult
  {
  public:
    DescribeReservedCacheNodesResult();
    DescribeReservedCacheNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeReservedCacheNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedCacheNodesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedCacheNodesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedCacheNodesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of reserved cache nodes. Each element in the list contains detailed
     * information about one node.</p>
     */
    inline const Aws::Vector<ReservedCacheNode>& GetReservedCacheNodes() const{ return m_reservedCacheNodes; }

    /**
     * <p>A list of reserved cache nodes. Each element in the list contains detailed
     * information about one node.</p>
     */
    inline void SetReservedCacheNodes(const Aws::Vector<ReservedCacheNode>& value) { m_reservedCacheNodes = value; }

    /**
     * <p>A list of reserved cache nodes. Each element in the list contains detailed
     * information about one node.</p>
     */
    inline void SetReservedCacheNodes(Aws::Vector<ReservedCacheNode>&& value) { m_reservedCacheNodes = std::move(value); }

    /**
     * <p>A list of reserved cache nodes. Each element in the list contains detailed
     * information about one node.</p>
     */
    inline DescribeReservedCacheNodesResult& WithReservedCacheNodes(const Aws::Vector<ReservedCacheNode>& value) { SetReservedCacheNodes(value); return *this;}

    /**
     * <p>A list of reserved cache nodes. Each element in the list contains detailed
     * information about one node.</p>
     */
    inline DescribeReservedCacheNodesResult& WithReservedCacheNodes(Aws::Vector<ReservedCacheNode>&& value) { SetReservedCacheNodes(std::move(value)); return *this;}

    /**
     * <p>A list of reserved cache nodes. Each element in the list contains detailed
     * information about one node.</p>
     */
    inline DescribeReservedCacheNodesResult& AddReservedCacheNodes(const ReservedCacheNode& value) { m_reservedCacheNodes.push_back(value); return *this; }

    /**
     * <p>A list of reserved cache nodes. Each element in the list contains detailed
     * information about one node.</p>
     */
    inline DescribeReservedCacheNodesResult& AddReservedCacheNodes(ReservedCacheNode&& value) { m_reservedCacheNodes.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeReservedCacheNodesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReservedCacheNodesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ReservedCacheNode> m_reservedCacheNodes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
