/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/DataShare.h>
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
  class DescribeDataSharesResult
  {
  public:
    AWS_REDSHIFT_API DescribeDataSharesResult();
    AWS_REDSHIFT_API DescribeDataSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeDataSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The results returned from describing datashares.</p>
     */
    inline const Aws::Vector<DataShare>& GetDataShares() const{ return m_dataShares; }

    /**
     * <p>The results returned from describing datashares.</p>
     */
    inline void SetDataShares(const Aws::Vector<DataShare>& value) { m_dataShares = value; }

    /**
     * <p>The results returned from describing datashares.</p>
     */
    inline void SetDataShares(Aws::Vector<DataShare>&& value) { m_dataShares = std::move(value); }

    /**
     * <p>The results returned from describing datashares.</p>
     */
    inline DescribeDataSharesResult& WithDataShares(const Aws::Vector<DataShare>& value) { SetDataShares(value); return *this;}

    /**
     * <p>The results returned from describing datashares.</p>
     */
    inline DescribeDataSharesResult& WithDataShares(Aws::Vector<DataShare>&& value) { SetDataShares(std::move(value)); return *this;}

    /**
     * <p>The results returned from describing datashares.</p>
     */
    inline DescribeDataSharesResult& AddDataShares(const DataShare& value) { m_dataShares.push_back(value); return *this; }

    /**
     * <p>The results returned from describing datashares.</p>
     */
    inline DescribeDataSharesResult& AddDataShares(DataShare&& value) { m_dataShares.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataShares</a> request exceed
     * the value specified in <code>MaxRecords</code>, Amazon Web Services returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataShares</a> request exceed
     * the value specified in <code>MaxRecords</code>, Amazon Web Services returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataShares</a> request exceed
     * the value specified in <code>MaxRecords</code>, Amazon Web Services returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataShares</a> request exceed
     * the value specified in <code>MaxRecords</code>, Amazon Web Services returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataShares</a> request exceed
     * the value specified in <code>MaxRecords</code>, Amazon Web Services returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeDataSharesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataShares</a> request exceed
     * the value specified in <code>MaxRecords</code>, Amazon Web Services returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeDataSharesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataShares</a> request exceed
     * the value specified in <code>MaxRecords</code>, Amazon Web Services returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeDataSharesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDataSharesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDataSharesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DataShare> m_dataShares;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
