/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/Snapshot.h>
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
   * <p>Represents the output of a <code>DescribeSnapshots</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeSnapshotsListMessage">AWS
   * API Reference</a></p>
   */
  class DescribeSnapshotsResult
  {
  public:
    AWS_ELASTICACHE_API DescribeSnapshotsResult();
    AWS_ELASTICACHE_API DescribeSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeSnapshotsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeSnapshotsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeSnapshotsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of snapshots. Each item in the list contains detailed information
     * about one snapshot.</p>
     */
    inline const Aws::Vector<Snapshot>& GetSnapshots() const{ return m_snapshots; }

    /**
     * <p>A list of snapshots. Each item in the list contains detailed information
     * about one snapshot.</p>
     */
    inline void SetSnapshots(const Aws::Vector<Snapshot>& value) { m_snapshots = value; }

    /**
     * <p>A list of snapshots. Each item in the list contains detailed information
     * about one snapshot.</p>
     */
    inline void SetSnapshots(Aws::Vector<Snapshot>&& value) { m_snapshots = std::move(value); }

    /**
     * <p>A list of snapshots. Each item in the list contains detailed information
     * about one snapshot.</p>
     */
    inline DescribeSnapshotsResult& WithSnapshots(const Aws::Vector<Snapshot>& value) { SetSnapshots(value); return *this;}

    /**
     * <p>A list of snapshots. Each item in the list contains detailed information
     * about one snapshot.</p>
     */
    inline DescribeSnapshotsResult& WithSnapshots(Aws::Vector<Snapshot>&& value) { SetSnapshots(std::move(value)); return *this;}

    /**
     * <p>A list of snapshots. Each item in the list contains detailed information
     * about one snapshot.</p>
     */
    inline DescribeSnapshotsResult& AddSnapshots(const Snapshot& value) { m_snapshots.push_back(value); return *this; }

    /**
     * <p>A list of snapshots. Each item in the list contains detailed information
     * about one snapshot.</p>
     */
    inline DescribeSnapshotsResult& AddSnapshots(Snapshot&& value) { m_snapshots.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeSnapshotsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSnapshotsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<Snapshot> m_snapshots;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
