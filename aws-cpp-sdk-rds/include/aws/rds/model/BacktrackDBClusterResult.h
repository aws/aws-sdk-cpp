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
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ResponseMetadata.h>
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
   * <p>This data type is used as a response element in the
   * <code>DescribeDBClusterBacktracks</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterBacktrack">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API BacktrackDBClusterResult
  {
  public:
    BacktrackDBClusterResult();
    BacktrackDBClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    BacktrackDBClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifier = value; }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifier.assign(value); }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline BacktrackDBClusterResult& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline BacktrackDBClusterResult& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline BacktrackDBClusterResult& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline const Aws::String& GetBacktrackIdentifier() const{ return m_backtrackIdentifier; }

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline void SetBacktrackIdentifier(const Aws::String& value) { m_backtrackIdentifier = value; }

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline void SetBacktrackIdentifier(Aws::String&& value) { m_backtrackIdentifier = std::move(value); }

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline void SetBacktrackIdentifier(const char* value) { m_backtrackIdentifier.assign(value); }

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline BacktrackDBClusterResult& WithBacktrackIdentifier(const Aws::String& value) { SetBacktrackIdentifier(value); return *this;}

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline BacktrackDBClusterResult& WithBacktrackIdentifier(Aws::String&& value) { SetBacktrackIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline BacktrackDBClusterResult& WithBacktrackIdentifier(const char* value) { SetBacktrackIdentifier(value); return *this;}


    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackTo() const{ return m_backtrackTo; }

    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline void SetBacktrackTo(const Aws::Utils::DateTime& value) { m_backtrackTo = value; }

    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline void SetBacktrackTo(Aws::Utils::DateTime&& value) { m_backtrackTo = std::move(value); }

    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline BacktrackDBClusterResult& WithBacktrackTo(const Aws::Utils::DateTime& value) { SetBacktrackTo(value); return *this;}

    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline BacktrackDBClusterResult& WithBacktrackTo(Aws::Utils::DateTime&& value) { SetBacktrackTo(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackedFrom() const{ return m_backtrackedFrom; }

    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline void SetBacktrackedFrom(const Aws::Utils::DateTime& value) { m_backtrackedFrom = value; }

    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline void SetBacktrackedFrom(Aws::Utils::DateTime&& value) { m_backtrackedFrom = std::move(value); }

    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline BacktrackDBClusterResult& WithBacktrackedFrom(const Aws::Utils::DateTime& value) { SetBacktrackedFrom(value); return *this;}

    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline BacktrackDBClusterResult& WithBacktrackedFrom(Aws::Utils::DateTime&& value) { SetBacktrackedFrom(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackRequestCreationTime() const{ return m_backtrackRequestCreationTime; }

    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline void SetBacktrackRequestCreationTime(const Aws::Utils::DateTime& value) { m_backtrackRequestCreationTime = value; }

    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline void SetBacktrackRequestCreationTime(Aws::Utils::DateTime&& value) { m_backtrackRequestCreationTime = std::move(value); }

    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline BacktrackDBClusterResult& WithBacktrackRequestCreationTime(const Aws::Utils::DateTime& value) { SetBacktrackRequestCreationTime(value); return *this;}

    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline BacktrackDBClusterResult& WithBacktrackRequestCreationTime(Aws::Utils::DateTime&& value) { SetBacktrackRequestCreationTime(std::move(value)); return *this;}


    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline BacktrackDBClusterResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline BacktrackDBClusterResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline BacktrackDBClusterResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline BacktrackDBClusterResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline BacktrackDBClusterResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;

    Aws::String m_backtrackIdentifier;

    Aws::Utils::DateTime m_backtrackTo;

    Aws::Utils::DateTime m_backtrackedFrom;

    Aws::Utils::DateTime m_backtrackRequestCreationTime;

    Aws::String m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
