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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBClusterBacktrack.h>
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
namespace RDS
{
namespace Model
{
  /**
   * <p>Contains the result of a successful invocation of the
   * <code>DescribeDBClusterBacktracks</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterBacktrackMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DescribeDBClusterBacktracksResult
  {
  public:
    DescribeDBClusterBacktracksResult();
    DescribeDBClusterBacktracksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBClusterBacktracksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A pagination token that can be used in a subsequent
     * <code>DescribeDBClusterBacktracks</code> request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that can be used in a subsequent
     * <code>DescribeDBClusterBacktracks</code> request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that can be used in a subsequent
     * <code>DescribeDBClusterBacktracks</code> request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token that can be used in a subsequent
     * <code>DescribeDBClusterBacktracks</code> request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that can be used in a subsequent
     * <code>DescribeDBClusterBacktracks</code> request.</p>
     */
    inline DescribeDBClusterBacktracksResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent
     * <code>DescribeDBClusterBacktracks</code> request.</p>
     */
    inline DescribeDBClusterBacktracksResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent
     * <code>DescribeDBClusterBacktracks</code> request.</p>
     */
    inline DescribeDBClusterBacktracksResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Contains a list of backtracks for the user.</p>
     */
    inline const Aws::Vector<DBClusterBacktrack>& GetDBClusterBacktracks() const{ return m_dBClusterBacktracks; }

    /**
     * <p>Contains a list of backtracks for the user.</p>
     */
    inline void SetDBClusterBacktracks(const Aws::Vector<DBClusterBacktrack>& value) { m_dBClusterBacktracks = value; }

    /**
     * <p>Contains a list of backtracks for the user.</p>
     */
    inline void SetDBClusterBacktracks(Aws::Vector<DBClusterBacktrack>&& value) { m_dBClusterBacktracks = std::move(value); }

    /**
     * <p>Contains a list of backtracks for the user.</p>
     */
    inline DescribeDBClusterBacktracksResult& WithDBClusterBacktracks(const Aws::Vector<DBClusterBacktrack>& value) { SetDBClusterBacktracks(value); return *this;}

    /**
     * <p>Contains a list of backtracks for the user.</p>
     */
    inline DescribeDBClusterBacktracksResult& WithDBClusterBacktracks(Aws::Vector<DBClusterBacktrack>&& value) { SetDBClusterBacktracks(std::move(value)); return *this;}

    /**
     * <p>Contains a list of backtracks for the user.</p>
     */
    inline DescribeDBClusterBacktracksResult& AddDBClusterBacktracks(const DBClusterBacktrack& value) { m_dBClusterBacktracks.push_back(value); return *this; }

    /**
     * <p>Contains a list of backtracks for the user.</p>
     */
    inline DescribeDBClusterBacktracksResult& AddDBClusterBacktracks(DBClusterBacktrack&& value) { m_dBClusterBacktracks.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBClusterBacktracksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBClusterBacktracksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<DBClusterBacktrack> m_dBClusterBacktracks;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
