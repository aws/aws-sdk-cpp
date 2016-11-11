/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/ReservedCacheNodesOffering.h>

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
   * <p>Represents the output of a <code>DescribeReservedCacheNodesOfferings</code>
   * operation.</p>
   */
  class AWS_ELASTICACHE_API DescribeReservedCacheNodesOfferingsResult
  {
  public:
    DescribeReservedCacheNodesOfferingsResult();
    DescribeReservedCacheNodesOfferingsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeReservedCacheNodesOfferingsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedCacheNodesOfferingsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedCacheNodesOfferingsResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedCacheNodesOfferingsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>A list of reserved cache node offerings. Each element in the list contains
     * detailed information about one offering.</p>
     */
    inline const Aws::Vector<ReservedCacheNodesOffering>& GetReservedCacheNodesOfferings() const{ return m_reservedCacheNodesOfferings; }

    /**
     * <p>A list of reserved cache node offerings. Each element in the list contains
     * detailed information about one offering.</p>
     */
    inline void SetReservedCacheNodesOfferings(const Aws::Vector<ReservedCacheNodesOffering>& value) { m_reservedCacheNodesOfferings = value; }

    /**
     * <p>A list of reserved cache node offerings. Each element in the list contains
     * detailed information about one offering.</p>
     */
    inline void SetReservedCacheNodesOfferings(Aws::Vector<ReservedCacheNodesOffering>&& value) { m_reservedCacheNodesOfferings = value; }

    /**
     * <p>A list of reserved cache node offerings. Each element in the list contains
     * detailed information about one offering.</p>
     */
    inline DescribeReservedCacheNodesOfferingsResult& WithReservedCacheNodesOfferings(const Aws::Vector<ReservedCacheNodesOffering>& value) { SetReservedCacheNodesOfferings(value); return *this;}

    /**
     * <p>A list of reserved cache node offerings. Each element in the list contains
     * detailed information about one offering.</p>
     */
    inline DescribeReservedCacheNodesOfferingsResult& WithReservedCacheNodesOfferings(Aws::Vector<ReservedCacheNodesOffering>&& value) { SetReservedCacheNodesOfferings(value); return *this;}

    /**
     * <p>A list of reserved cache node offerings. Each element in the list contains
     * detailed information about one offering.</p>
     */
    inline DescribeReservedCacheNodesOfferingsResult& AddReservedCacheNodesOfferings(const ReservedCacheNodesOffering& value) { m_reservedCacheNodesOfferings.push_back(value); return *this; }

    /**
     * <p>A list of reserved cache node offerings. Each element in the list contains
     * detailed information about one offering.</p>
     */
    inline DescribeReservedCacheNodesOfferingsResult& AddReservedCacheNodesOfferings(ReservedCacheNodesOffering&& value) { m_reservedCacheNodesOfferings.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeReservedCacheNodesOfferingsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReservedCacheNodesOfferingsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_marker;
    Aws::Vector<ReservedCacheNodesOffering> m_reservedCacheNodesOfferings;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws