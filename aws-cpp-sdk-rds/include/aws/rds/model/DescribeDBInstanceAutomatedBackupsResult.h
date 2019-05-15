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
#include <aws/rds/model/DBInstanceAutomatedBackup.h>
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
   * <p> Contains the result of a successful invocation of the
   * <code>DescribeDBInstanceAutomatedBackups</code> action. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBInstanceAutomatedBackupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DescribeDBInstanceAutomatedBackupsResult
  {
  public:
    DescribeDBInstanceAutomatedBackupsResult();
    DescribeDBInstanceAutomatedBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBInstanceAutomatedBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code> . </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code> . </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code> . </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code> . </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code> . </p>
     */
    inline DescribeDBInstanceAutomatedBackupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code> . </p>
     */
    inline DescribeDBInstanceAutomatedBackupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code> . </p>
     */
    inline DescribeDBInstanceAutomatedBackupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p> A list of <code>DBInstanceAutomatedBackup</code> instances. </p>
     */
    inline const Aws::Vector<DBInstanceAutomatedBackup>& GetDBInstanceAutomatedBackups() const{ return m_dBInstanceAutomatedBackups; }

    /**
     * <p> A list of <code>DBInstanceAutomatedBackup</code> instances. </p>
     */
    inline void SetDBInstanceAutomatedBackups(const Aws::Vector<DBInstanceAutomatedBackup>& value) { m_dBInstanceAutomatedBackups = value; }

    /**
     * <p> A list of <code>DBInstanceAutomatedBackup</code> instances. </p>
     */
    inline void SetDBInstanceAutomatedBackups(Aws::Vector<DBInstanceAutomatedBackup>&& value) { m_dBInstanceAutomatedBackups = std::move(value); }

    /**
     * <p> A list of <code>DBInstanceAutomatedBackup</code> instances. </p>
     */
    inline DescribeDBInstanceAutomatedBackupsResult& WithDBInstanceAutomatedBackups(const Aws::Vector<DBInstanceAutomatedBackup>& value) { SetDBInstanceAutomatedBackups(value); return *this;}

    /**
     * <p> A list of <code>DBInstanceAutomatedBackup</code> instances. </p>
     */
    inline DescribeDBInstanceAutomatedBackupsResult& WithDBInstanceAutomatedBackups(Aws::Vector<DBInstanceAutomatedBackup>&& value) { SetDBInstanceAutomatedBackups(std::move(value)); return *this;}

    /**
     * <p> A list of <code>DBInstanceAutomatedBackup</code> instances. </p>
     */
    inline DescribeDBInstanceAutomatedBackupsResult& AddDBInstanceAutomatedBackups(const DBInstanceAutomatedBackup& value) { m_dBInstanceAutomatedBackups.push_back(value); return *this; }

    /**
     * <p> A list of <code>DBInstanceAutomatedBackup</code> instances. </p>
     */
    inline DescribeDBInstanceAutomatedBackupsResult& AddDBInstanceAutomatedBackups(DBInstanceAutomatedBackup&& value) { m_dBInstanceAutomatedBackups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBInstanceAutomatedBackupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBInstanceAutomatedBackupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<DBInstanceAutomatedBackup> m_dBInstanceAutomatedBackups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
