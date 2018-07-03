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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ReservedNodeOffering.h>
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
  class AWS_REDSHIFT_API GetReservedNodeExchangeOfferingsResult
  {
  public:
    GetReservedNodeExchangeOfferingsResult();
    GetReservedNodeExchangeOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetReservedNodeExchangeOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>GetReservedNodeExchangeOfferings</code> request exceed the value specified
     * in MaxRecords, Amazon Redshift returns a value in the marker field of the
     * response. You can retrieve the next set of response records by providing the
     * returned marker value in the marker parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>GetReservedNodeExchangeOfferings</code> request exceed the value specified
     * in MaxRecords, Amazon Redshift returns a value in the marker field of the
     * response. You can retrieve the next set of response records by providing the
     * returned marker value in the marker parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>GetReservedNodeExchangeOfferings</code> request exceed the value specified
     * in MaxRecords, Amazon Redshift returns a value in the marker field of the
     * response. You can retrieve the next set of response records by providing the
     * returned marker value in the marker parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>GetReservedNodeExchangeOfferings</code> request exceed the value specified
     * in MaxRecords, Amazon Redshift returns a value in the marker field of the
     * response. You can retrieve the next set of response records by providing the
     * returned marker value in the marker parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>GetReservedNodeExchangeOfferings</code> request exceed the value specified
     * in MaxRecords, Amazon Redshift returns a value in the marker field of the
     * response. You can retrieve the next set of response records by providing the
     * returned marker value in the marker parameter and retrying the request. </p>
     */
    inline GetReservedNodeExchangeOfferingsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>GetReservedNodeExchangeOfferings</code> request exceed the value specified
     * in MaxRecords, Amazon Redshift returns a value in the marker field of the
     * response. You can retrieve the next set of response records by providing the
     * returned marker value in the marker parameter and retrying the request. </p>
     */
    inline GetReservedNodeExchangeOfferingsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>GetReservedNodeExchangeOfferings</code> request exceed the value specified
     * in MaxRecords, Amazon Redshift returns a value in the marker field of the
     * response. You can retrieve the next set of response records by providing the
     * returned marker value in the marker parameter and retrying the request. </p>
     */
    inline GetReservedNodeExchangeOfferingsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Returns an array of <a>ReservedNodeOffering</a> objects.</p>
     */
    inline const Aws::Vector<ReservedNodeOffering>& GetReservedNodeOfferings() const{ return m_reservedNodeOfferings; }

    /**
     * <p>Returns an array of <a>ReservedNodeOffering</a> objects.</p>
     */
    inline void SetReservedNodeOfferings(const Aws::Vector<ReservedNodeOffering>& value) { m_reservedNodeOfferings = value; }

    /**
     * <p>Returns an array of <a>ReservedNodeOffering</a> objects.</p>
     */
    inline void SetReservedNodeOfferings(Aws::Vector<ReservedNodeOffering>&& value) { m_reservedNodeOfferings = std::move(value); }

    /**
     * <p>Returns an array of <a>ReservedNodeOffering</a> objects.</p>
     */
    inline GetReservedNodeExchangeOfferingsResult& WithReservedNodeOfferings(const Aws::Vector<ReservedNodeOffering>& value) { SetReservedNodeOfferings(value); return *this;}

    /**
     * <p>Returns an array of <a>ReservedNodeOffering</a> objects.</p>
     */
    inline GetReservedNodeExchangeOfferingsResult& WithReservedNodeOfferings(Aws::Vector<ReservedNodeOffering>&& value) { SetReservedNodeOfferings(std::move(value)); return *this;}

    /**
     * <p>Returns an array of <a>ReservedNodeOffering</a> objects.</p>
     */
    inline GetReservedNodeExchangeOfferingsResult& AddReservedNodeOfferings(const ReservedNodeOffering& value) { m_reservedNodeOfferings.push_back(value); return *this; }

    /**
     * <p>Returns an array of <a>ReservedNodeOffering</a> objects.</p>
     */
    inline GetReservedNodeExchangeOfferingsResult& AddReservedNodeOfferings(ReservedNodeOffering&& value) { m_reservedNodeOfferings.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetReservedNodeExchangeOfferingsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetReservedNodeExchangeOfferingsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ReservedNodeOffering> m_reservedNodeOfferings;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
