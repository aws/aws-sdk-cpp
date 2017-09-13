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
#include <aws/redshift/model/HsmClientCertificate.h>
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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/HsmClientCertificateMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeHsmClientCertificatesResult
  {
  public:
    DescribeHsmClientCertificatesResult();
    DescribeHsmClientCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeHsmClientCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeHsmClientCertificatesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeHsmClientCertificatesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeHsmClientCertificatesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of the identifiers for one or more HSM client certificates used by
     * Amazon Redshift clusters to store and retrieve database encryption keys in an
     * HSM.</p>
     */
    inline const Aws::Vector<HsmClientCertificate>& GetHsmClientCertificates() const{ return m_hsmClientCertificates; }

    /**
     * <p>A list of the identifiers for one or more HSM client certificates used by
     * Amazon Redshift clusters to store and retrieve database encryption keys in an
     * HSM.</p>
     */
    inline void SetHsmClientCertificates(const Aws::Vector<HsmClientCertificate>& value) { m_hsmClientCertificates = value; }

    /**
     * <p>A list of the identifiers for one or more HSM client certificates used by
     * Amazon Redshift clusters to store and retrieve database encryption keys in an
     * HSM.</p>
     */
    inline void SetHsmClientCertificates(Aws::Vector<HsmClientCertificate>&& value) { m_hsmClientCertificates = std::move(value); }

    /**
     * <p>A list of the identifiers for one or more HSM client certificates used by
     * Amazon Redshift clusters to store and retrieve database encryption keys in an
     * HSM.</p>
     */
    inline DescribeHsmClientCertificatesResult& WithHsmClientCertificates(const Aws::Vector<HsmClientCertificate>& value) { SetHsmClientCertificates(value); return *this;}

    /**
     * <p>A list of the identifiers for one or more HSM client certificates used by
     * Amazon Redshift clusters to store and retrieve database encryption keys in an
     * HSM.</p>
     */
    inline DescribeHsmClientCertificatesResult& WithHsmClientCertificates(Aws::Vector<HsmClientCertificate>&& value) { SetHsmClientCertificates(std::move(value)); return *this;}

    /**
     * <p>A list of the identifiers for one or more HSM client certificates used by
     * Amazon Redshift clusters to store and retrieve database encryption keys in an
     * HSM.</p>
     */
    inline DescribeHsmClientCertificatesResult& AddHsmClientCertificates(const HsmClientCertificate& value) { m_hsmClientCertificates.push_back(value); return *this; }

    /**
     * <p>A list of the identifiers for one or more HSM client certificates used by
     * Amazon Redshift clusters to store and retrieve database encryption keys in an
     * HSM.</p>
     */
    inline DescribeHsmClientCertificatesResult& AddHsmClientCertificates(HsmClientCertificate&& value) { m_hsmClientCertificates.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeHsmClientCertificatesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeHsmClientCertificatesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<HsmClientCertificate> m_hsmClientCertificates;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
