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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/TableRestoreStatus.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/TableRestoreStatusMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeTableRestoreStatusResult
  {
  public:
    DescribeTableRestoreStatusResult();
    DescribeTableRestoreStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeTableRestoreStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of status details for one or more table restore requests.</p>
     */
    inline const Aws::Vector<TableRestoreStatus>& GetTableRestoreStatusDetails() const{ return m_tableRestoreStatusDetails; }

    /**
     * <p>A list of status details for one or more table restore requests.</p>
     */
    inline void SetTableRestoreStatusDetails(const Aws::Vector<TableRestoreStatus>& value) { m_tableRestoreStatusDetails = value; }

    /**
     * <p>A list of status details for one or more table restore requests.</p>
     */
    inline void SetTableRestoreStatusDetails(Aws::Vector<TableRestoreStatus>&& value) { m_tableRestoreStatusDetails = std::move(value); }

    /**
     * <p>A list of status details for one or more table restore requests.</p>
     */
    inline DescribeTableRestoreStatusResult& WithTableRestoreStatusDetails(const Aws::Vector<TableRestoreStatus>& value) { SetTableRestoreStatusDetails(value); return *this;}

    /**
     * <p>A list of status details for one or more table restore requests.</p>
     */
    inline DescribeTableRestoreStatusResult& WithTableRestoreStatusDetails(Aws::Vector<TableRestoreStatus>&& value) { SetTableRestoreStatusDetails(std::move(value)); return *this;}

    /**
     * <p>A list of status details for one or more table restore requests.</p>
     */
    inline DescribeTableRestoreStatusResult& AddTableRestoreStatusDetails(const TableRestoreStatus& value) { m_tableRestoreStatusDetails.push_back(value); return *this; }

    /**
     * <p>A list of status details for one or more table restore requests.</p>
     */
    inline DescribeTableRestoreStatusResult& AddTableRestoreStatusDetails(TableRestoreStatus&& value) { m_tableRestoreStatusDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that can be used in a subsequent
     * <a>DescribeTableRestoreStatus</a> request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that can be used in a subsequent
     * <a>DescribeTableRestoreStatus</a> request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that can be used in a subsequent
     * <a>DescribeTableRestoreStatus</a> request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token that can be used in a subsequent
     * <a>DescribeTableRestoreStatus</a> request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that can be used in a subsequent
     * <a>DescribeTableRestoreStatus</a> request.</p>
     */
    inline DescribeTableRestoreStatusResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent
     * <a>DescribeTableRestoreStatus</a> request.</p>
     */
    inline DescribeTableRestoreStatusResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent
     * <a>DescribeTableRestoreStatus</a> request.</p>
     */
    inline DescribeTableRestoreStatusResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTableRestoreStatusResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTableRestoreStatusResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TableRestoreStatus> m_tableRestoreStatusDetails;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
